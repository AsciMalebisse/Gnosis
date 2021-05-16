// Copyright Malbissa 2019

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "AttributeBase.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class GNOSIS_API UAttributeBase : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FName AttributeName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	float BaseStatValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	float DerivedStatValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	float TertiaryStatValue = 0;

};
