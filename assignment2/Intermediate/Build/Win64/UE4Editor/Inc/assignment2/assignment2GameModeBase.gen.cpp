// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assignment2/assignment2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeassignment2GameModeBase() {}
// Cross Module References
	ASSIGNMENT2_API UClass* Z_Construct_UClass_Aassignment2GameModeBase_NoRegister();
	ASSIGNMENT2_API UClass* Z_Construct_UClass_Aassignment2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_assignment2();
// End Cross Module References
	void Aassignment2GameModeBase::StaticRegisterNativesAassignment2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aassignment2GameModeBase_NoRegister()
	{
		return Aassignment2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aassignment2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aassignment2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_assignment2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aassignment2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "assignment2GameModeBase.h" },
		{ "ModuleRelativePath", "assignment2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aassignment2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aassignment2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aassignment2GameModeBase_Statics::ClassParams = {
		&Aassignment2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aassignment2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aassignment2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aassignment2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aassignment2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aassignment2GameModeBase, 336487141);
	template<> ASSIGNMENT2_API UClass* StaticClass<Aassignment2GameModeBase>()
	{
		return Aassignment2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aassignment2GameModeBase(Z_Construct_UClass_Aassignment2GameModeBase, &Aassignment2GameModeBase::StaticClass, TEXT("/Script/assignment2"), TEXT("Aassignment2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aassignment2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
