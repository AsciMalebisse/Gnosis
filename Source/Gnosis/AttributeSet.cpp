// Copyright Malbissa 2019


#include "AttributeSet.h"
#include "AttributeBase.h"

// Sets default values for this component's properties
UAttributeSet::UAttributeSet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttributeSet::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttributeSet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAttributeSet::ModifyBaseAttribute(UAttributeBase* BaseAttribute, int Delta)
{


}
