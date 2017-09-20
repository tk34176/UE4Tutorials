// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Countdown.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdown() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
// End Cross Module References
	void ACountdown::StaticRegisterNativesACountdown()
	{
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HowTo_VTE();
			OuterClass = ACountdown::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACountdown> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Countdown.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Countdown.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACountdown, 293442725);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("ACountdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
