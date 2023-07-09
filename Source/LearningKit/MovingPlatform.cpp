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
	startPos = GetActorLocation();

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentPos = GetActorLocation();
	CurrentPos = CurrentPos + (Velocity*DeltaTime);
	SetActorLocation(CurrentPos);

	float DistanceMoved = FVector::Dist(startPos, CurrentPos);
	
	if(DistanceMoved > MovedDistance){
		FVector MoveDir = Velocity.GetSafeNormal();
		startPos = startPos + MoveDir*MovedDistance;
		SetActorLocation(startPos);
		Velocity = -Velocity;
		
	}

}

