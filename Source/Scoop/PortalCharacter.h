// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PortalCharacter.generated.h"

UCLASS()
class SCOOP_API APortalCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	/* Camera holding component to allow rotation while parent is simulating physics. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/* Game/Player Camera. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* camera;
public:
	// Sets default values for this character's properties
	APortalCharacter();

	/* Ran from portal to a character when teleporting. Do any extra work in the player class after teleporting. */
	void PortalTeleport(class APortal* targetPortal, class APortal* originPortal);

	void SaveVelocity();

	/* Timer function to return the player to the correct orientation after a teleport event from a portal class. */
	UFUNCTION(Category = "Movement")
		void ReturnToOrientation();
private:

	FRotator orientationAtStart; // Rotation of the capsule at the start of re-orientation.
	float orientationStart; // Start time of the orientation update func.
	bool orientation;
	float orientationCorrectionTime = 0.5f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
