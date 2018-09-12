// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRChairPlugin/Public/ChairControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChairControl() {}
// Cross Module References
	VRCHAIRPLUGIN_API UClass* Z_Construct_UClass_UChairControl_NoRegister();
	VRCHAIRPLUGIN_API UClass* Z_Construct_UClass_UChairControl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VRChairPlugin();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_ClosePort();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_Control();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_Destroy();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_FloatToBytes();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_isConnected();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_PortWrite();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_SerialPort();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_StartSending();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_StopSending();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_TimerSending();
// End Cross Module References
	void UChairControl::StaticRegisterNativesUChairControl()
	{
		UClass* Class = UChairControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePort", &UChairControl::execClosePort },
			{ "Control", &UChairControl::execControl },
			{ "Destroy", &UChairControl::execDestroy },
			{ "FloatToBytes", &UChairControl::execFloatToBytes },
			{ "isConnected", &UChairControl::execisConnected },
			{ "PortWrite", &UChairControl::execPortWrite },
			{ "SerialPort", &UChairControl::execSerialPort },
			{ "StartSending", &UChairControl::execStartSending },
			{ "StopSending", &UChairControl::execStopSending },
			{ "TimerSending", &UChairControl::execTimerSending },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChairControl_ClosePort_Statics
	{
		struct ChairControl_eventClosePort_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChairControl_ClosePort_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChairControl_eventClosePort_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_ClosePort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventClosePort_Parms), &Z_Construct_UFunction_UChairControl_ClosePort_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_ClosePort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_ClosePort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_ClosePort_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_ClosePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "ClosePort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventClosePort_Parms), Z_Construct_UFunction_UChairControl_ClosePort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_ClosePort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_ClosePort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_ClosePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_ClosePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_ClosePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_Control_Statics
	{
		struct ChairControl_eventControl_Parms
		{
			float roll;
			float pitch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_Control_Statics::NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventControl_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_Control_Statics::NewProp_roll = { UE4CodeGen_Private::EPropertyClass::Float, "roll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventControl_Parms, roll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_Control_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_Control_Statics::NewProp_pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_Control_Statics::NewProp_roll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_Control_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "DisplayName", "Set Rotation Chair" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_Control_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "Control", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventControl_Parms), Z_Construct_UFunction_UChairControl_Control_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_Control_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_Control_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_Control_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_Control()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_Control_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_Destroy_Statics
	{
		struct ChairControl_eventDestroy_Parms
		{
			AActor* test;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_test;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChairControl_Destroy_Statics::NewProp_test = { UE4CodeGen_Private::EPropertyClass::Object, "test", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventDestroy_Parms, test), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_Destroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_Destroy_Statics::NewProp_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "Destroy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ChairControl_eventDestroy_Parms), Z_Construct_UFunction_UChairControl_Destroy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_Destroy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_Destroy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_FloatToBytes_Statics
	{
		struct ChairControl_eventFloatToBytes_Parms
		{
			float value;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ChairControl_eventFloatToBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventFloatToBytes_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "FloatToBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ChairControl_eventFloatToBytes_Parms), Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_FloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_FloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_isConnected_Statics
	{
		struct ChairControl_eventisConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChairControl_isConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChairControl_eventisConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_isConnected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventisConnected_Parms), &Z_Construct_UFunction_UChairControl_isConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_isConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_isConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_isConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_isConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "isConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(ChairControl_eventisConnected_Parms), Z_Construct_UFunction_UChairControl_isConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_isConnected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_isConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_isConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_isConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_isConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_PortWrite_Statics
	{
		struct ChairControl_eventPortWrite_Parms
		{
			TArray<uint8> bytes;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChairControl_eventPortWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventPortWrite_Parms), &Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_bytes = { UE4CodeGen_Private::EPropertyClass::Array, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventPortWrite_Parms, bytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_bytes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_PortWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_PortWrite_Statics::NewProp_bytes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_PortWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_PortWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "PortWrite", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventPortWrite_Parms), Z_Construct_UFunction_UChairControl_PortWrite_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_PortWrite_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_PortWrite_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_PortWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_PortWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_PortWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_SerialPort_Statics
	{
		struct ChairControl_eventSerialPort_Parms
		{
			bool connected;
			int32 ComPort;
			AActor* TargetActor;
			UChairControl* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComPort;
		static void NewProp_connected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_connected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ChairControl_eventSerialPort_Parms, ReturnValue), Z_Construct_UClass_UChairControl_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventSerialPort_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_ComPort = { UE4CodeGen_Private::EPropertyClass::Int, "ComPort", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventSerialPort_Parms, ComPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_connected_SetBit(void* Obj)
	{
		((ChairControl_eventSerialPort_Parms*)Obj)->connected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_connected = { UE4CodeGen_Private::EPropertyClass::Bool, "connected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventSerialPort_Parms), &Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_connected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_SerialPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_ComPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_SerialPort_Statics::NewProp_connected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_SerialPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "DefaultToSelf", "TargetActor" },
		{ "HidePin", "TargetActor" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_SerialPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "SerialPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(ChairControl_eventSerialPort_Parms), Z_Construct_UFunction_UChairControl_SerialPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_SerialPort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_SerialPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_SerialPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_SerialPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_SerialPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_StartSending_Statics
	{
		struct ChairControl_eventStartSending_Parms
		{
			float frequency;
			bool log;
		};
		static void NewProp_log_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_log;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_log_SetBit(void* Obj)
	{
		((ChairControl_eventStartSending_Parms*)Obj)->log = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_log = { UE4CodeGen_Private::EPropertyClass::Bool, "log", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventStartSending_Parms), &Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_log_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventStartSending_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_StartSending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_log,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_StartSending_Statics::NewProp_frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_StartSending_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Frequency, Log" },
		{ "Category", "ChairControl" },
		{ "CPP_Default_frequency", "0.050000" },
		{ "CPP_Default_log", "false" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_StartSending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "StartSending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventStartSending_Parms), Z_Construct_UFunction_UChairControl_StartSending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_StartSending_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_StartSending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_StartSending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_StartSending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_StartSending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_StopSending_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_StopSending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_StopSending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "StopSending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_StopSending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_StopSending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_StopSending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_StopSending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChairControl_TimerSending_Statics
	{
		struct ChairControl_eventTimerSending_Parms
		{
			float time;
			float frequency;
			bool log;
		};
		static void NewProp_log_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_log;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_log_SetBit(void* Obj)
	{
		((ChairControl_eventTimerSending_Parms*)Obj)->log = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_log = { UE4CodeGen_Private::EPropertyClass::Bool, "log", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventTimerSending_Parms), &Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_log_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventTimerSending_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventTimerSending_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChairControl_TimerSending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_log,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChairControl_TimerSending_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChairControl_TimerSending_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Frequency, Log" },
		{ "Category", "ChairControl" },
		{ "CPP_Default_frequency", "0.050000" },
		{ "CPP_Default_log", "false" },
		{ "CPP_Default_time", "1.000000" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChairControl_TimerSending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "TimerSending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventTimerSending_Parms), Z_Construct_UFunction_UChairControl_TimerSending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_TimerSending_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChairControl_TimerSending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChairControl_TimerSending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChairControl_TimerSending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChairControl_TimerSending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChairControl_NoRegister()
	{
		return UChairControl::StaticClass();
	}
	struct Z_Construct_UClass_UChairControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChairControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRChairPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChairControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChairControl_ClosePort, "ClosePort" }, // 3505065696
		{ &Z_Construct_UFunction_UChairControl_Control, "Control" }, // 983399515
		{ &Z_Construct_UFunction_UChairControl_Destroy, "Destroy" }, // 2481863886
		{ &Z_Construct_UFunction_UChairControl_FloatToBytes, "FloatToBytes" }, // 2254925516
		{ &Z_Construct_UFunction_UChairControl_isConnected, "isConnected" }, // 668701287
		{ &Z_Construct_UFunction_UChairControl_PortWrite, "PortWrite" }, // 4240032277
		{ &Z_Construct_UFunction_UChairControl_SerialPort, "SerialPort" }, // 2493104636
		{ &Z_Construct_UFunction_UChairControl_StartSending, "StartSending" }, // 4255104075
		{ &Z_Construct_UFunction_UChairControl_StopSending, "StopSending" }, // 141217401
		{ &Z_Construct_UFunction_UChairControl_TimerSending, "TimerSending" }, // 4093504474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChairControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ChairControl" },
		{ "DisplayName", "Chair Control" },
		{ "IncludePath", "ChairControl.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChairControl_Statics::NewProp_roll_MetaData[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChairControl_Statics::NewProp_roll = { UE4CodeGen_Private::EPropertyClass::Float, "roll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UChairControl, roll), METADATA_PARAMS(Z_Construct_UClass_UChairControl_Statics::NewProp_roll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChairControl_Statics::NewProp_roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChairControl_Statics::NewProp_pitch_MetaData[] = {
		{ "Category", "ChairControl" },
		{ "ModuleRelativePath", "Public/ChairControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChairControl_Statics::NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UChairControl, pitch), METADATA_PARAMS(Z_Construct_UClass_UChairControl_Statics::NewProp_pitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChairControl_Statics::NewProp_pitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChairControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChairControl_Statics::NewProp_roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChairControl_Statics::NewProp_pitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChairControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChairControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChairControl_Statics::ClassParams = {
		&UChairControl::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UChairControl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UChairControl_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UChairControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChairControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChairControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChairControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChairControl, 1464485205);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChairControl(Z_Construct_UClass_UChairControl, &UChairControl::StaticClass, TEXT("/Script/VRChairPlugin"), TEXT("UChairControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChairControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
