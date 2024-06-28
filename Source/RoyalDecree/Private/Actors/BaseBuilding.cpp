// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseBuilding.h"
#include "RoyalDecree/RoyalDecree.h"

// Sets default values
ABaseBuilding::ABaseBuilding()
{

    // Create the building mesh
    BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMesh"));

    // Set the building mesh as the root
    SetRootComponent(BuildingMesh);

    // Set the collision channel visibility to block 
    BuildingMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // Enable rendering custom depth to show outlines
    BuildingMesh->SetRenderCustomDepth(true);
}

// Called when the game starts or when spawned
void ABaseBuilding::BeginPlay()
{

	Super::BeginPlay();

    // Set the static mesh component  as the root component
    SetRootComponent(BuildingMesh);
}

void ABaseBuilding::HighlightActor()
{

    // Enable skeletal mesh render custom depth
    BuildingMesh->SetRenderCustomDepth(true);

    // Set the depth stencil value
	BuildingMesh->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void ABaseBuilding::UnHighlightActor()
{

    // Disable skeletal mesh render custom depth
    BuildingMesh->SetRenderCustomDepth(false);
}
