// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Portal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogPortalCharacter, Log, All);

// Sets default values
APortalCharacter::APortalCharacter()
{
	PrimaryActorTick.bCanEverTick = true;// Tick enabled.
	PrimaryActorTick.TickGroup = ETickingGroup::TG_PostPhysics;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Setup camera default settings.
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	camera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

// Called when the game starts or when spawned
void APortalCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (orientation) ReturnToOrientation();
}

// Called to bind functionality to input
void APortalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APortalCharacter::SaveVelocity() {
	savedVelocity = GetCharacterMovement()->Velocity;
}
void APortalCharacter::PortalTeleport(APortal* targetPortal, APortal* originPortal)
{
	// Start timer to return the player to the correct orientation relative to the world.
	orientationStart = GetWorld()->GetTimeSeconds();
	orientationAtStart = GetCapsuleComponent()->GetComponentRotation();
	orientation = true;

	FRotator currentOrientation = GetCapsuleComponent()->GetComponentRotation();
	GetWorld()->GetFirstPlayerController()->SetControlRotation(currentOrientation);

	FVector Dots;
	Dots.X = FVector::DotProduct(savedVelocity, originPortal->GetActorForwardVector());
	Dots.Y = FVector::DotProduct(savedVelocity, originPortal->GetActorRightVector());
	Dots.Z = FVector::DotProduct(savedVelocity, originPortal->GetActorUpVector());

	FVector NewVelocity = Dots.X * targetPortal->GetActorForwardVector()
		+ Dots.Y * targetPortal->GetActorRightVector()
		+ Dots.Z * targetPortal->GetActorUpVector();

	GetMovementComponent()->Velocity = NewVelocity;
}

void APortalCharacter::ReturnToOrientation()
{
	float alpha = (GetWorld()->GetTimeSeconds() - orientationStart) / orientationCorrectionTime;
	FRotator currentOrientation = GetCapsuleComponent()->GetComponentRotation();
	FQuat target = FRotator(0.0f, currentOrientation.Yaw, 0.0f).Quaternion();
	FQuat newOrientation = FQuat::Slerp(currentOrientation.Quaternion(), target, alpha);
	GetCapsuleComponent()->SetWorldRotation(newOrientation.Rotator(), false, nullptr, ETeleportType::TeleportPhysics);
	if (alpha >= 1.0f) orientation = false;
}