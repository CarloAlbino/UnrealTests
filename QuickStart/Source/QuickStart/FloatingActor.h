// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class QUICKSTART_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void FloatActor(float DeltaTime);

	float RunningTime;

	UPROPERTY(EditAnywhere, Category = "Floating Actor")
	float DampeningDistance;

	bool CanFloat;

	bool UseGameTimer;

	float StartTimer;

	UPROPERTY(EditAnywhere, Category = "Floating Actor")
	float StartTime;

	UPROPERTY(EditAnywhere, Category = "Floating Actor")
	float Speed;

	
};
