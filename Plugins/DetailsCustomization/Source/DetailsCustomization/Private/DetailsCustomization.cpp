// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DetailsCustomization.h"

#define LOCTEXT_NAMESPACE "FDetailsCustomizationModule"

void FDetailsCustomizationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	
}

void FDetailsCustomizationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");


}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDetailsCustomizationModule, DetailsCustomization)