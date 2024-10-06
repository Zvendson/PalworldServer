#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.SetMaterialProgress
// 0x0028 (0x0028 - 0x0000)
struct BP_PalRideMarkerSit_C_SetMaterialProgress final
{
public:
	double                                        Progress;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSit_C_SetMaterialProgress) == 0x000008, "Wrong alignment on BP_PalRideMarkerSit_C_SetMaterialProgress");
static_assert(sizeof(BP_PalRideMarkerSit_C_SetMaterialProgress) == 0x000028, "Wrong size on BP_PalRideMarkerSit_C_SetMaterialProgress");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, Progress) == 0x000000, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::Progress' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_SetMaterialProgress, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000024, "Member 'BP_PalRideMarkerSit_C_SetMaterialProgress::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ResetMaterial
// 0x0014 (0x0014 - 0x0000)
struct BP_PalRideMarkerSit_C_ResetMaterial final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSit_C_ResetMaterial) == 0x000004, "Wrong alignment on BP_PalRideMarkerSit_C_ResetMaterial");
static_assert(sizeof(BP_PalRideMarkerSit_C_ResetMaterial) == 0x000014, "Wrong size on BP_PalRideMarkerSit_C_ResetMaterial");
static_assert(offsetof(BP_PalRideMarkerSit_C_ResetMaterial, Temp_int_Variable) == 0x000000, "Member 'BP_PalRideMarkerSit_C_ResetMaterial::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ResetMaterial, CallFunc_GetNumMaterials_ReturnValue) == 0x000004, "Member 'BP_PalRideMarkerSit_C_ResetMaterial::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ResetMaterial, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalRideMarkerSit_C_ResetMaterial::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ResetMaterial, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PalRideMarkerSit_C_ResetMaterial::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ResetMaterial, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_PalRideMarkerSit_C_ResetMaterial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalRideMarkerSit_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSit_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalRideMarkerSit_C_ReceiveTick");
static_assert(sizeof(BP_PalRideMarkerSit_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalRideMarkerSit_C_ReceiveTick");
static_assert(offsetof(BP_PalRideMarkerSit_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalRideMarkerSit_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.OnChangeRiding_イベント_0
// 0x0001 (0x0001 - 0x0000)
struct BP_PalRideMarkerSit_C_OnChangeRiding______________0 final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSit_C_OnChangeRiding______________0) == 0x000001, "Wrong alignment on BP_PalRideMarkerSit_C_OnChangeRiding______________0");
static_assert(sizeof(BP_PalRideMarkerSit_C_OnChangeRiding______________0) == 0x000001, "Wrong size on BP_PalRideMarkerSit_C_OnChangeRiding______________0");
static_assert(offsetof(BP_PalRideMarkerSit_C_OnChangeRiding______________0, IsEnable) == 0x000000, "Member 'BP_PalRideMarkerSit_C_OnChangeRiding______________0::IsEnable' has a wrong offset!");

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ExecuteUbergraph_BP_PalRideMarkerSit
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsEnable)>                K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetMaterialProgress_progress_ImplicitCast; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit) == 0x000008, "Wrong alignment on BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit");
static_assert(sizeof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit) == 0x0000E8, "Wrong size on BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, EntryPoint) == 0x000000, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000008, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000020, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, K2Node_CustomEvent_IsEnable) == 0x00003C, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GetNumMaterials_ReturnValue) == 0x000040, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GetTimeRange_MinTime) == 0x000050, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GetTimeRange_MaxTime) == 0x000054, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, Temp_int_Variable) == 0x000058, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000060, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GetFloatValue_ReturnValue) == 0x000070, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000074, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000090, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000098, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x0000D0, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0000D8, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit, CallFunc_SetMaterialProgress_progress_ImplicitCast) == 0x0000E0, "Member 'BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit::CallFunc_SetMaterialProgress_progress_ImplicitCast' has a wrong offset!");

}

