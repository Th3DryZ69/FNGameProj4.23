// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"
#include "UnrealEd.h"
#include "AssetTypeCategories.h"
#include "SlateStyle.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFortEditor, All, All)

class FortniteEditor : public IModuleInterface
{
public:
	virtual void StartupModule() override;
};