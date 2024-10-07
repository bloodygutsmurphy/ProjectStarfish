// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoomerShooter/Public/EnvQueryGenerator_PerceivedActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PerceivedActors() {}
// Cross Module References
	BOOMERSHOOTER_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister();
	BOOMERSHOOTER_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_BoomerShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator_PerceivedActors::StaticRegisterNativesUEnvQueryGenerator_PerceivedActors()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister()
	{
		return UEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListenerContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeKnownActors_MetaData[];
#endif
		static void NewProp_bIncludeKnownActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeKnownActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_BoomerShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Gathers actors perceived by context */" },
		{ "DisplayName", "Perceived Actors" },
		{ "IncludePath", "EnvQueryGenerator_PerceivedActors.h" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Gathers actors perceived by context" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/* If set will be used to filter results */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter results" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass = { "AllowedActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, AllowedActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/* Additional distance limit imposed on the items generated. Perception's range limit still applies. */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Additional distance limit imposed on the items generated. Perception's range limit still applies." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/* The perception listener to use as a source of information. */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "The perception listener to use as a source of information." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext = { "ListenerContext", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, ListenerContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/* If set will be used to filter gathered results so that only actors perceived with a given sense are considered */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter gathered results so that only actors perceived with a given sense are considered" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/*\n\x09 * Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived\n\x09 * at the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet.\")\n\x09 * @See FAIStimulus.bExpired\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "* Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived\n* at the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet.\")\n* @See FAIStimulus.bExpired" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_PerceivedActors*)Obj)->bIncludeKnownActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors = { "bIncludeKnownActors", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_PerceivedActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams = {
		&UEnvQueryGenerator_PerceivedActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_PerceivedActors, 2894415487);
	template<> BOOMERSHOOTER_API UClass* StaticClass<UEnvQueryGenerator_PerceivedActors>()
	{
		return UEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_PerceivedActors(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors, &UEnvQueryGenerator_PerceivedActors::StaticClass, TEXT("/Script/BoomerShooter"), TEXT("UEnvQueryGenerator_PerceivedActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PerceivedActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
