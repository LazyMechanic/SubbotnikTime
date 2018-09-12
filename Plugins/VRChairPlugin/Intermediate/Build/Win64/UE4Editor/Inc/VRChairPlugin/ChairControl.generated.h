// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UChairControl;
#ifdef VRCHAIRPLUGIN_ChairControl_generated_h
#error "ChairControl.generated.h already included, missing '#pragma once' in ChairControl.h"
#endif
#define VRCHAIRPLUGIN_ChairControl_generated_h

#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execControl) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Control(Z_Param_roll,Z_Param_pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimerSending) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_UBOOL(Z_Param_log); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TimerSending(Z_Param_time,Z_Param_frequency,Z_Param_log); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_test); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Destroy(Z_Param_test); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSending) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_UBOOL(Z_Param_log); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSending(Z_Param_frequency,Z_Param_log); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatToBytes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UChairControl::FloatToBytes(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosePort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClosePort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPortWrite) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_bytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PortWrite(Z_Param_bytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerialPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_connected); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ComPort); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UChairControl**)Z_Param__Result=UChairControl::SerialPort(Z_Param_Out_connected,Z_Param_ComPort,Z_Param_TargetActor); \
		P_NATIVE_END; \
	}


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execControl) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Control(Z_Param_roll,Z_Param_pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimerSending) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_UBOOL(Z_Param_log); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TimerSending(Z_Param_time,Z_Param_frequency,Z_Param_log); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_test); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Destroy(Z_Param_test); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSending) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_UBOOL(Z_Param_log); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSending(Z_Param_frequency,Z_Param_log); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatToBytes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UChairControl::FloatToBytes(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosePort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClosePort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPortWrite) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_bytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PortWrite(Z_Param_bytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerialPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_connected); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ComPort); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UChairControl**)Z_Param__Result=UChairControl::SerialPort(Z_Param_Out_connected,Z_Param_ComPort,Z_Param_TargetActor); \
		P_NATIVE_END; \
	}


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChairControl(); \
	friend struct Z_Construct_UClass_UChairControl_Statics; \
public: \
	DECLARE_CLASS(UChairControl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRChairPlugin"), NO_API) \
	DECLARE_SERIALIZER(UChairControl)


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUChairControl(); \
	friend struct Z_Construct_UClass_UChairControl_Statics; \
public: \
	DECLARE_CLASS(UChairControl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRChairPlugin"), NO_API) \
	DECLARE_SERIALIZER(UChairControl)


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChairControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChairControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChairControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChairControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChairControl(UChairControl&&); \
	NO_API UChairControl(const UChairControl&); \
public:


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChairControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChairControl(UChairControl&&); \
	NO_API UChairControl(const UChairControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChairControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChairControl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChairControl)


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_PRIVATE_PROPERTY_OFFSET
#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_16_PROLOG
#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_PRIVATE_PROPERTY_OFFSET \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_RPC_WRAPPERS \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_INCLASS \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_PRIVATE_PROPERTY_OFFSET \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_INCLASS_NO_PURE_DECLS \
	SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SubbotnikTime_Plugins_VRChairPlugin_Source_VRChairPlugin_Public_ChairControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
