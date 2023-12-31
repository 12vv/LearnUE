// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class LEARNINGKIT_API AMovingPlatform : public AActor
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

	UPROPERTY(EditAnyWhere, Category="Moving Platform")
	FVector Velocity = FVector(100, 0, 0);
	UPROPERTY(EditAnyWhere, Category="Moving Platform")
	float MovedDistance = 100;
	// UPROPERTY(EditAnyWhere, Catogory="Moving Platform")
	// float DistanceMoved = -1;

	FVector startPos;

};
