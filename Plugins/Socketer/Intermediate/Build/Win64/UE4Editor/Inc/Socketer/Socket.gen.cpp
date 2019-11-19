// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Socketer/Public/Socket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocket() {}
// Cross Module References
	SOCKETER_API UClass* Z_Construct_UClass_USocket_NoRegister();
	SOCKETER_API UClass* Z_Construct_UClass_USocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Socketer();
// End Cross Module References
	void USocket::StaticRegisterNativesUSocket()
	{
	}
	UClass* Z_Construct_UClass_USocket_NoRegister()
	{
		return USocket::StaticClass();
	}
	struct Z_Construct_UClass_USocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Socketer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Socket.h" },
		{ "ModuleRelativePath", "Public/Socket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocket_Statics::ClassParams = {
		&USocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocket_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocket, 221419479);
	template<> SOCKETER_API UClass* StaticClass<USocket>()
	{
		return USocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocket(Z_Construct_UClass_USocket, &USocket::StaticClass, TEXT("/Script/Socketer"), TEXT("USocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
