// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Socketer/Public/SocketerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketerBPLibrary() {}
// Cross Module References
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister();
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Socketer();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection();
	SOCKETER_API UClass* Z_Construct_UClass_USocket_NoRegister();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction();
// End Cross Module References
	void USocketerBPLibrary::StaticRegisterNativesUSocketerBPLibrary()
	{
		UClass* Class = USocketerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &USocketerBPLibrary::execCloseConnection },
			{ "Connect", &USocketerBPLibrary::execConnect },
			{ "GetMessage", &USocketerBPLibrary::execGetMessage },
			{ "HasPendingData", &USocketerBPLibrary::execHasPendingData },
			{ "SendMessage", &USocketerBPLibrary::execSendMessage },
			{ "SocketerSampleFunction", &USocketerBPLibrary::execSocketerSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics
	{
		struct SocketerBPLibrary_eventCloseConnection_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventCloseConnection_Parms), &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Close connection to TCP server" },
		{ "Keywords", "Socketer disconnect close tcpclose tcp tcpdisconnect socketerdisconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "CloseConnection", sizeof(SocketerBPLibrary_eventCloseConnection_Parms), Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics
	{
		struct SocketerBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			USocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventConnect_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventConnect_Parms), &Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Connect to a TCP server" },
		{ "Keywords", "Socketer connect tcp tcpconnect socketerconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "Connect", sizeof(SocketerBPLibrary_eventConnect_Parms), Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics
	{
		struct SocketerBPLibrary_eventGetMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventGetMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Get buffer (converted to FText) from server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "GetMessage", sizeof(SocketerBPLibrary_eventGetMessage_Parms), Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics
	{
		struct SocketerBPLibrary_eventHasPendingData_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventHasPendingData_Parms), &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "HasPendingData" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "HasPendingData", sizeof(SocketerBPLibrary_eventHasPendingData_Parms), Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics
	{
		struct SocketerBPLibrary_eventSendMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventSendMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Send message to the server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "SendMessage", sizeof(SocketerBPLibrary_eventSendMessage_Parms), Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics
	{
		struct SocketerBPLibrary_eventSocketerSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSocketerSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSocketerSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketerTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Socketer sample test testing" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "SocketerSampleFunction", sizeof(SocketerBPLibrary_eventSocketerSampleFunction_Parms), Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister()
	{
		return USocketerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USocketerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Socketer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection, "CloseConnection" }, // 1130380374
		{ &Z_Construct_UFunction_USocketerBPLibrary_Connect, "Connect" }, // 2468743867
		{ &Z_Construct_UFunction_USocketerBPLibrary_GetMessage, "GetMessage" }, // 4038094836
		{ &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData, "HasPendingData" }, // 1703611019
		{ &Z_Construct_UFunction_USocketerBPLibrary_SendMessage, "SendMessage" }, // 4267922374
		{ &Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction, "SocketerSampleFunction" }, // 1507020055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SocketerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams = {
		&USocketerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketerBPLibrary, 2816115901);
	template<> SOCKETER_API UClass* StaticClass<USocketerBPLibrary>()
	{
		return USocketerBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketerBPLibrary(Z_Construct_UClass_USocketerBPLibrary, &USocketerBPLibrary::StaticClass, TEXT("/Script/Socketer"), TEXT("USocketerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
