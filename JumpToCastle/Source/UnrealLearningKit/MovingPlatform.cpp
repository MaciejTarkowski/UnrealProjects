// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartingLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();

	FVector NewLocation = CurrentLocation + PlatformVelocity * DeltaTime;

	SetActorLocation(NewLocation);

	MovedDistance = FVector::Dist(StartingLocation, NewLocation);

	if (MovedDistance > MaxMoveDistance)
	{
		float OverShoot = MovedDistance - MaxMoveDistance;
		FString Name = GetName();
		UE_LOG(LogTemp, Display, TEXT("%s - Overshoot: %f"), *Name, OverShoot);
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartingLocation = StartingLocation + MoveDirection * MaxMoveDistance;
		SetActorLocation(StartingLocation);
		PlatformVelocity = -PlatformVelocity;
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(FRotator(0, RotationSpeed, 0) * DeltaTime);
}
