// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Countdown.generated.h"

UCLASS()
class QUICKSTART_API ACountdown : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountdown();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// How long, in seconds, the countdown will run
	UPROPERTY(EditAnywhere, Category = "Game Start Countdown")
	int32 CountdownTime;

	// What should the text display when the countdown timer ends
	UPROPERTY(EditAnywhere, Category = "Game Start Countdown")
	FString EndDisplayMessage;

	// The amount of seconds between numbers counting down
	UPROPERTY(EditAnywhere, Category = "Game Start Countdown")
	float CountdownSpeed;

	bool CountdownHasEnded;

	UTextRenderComponent* CountdownText;

	void UpdateTimerDisplay();

	void AdvanceTimer();

	UFUNCTION(BlueprintNativeEvent)
	void CountdownHasFinished();
	virtual void CountdownHasFinished_Implementation();

	FTimerHandle CountdownTimerHandle;
	
};
