#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuildingInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuildingInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IBuildingInterface
{
	
	GENERATED_BODY()

public:

	/*
	Abstact hightlight actor function to implement custom higlighting
	@param none
	@return void
	*/
	virtual void HighlightActor() = 0;

	/*
	Abstact unhightlight actor function to implement custom unhiglighting
	@param none
	@return void
	*/
	virtual void UnHighlightActor() = 0;
};