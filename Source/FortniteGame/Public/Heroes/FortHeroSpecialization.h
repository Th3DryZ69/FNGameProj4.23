

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "Styling/SlateBrush.h"
#include "FortniteGame/FortniteGame.h"
#include "Styling/SlateBrush.h"
#include "Customization/CustomCharacterPart.h"
#include "FortHeroSpecialization.generated.h"

USTRUCT(BlueprintType)
struct FHeroSpecializationAttributeRequirement
{
	GENERATED_BODY()

public:

	//UPROPERTY(EditAnywhere)
	//GameplayAttribute Attribute;    

	UPROPERTY(EditAnywhere)
		float MinimumValue;


};

USTRUCT(BlueprintType)
struct FFortSpecializationSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer RequiredTags;

	UPROPERTY(EditAnywhere)
		int MinimumHeroLevel;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortHeroSpecialization : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Specialization Slots")
		TArray<FFortSpecializationSlot> SpecializationSlots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Parts")
		TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Alteration Definition")
		EFortAlteration AlterationType;

	UPROPERTY(EditAnywhere, Category = "Requirements")
		TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;

	UPROPERTY(EditAnywhere, Category = "Requirements")
		FGameplayTagContainer RequiredTags;

	UPROPERTY(EditAnywhere, Category = "Character Parts")
		bool	bForceShowHeadAccessory;

	UPROPERTY(EditAnywhere, Category = "Character Parts")
		bool	bForceShowBackpack;

	UPROPERTY(EditAnywhere, Category = "Display")
		FSlateBrush CardIconBrush;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("FortHeroSpecialization", GetFName());
	}
};
