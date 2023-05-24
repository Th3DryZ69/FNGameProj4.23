// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortniteGame/FortniteGame.h"
#include "FortAnimNotifyState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAnimNotifyState : public UAnimNotify
{
	GENERATED_BODY()
	
public:
};

UCLASS(BlueprintType)
class UFortAnimNotifyState_EmoteSound : public UAnimNotifyState
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* EmoteSound1P;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* EmoteSound3P;

	UPROPERTY(EditAnywhere)
		bool bPrimarySound;

	UPROPERTY(EditAnywhere)
		FName SoundName;

	UPROPERTY(EditAnywhere)
		float FadeOutTime;

	UPROPERTY(EditAnywhere)
		bool CopyrightedAudio;

	UPROPERTY(EditAnywhere)
		bool bStopAudioOnNotifyEnd;

};
USTRUCT(BlueprintType)
struct FEmoteRetargetingNotifyParameters 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortPlayerAnimBodyType BodyTypeToAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortHandIKOverrideType LeftHandIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortHandIKOverrideType RightHandIK; 
};

UCLASS(BlueprintType)
class UFortAnimNotifyState_EmoteRetargeting : public UAnimNotifyState 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 TArray<FEmoteRetargetingNotifyParameters> EmoteParameters;

};

USTRUCT(BlueprintType)
struct FEmotePropMaterialScalarParam
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	FName ParamName; // 0x00(0x08)

	UPROPERTY(EditAnywhere)
	float ParamValue; // 0x08(0x04)
};

UCLASS(BlueprintType)
class UFortAnimNotifyState_SpawnProp : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector                               LocationOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator                              RotationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector                               Scale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor>                    ActorProp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh*                         SkeletalMeshProp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimationAsset*                       SkeletalMeshPropAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                         bInheritScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                         bAbsoluteScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                         bPropAnimLooping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                         bPrestreamTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                        PrestreamTextureDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh*                           StaticMeshProp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEmotePropMaterialScalarParam> PropMaterialScalarParams;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32  PropId;                                           
	
};