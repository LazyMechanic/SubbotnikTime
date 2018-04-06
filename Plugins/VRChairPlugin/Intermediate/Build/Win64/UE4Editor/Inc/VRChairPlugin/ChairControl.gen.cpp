// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ChairControl.h"
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
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_FloatToBytes();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_isConnected();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_PortWrite();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_SerialPort();
	VRCHAIRPLUGIN_API UFunction* Z_Construct_UFunction_UChairControl_StartSending();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UChairControl::StaticRegisterNativesUChairControl()
	{
		UClass* Class = UChairControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePort", &UChairControl::execClosePort },
			{ "Control", &UChairControl::execControl },
			{ "FloatToBytes", &UChairControl::execFloatToBytes },
			{ "isConnected", &UChairControl::execisConnected },
			{ "PortWrite", &UChairControl::execPortWrite },
			{ "SerialPort", &UChairControl::execSerialPort },
			{ "StartSending", &UChairControl::execStartSending },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UChairControl_ClosePort()
	{
		struct ChairControl_eventClosePort_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ChairControl_eventClosePort_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventClosePort_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "ClosePort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventClosePort_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_Control()
	{
		struct ChairControl_eventControl_Parms
		{
			float roll;
			float pitch;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventControl_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll = { UE4CodeGen_Private::EPropertyClass::Float, "roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventControl_Parms, roll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_roll,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "Control", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_FloatToBytes()
	{
		struct ChairControl_eventFloatToBytes_Parms
		{
			float value;
			TArray<uint8> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ChairControl_eventFloatToBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventFloatToBytes_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "FloatToBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ChairControl_eventFloatToBytes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_isConnected()
	{
		struct ChairControl_eventisConnected_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ChairControl_eventisConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventisConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "isConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(ChairControl_eventisConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_PortWrite()
	{
		struct ChairControl_eventPortWrite_Parms
		{
			TArray<uint8> bytes;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ChairControl_eventPortWrite_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventPortWrite_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bytes = { UE4CodeGen_Private::EPropertyClass::Array, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventPortWrite_Parms, bytes), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bytes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bytes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bytes_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "PortWrite", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventPortWrite_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_SerialPort()
	{
		struct ChairControl_eventSerialPort_Parms
		{
			bool connected;
			int32 ComPort;
			UChairControl* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ChairControl_eventSerialPort_Parms, ReturnValue), Z_Construct_UClass_UChairControl_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComPort = { UE4CodeGen_Private::EPropertyClass::Int, "ComPort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventSerialPort_Parms, ComPort), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_connected_SetBit = [](void* Obj){ ((ChairControl_eventSerialPort_Parms*)Obj)->connected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_connected = { UE4CodeGen_Private::EPropertyClass::Bool, "connected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChairControl_eventSerialPort_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_connected_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComPort,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_connected,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "SerialPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(ChairControl_eventSerialPort_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UChairControl_StartSending()
	{
		struct ChairControl_eventStartSending_Parms
		{
			AActor* TargetActor;
			float time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventStartSending_Parms, time), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChairControl_eventStartSending_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChairControl" },
				{ "DefaultToSelf", "TargetActor" },
				{ "HidePin", "TargetActor" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChairControl, "StartSending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChairControl_eventStartSending_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChairControl_NoRegister()
	{
		return UChairControl::StaticClass();
	}
	UClass* Z_Construct_UClass_UChairControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_VRChairPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UChairControl_ClosePort, "ClosePort" }, // 2302251590
				{ &Z_Construct_UFunction_UChairControl_Control, "Control" }, // 4040383509
				{ &Z_Construct_UFunction_UChairControl_FloatToBytes, "FloatToBytes" }, // 4027077633
				{ &Z_Construct_UFunction_UChairControl_isConnected, "isConnected" }, // 1838507261
				{ &Z_Construct_UFunction_UChairControl_PortWrite, "PortWrite" }, // 349781521
				{ &Z_Construct_UFunction_UChairControl_SerialPort, "SerialPort" }, // 4188101567
				{ &Z_Construct_UFunction_UChairControl_StartSending, "StartSending" }, // 3710665151
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "ChairControl" },
				{ "DisplayName", "Chair Control" },
				{ "IncludePath", "ChairControl.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roll_MetaData[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll = { UE4CodeGen_Private::EPropertyClass::Float, "roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UChairControl, roll), METADATA_PARAMS(NewProp_roll_MetaData, ARRAY_COUNT(NewProp_roll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitch_MetaData[] = {
				{ "Category", "ChairControl" },
				{ "ModuleRelativePath", "Public/ChairControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UChairControl, pitch), METADATA_PARAMS(NewProp_pitch_MetaData, ARRAY_COUNT(NewProp_pitch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pitch,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChairControl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChairControl::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChairControl, 1854320546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChairControl(Z_Construct_UClass_UChairControl, &UChairControl::StaticClass, TEXT("/Script/VRChairPlugin"), TEXT("UChairControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChairControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
