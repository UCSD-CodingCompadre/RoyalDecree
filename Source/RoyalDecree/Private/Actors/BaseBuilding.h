// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/BuildingInterface.h"
#include "BaseBuilding.generated.h"
/**
 * 
 */
UCLASS()
class ABaseBuilding : public AActor, public IBuildingInterface
{
	GENERATED_BODY()
	
public:

	// Constructor
	ABaseBuilding();

	/*
	Hightlight the actor using render custom depth
	@param none
	@return void
	*/
	virtual void HighlightActor() override;

	/*
	Unhightlight the actor using render custom depth
	@param none
	@return void 
	*/
	virtual void UnHighlightActor() override;

protected:
	
	/*
	Set the ability system component owner
	@param none
	@return void
	*/
	virtual void BeginPlay() override;

private:

	// Hold the static mesh component for the building
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BuildingMesh;
};
