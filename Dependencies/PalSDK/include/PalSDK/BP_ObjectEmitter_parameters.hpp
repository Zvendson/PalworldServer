#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_ObjectEmitter.BP_ObjectEmitter_C.Update Lights
// 0x0048 (0x0048 - 0x0000)
struct BP_ObjectEmitter_C_Update_Lights final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULightComponent*                        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_value_ImplicitCast;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjectEmitter_C_Update_Lights) == 0x000008, "Wrong alignment on BP_ObjectEmitter_C_Update_Lights");
static_assert(sizeof(BP_ObjectEmitter_C_Update_Lights) == 0x000048, "Wrong size on BP_ObjectEmitter_C_Update_Lights");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, Value) == 0x000000, "Member 'BP_ObjectEmitter_C_Update_Lights::Value' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ObjectEmitter_C_Update_Lights::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_ObjectEmitter_C_Update_Lights::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_GetTimeManager_ReturnValue) == 0x000028, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue) == 0x000030, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_GetFloatValue_ReturnValue) == 0x000034, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000038, "Member 'BP_ObjectEmitter_C_Update_Lights::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Lights, K2Node_VariableSet_value_ImplicitCast) == 0x000040, "Member 'BP_ObjectEmitter_C_Update_Lights::K2Node_VariableSet_value_ImplicitCast' has a wrong offset!");

// Function BP_ObjectEmitter.BP_ObjectEmitter_C.Update Emissions
// 0x0048 (0x0048 - 0x0000)
struct BP_ObjectEmitter_C_Update_Emissions final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_value_ImplicitCast;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjectEmitter_C_Update_Emissions) == 0x000008, "Wrong alignment on BP_ObjectEmitter_C_Update_Emissions");
static_assert(sizeof(BP_ObjectEmitter_C_Update_Emissions) == 0x000048, "Wrong size on BP_ObjectEmitter_C_Update_Emissions");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, Value) == 0x000000, "Member 'BP_ObjectEmitter_C_Update_Emissions::Value' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ObjectEmitter_C_Update_Emissions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_ObjectEmitter_C_Update_Emissions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_GetTimeManager_ReturnValue) == 0x000028, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue) == 0x000030, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_GetFloatValue_ReturnValue) == 0x000034, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000038, "Member 'BP_ObjectEmitter_C_Update_Emissions::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_Update_Emissions, K2Node_VariableSet_value_ImplicitCast) == 0x000040, "Member 'BP_ObjectEmitter_C_Update_Emissions::K2Node_VariableSet_value_ImplicitCast' has a wrong offset!");

// Function BP_ObjectEmitter.BP_ObjectEmitter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ObjectEmitter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjectEmitter_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ObjectEmitter_C_ReceiveTick");
static_assert(sizeof(BP_ObjectEmitter_C_ReceiveTick) == 0x000004, "Wrong size on BP_ObjectEmitter_C_ReceiveTick");
static_assert(offsetof(BP_ObjectEmitter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ObjectEmitter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ObjectEmitter.BP_ObjectEmitter_C.ExecuteUbergraph_BP_ObjectEmitter
// 0x0040 (0x0040 - 0x0000)
struct BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter) == 0x000008, "Wrong alignment on BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter");
static_assert(sizeof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter) == 0x000040, "Wrong size on BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, EntryPoint) == 0x000000, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000030, "Member 'BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");

}

