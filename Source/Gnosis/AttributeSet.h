// Copyright Malbissa 2019

#pragma once

#include "AttributeBase.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.generated.h"


UCLASS(ClassGroup = (Custom), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class GNOSIS_API UAttributeSet : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeSet();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Modify")
	void ModifyBaseAttribute(UAttributeBase* BaseAttribute, int Delta);

		
};
