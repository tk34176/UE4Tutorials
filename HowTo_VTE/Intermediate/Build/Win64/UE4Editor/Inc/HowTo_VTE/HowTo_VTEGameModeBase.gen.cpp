// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_VTEGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_VTEGameModeBase() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
// End Cross Module References
	void AHowTo_VTEGameModeBase::StaticRegisterNativesAHowTo_VTEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister()
	{
		return AHowTo_VTEGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_HowTo_VTE();
			OuterClass = AHowTo_VTEGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHowTo_VTEGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HowTo_VTEGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HowTo_VTEGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_VTEGameModeBase, 2403113683);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_VTEGameModeBase(Z_Construct_UClass_AHowTo_VTEGameModeBase, &AHowTo_VTEGameModeBase::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("AHowTo_VTEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_VTEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
