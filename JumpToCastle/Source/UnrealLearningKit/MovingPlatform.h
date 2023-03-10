// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALLEARNINGKIT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector PlatformVelocity = FVector(100, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = "Moving Platform")
	float MovedDistance = 0.0;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MaxMoveDistance = 200.0;

	UPROPERTY(EditAnywhere, Category = "Rotating Platform")
	float RotationSpeed = 50.0;

	FVector StartingLocation = FVector::ZeroVector;

	void MovePlatform(float DeltaTime);

	void RotatePlatform(float DeltaTime);

	bool ShouldPlatformReturn();
};
