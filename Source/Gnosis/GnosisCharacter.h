// Copyright Malbissa 2019

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameFramework/Character.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "GnosisCharacter.generated.h"

UCLASS(config=Game)
class AGnosisCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:

	AGnosisCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurrentTarget")
	AActor* CurrentTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FString CharacterName;

	/** Character's assigned TeamID to determine hostile/friendly characters */
	UPROPERTY(EditAnywhere, Category = "Character")
	uint32 TeamID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameplayTags")
	FGameplayTagContainer CharacterGameplayTags;

	UFUNCTION(BlueprintCallable, Category = "Combat", meta = (DisplayName = "IsOtherHostile"))
	bool IsOtherHostile(AGnosisCharacter* target);

	UFUNCTION(Category = "Combat", meta = (DisplayName = "IsOtherHostile"))
	uint32 GetTeamID();

	UFUNCTION(BlueprintCallable, Category = "GameplayTags", meta = (DisplayName = "AddSingleTagToContainer"))
	void AddSingleTagToContainer(FGameplayTagContainer GameplayTagContainer, FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category = "GameplayTags", meta = (DisplayName = "RemoveSingleTagFromContainer"))
	void RemoveSingleTagFromContainer(FGameplayTagContainer GameplayTagContainer, FGameplayTag TagToRemove);




protected:

	/** Called for forwards/backward input */
	UFUNCTION(BlueprintCallable)
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	UFUNCTION(BlueprintCallable)
	void AutoRun();

	/** Variable that Enables/Disables AutoRun*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool AutoRunEnabled = false;

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

