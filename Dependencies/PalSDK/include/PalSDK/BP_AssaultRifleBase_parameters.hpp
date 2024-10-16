#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcAccuracy
// 0x0020 (0x0020 - 0x0000)
struct BP_AssaultRifleBase_C_CalcAccuracy final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetBlurAngle_Angle;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_CalcAccuracy) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_CalcAccuracy");
static_assert(sizeof(BP_AssaultRifleBase_C_CalcAccuracy) == 0x000020, "Wrong size on BP_AssaultRifleBase_C_CalcAccuracy");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcAccuracy, ReturnValue) == 0x000000, "Member 'BP_AssaultRifleBase_C_CalcAccuracy::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcAccuracy, CallFunc_GetBlurAngle_Angle) == 0x000008, "Member 'BP_AssaultRifleBase_C_CalcAccuracy::CallFunc_GetBlurAngle_Angle' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcAccuracy, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_AssaultRifleBase_C_CalcAccuracy::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcAccuracy, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000018, "Member 'BP_AssaultRifleBase_C_CalcAccuracy::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcDPS
// 0x00E8 (0x00E8 - 0x0000)
struct BP_AssaultRifleBase_C_CalcDPS final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponBaseDamage_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_CalcDPS) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_CalcDPS");
static_assert(sizeof(BP_AssaultRifleBase_C_CalcDPS) == 0x0000E8, "Wrong size on BP_AssaultRifleBase_C_CalcDPS");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, ReturnValue) == 0x000000, "Member 'BP_AssaultRifleBase_C_CalcDPS::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_GetWeaponBaseDamage_ReturnValue) == 0x000004, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_GetWeaponBaseDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_GetShootInterval_Time) == 0x000020, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'BP_AssaultRifleBase_C_CalcDPS::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, K2Node_MakeArray_Array) == 0x000098, "Member 'BP_AssaultRifleBase_C_CalcDPS::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x0000D8, "Member 'BP_AssaultRifleBase_C_CalcDPS::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcDPS, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000E0, "Member 'BP_AssaultRifleBase_C_CalcDPS::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcRange
// 0x0050 (0x0050 - 0x0000)
struct BP_AssaultRifleBase_C_CalcRange final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetBulletClass_NewParam;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetBulletProjectileComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_CalcRange) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_CalcRange");
static_assert(sizeof(BP_AssaultRifleBase_C_CalcRange) == 0x000050, "Wrong size on BP_AssaultRifleBase_C_CalcRange");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, ReturnValue) == 0x000000, "Member 'BP_AssaultRifleBase_C_CalcRange::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_GetBulletClass_NewParam) == 0x000008, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_GetBulletClass_NewParam' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_GetBulletProjectileComponent_ReturnValue) == 0x000010, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_GetBulletProjectileComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000030, "Member 'BP_AssaultRifleBase_C_CalcRange::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CalcRange, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BP_AssaultRifleBase_C_CalcRange::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CanShoot
// 0x0020 (0x0020 - 0x0000)
struct BP_AssaultRifleBase_C_CanShoot final
{
public:
	bool                                          Can;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShoot_ReturnValue;                     // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_CanShoot) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_CanShoot");
static_assert(sizeof(BP_AssaultRifleBase_C_CanShoot) == 0x000020, "Wrong size on BP_AssaultRifleBase_C_CanShoot");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, Can) == 0x000000, "Member 'BP_AssaultRifleBase_C_CanShoot::Can' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_AssaultRifleBase_C_CanShoot::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AssaultRifleBase_C_CanShoot::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AssaultRifleBase_C_CanShoot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_AssaultRifleBase_C_CanShoot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_CanShoot, CallFunc_CanShoot_ReturnValue) == 0x00001A, "Member 'BP_AssaultRifleBase_C_CanShoot::CallFunc_CanShoot_ReturnValue' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ExecuteUbergraph_BP_AssaultRifleBase
// 0x0088 (0x0088 - 0x0000)
struct BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalActionBase* Action)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetInitializeInterval_Time;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UPalActionBase*                   K2Node_CustomEvent_action;                         // 0x0050(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionStepBase_C*                   K2Node_DynamicCast_AsBP_Action_Step_Base;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_detachActor;                          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase");
static_assert(sizeof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase) == 0x000088, "Wrong size on BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, EntryPoint) == 0x000000, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_GetShootInterval_Time) == 0x000030, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_GetInitializeInterval_Time) == 0x000038, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_GetInitializeInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_Event_attachActor) == 0x000048, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_Event_attachActor' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_CustomEvent_action) == 0x000050, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_CustomEvent_action' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_DynamicCast_AsBP_Action_Step_Base) == 0x000058, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_DynamicCast_AsBP_Action_Step_Base' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000068, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000070, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, K2Node_Event_detachActor) == 0x000078, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::K2Node_Event_detachActor' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000080, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase, CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast) == 0x000084, "Member 'BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase::CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Get Right Hand Location
// 0x0018 (0x0018 - 0x0000)
struct BP_AssaultRifleBase_C_Get_Right_Hand_Location final
{
public:
	struct FVector                                RightHandLocation;                                 // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_Get_Right_Hand_Location) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_Get_Right_Hand_Location");
static_assert(sizeof(BP_AssaultRifleBase_C_Get_Right_Hand_Location) == 0x000018, "Wrong size on BP_AssaultRifleBase_C_Get_Right_Hand_Location");
static_assert(offsetof(BP_AssaultRifleBase_C_Get_Right_Hand_Location, RightHandLocation) == 0x000000, "Member 'BP_AssaultRifleBase_C_Get_Right_Hand_Location::RightHandLocation' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAimingBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetAimingBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetAimingBlurAngle) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetAimingBlurAngle");
static_assert(sizeof(BP_AssaultRifleBase_C_GetAimingBlurAngle) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetAimingBlurAngle");
static_assert(offsetof(BP_AssaultRifleBase_C_GetAimingBlurAngle, Angle) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetAimingBlurAngle::Angle' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAmmoClass
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetAmmoClass final
{
public:
	class UClass*                                 AmmoClass;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetAmmoClass) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetAmmoClass");
static_assert(sizeof(BP_AssaultRifleBase_C_GetAmmoClass) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetAmmoClass");
static_assert(offsetof(BP_AssaultRifleBase_C_GetAmmoClass, AmmoClass) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetAmmoClass::AmmoClass' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetBlurAngle) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetBlurAngle");
static_assert(sizeof(BP_AssaultRifleBase_C_GetBlurAngle) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetBlurAngle");
static_assert(offsetof(BP_AssaultRifleBase_C_GetBlurAngle, Angle) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetBlurAngle::Angle' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBulletClass
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetBulletClass final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetBulletClass");
static_assert(sizeof(BP_AssaultRifleBase_C_GetBulletClass) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetBulletClass");
static_assert(offsetof(BP_AssaultRifleBase_C_GetBulletClass, NewParam) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetBulletClass::NewParam' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetEquipSocketName
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetEquipSocketName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetEquipSocketName) == 0x000004, "Wrong alignment on BP_AssaultRifleBase_C_GetEquipSocketName");
static_assert(sizeof(BP_AssaultRifleBase_C_GetEquipSocketName) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetEquipSocketName");
static_assert(offsetof(BP_AssaultRifleBase_C_GetEquipSocketName, ReturnValue) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetEquipSocketName::ReturnValue' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetInitializeInterval
// 0x0018 (0x0018 - 0x0000)
struct BP_AssaultRifleBase_C_GetInitializeInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetInitializeInterval) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetInitializeInterval");
static_assert(sizeof(BP_AssaultRifleBase_C_GetInitializeInterval) == 0x000018, "Wrong size on BP_AssaultRifleBase_C_GetInitializeInterval");
static_assert(offsetof(BP_AssaultRifleBase_C_GetInitializeInterval, Time) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetInitializeInterval::Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetInitializeInterval, CallFunc_GetShootInterval_Time) == 0x000008, "Member 'BP_AssaultRifleBase_C_GetInitializeInterval::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetInitializeInterval, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_AssaultRifleBase_C_GetInitializeInterval::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetMuzzleEffect final
{
public:
	class UNiagaraSystem*                         NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetMuzzleEffect) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetMuzzleEffect");
static_assert(sizeof(BP_AssaultRifleBase_C_GetMuzzleEffect) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetMuzzleEffect");
static_assert(offsetof(BP_AssaultRifleBase_C_GetMuzzleEffect, NewParam) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetMuzzleEffect::NewParam' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffectParticle
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetMuzzleEffectParticle final
{
public:
	class UParticleSystem*                        Particle_System;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetMuzzleEffectParticle) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetMuzzleEffectParticle");
static_assert(sizeof(BP_AssaultRifleBase_C_GetMuzzleEffectParticle) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetMuzzleEffectParticle");
static_assert(offsetof(BP_AssaultRifleBase_C_GetMuzzleEffectParticle, Particle_System) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetMuzzleEffectParticle::Particle_System' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleLocation
// 0x0018 (0x0018 - 0x0000)
struct BP_AssaultRifleBase_C_GetMuzzleLocation final
{
public:
	struct FVector                                MuzzleLocation;                                    // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetMuzzleLocation) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetMuzzleLocation");
static_assert(sizeof(BP_AssaultRifleBase_C_GetMuzzleLocation) == 0x000018, "Wrong size on BP_AssaultRifleBase_C_GetMuzzleLocation");
static_assert(offsetof(BP_AssaultRifleBase_C_GetMuzzleLocation, MuzzleLocation) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetMuzzleLocation::MuzzleLocation' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleRotator
// 0x0018 (0x0018 - 0x0000)
struct BP_AssaultRifleBase_C_GetMuzzleRotator final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetMuzzleRotator) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetMuzzleRotator");
static_assert(sizeof(BP_AssaultRifleBase_C_GetMuzzleRotator) == 0x000018, "Wrong size on BP_AssaultRifleBase_C_GetMuzzleRotator");
static_assert(offsetof(BP_AssaultRifleBase_C_GetMuzzleRotator, Rotator) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetMuzzleRotator::Rotator' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetShootInterval
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_GetShootInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetShootInterval) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetShootInterval");
static_assert(sizeof(BP_AssaultRifleBase_C_GetShootInterval) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_GetShootInterval");
static_assert(offsetof(BP_AssaultRifleBase_C_GetShootInterval, Time) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetShootInterval::Time' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetTargetPosition
// 0x0048 (0x0048 - 0x0000)
struct BP_AssaultRifleBase_C_GetTargetPosition final
{
public:
	struct FVector                                TargetPosition_0;                                  // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue; // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GetTargetPosition) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_GetTargetPosition");
static_assert(sizeof(BP_AssaultRifleBase_C_GetTargetPosition) == 0x000048, "Wrong size on BP_AssaultRifleBase_C_GetTargetPosition");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, TargetPosition_0) == 0x000000, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::TargetPosition_0' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000018, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_GetTargetPosition, CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue) == 0x000030, "Member 'BP_AssaultRifleBase_C_GetTargetPosition::CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GeyEjectionPortTransform
// 0x0060 (0x0060 - 0x0000)
struct BP_AssaultRifleBase_C_GeyEjectionPortTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_GeyEjectionPortTransform) == 0x000010, "Wrong alignment on BP_AssaultRifleBase_C_GeyEjectionPortTransform");
static_assert(sizeof(BP_AssaultRifleBase_C_GeyEjectionPortTransform) == 0x000060, "Wrong size on BP_AssaultRifleBase_C_GeyEjectionPortTransform");
static_assert(offsetof(BP_AssaultRifleBase_C_GeyEjectionPortTransform, Transform) == 0x000000, "Member 'BP_AssaultRifleBase_C_GeyEjectionPortTransform::Transform' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Is UseEjectionPort
// 0x0001 (0x0001 - 0x0000)
struct BP_AssaultRifleBase_C_Is_UseEjectionPort final
{
public:
	bool                                          IsUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_Is_UseEjectionPort) == 0x000001, "Wrong alignment on BP_AssaultRifleBase_C_Is_UseEjectionPort");
static_assert(sizeof(BP_AssaultRifleBase_C_Is_UseEjectionPort) == 0x000001, "Wrong size on BP_AssaultRifleBase_C_Is_UseEjectionPort");
static_assert(offsetof(BP_AssaultRifleBase_C_Is_UseEjectionPort, IsUse) == 0x000000, "Member 'BP_AssaultRifleBase_C_Is_UseEjectionPort::IsUse' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_OnAttachWeapon");
static_assert(sizeof(BP_AssaultRifleBase_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_OnAttachWeapon");
static_assert(offsetof(BP_AssaultRifleBase_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_AssaultRifleBase_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnDetachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_OnDetachWeapon final
{
public:
	class AActor*                                 DetachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_OnDetachWeapon) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_OnDetachWeapon");
static_assert(sizeof(BP_AssaultRifleBase_C_OnDetachWeapon) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_OnDetachWeapon");
static_assert(offsetof(BP_AssaultRifleBase_C_OnDetachWeapon, DetachActor) == 0x000000, "Member 'BP_AssaultRifleBase_C_OnDetachWeapon::DetachActor' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ShootBullet
// 0x0330 (0x0330 - 0x0000)
struct BP_AssaultRifleBase_C_ShootBullet final
{
public:
	double                                        BlurAngle;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Local_SocketTransform;                             // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Blur;                                              // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetBlurModifierValue_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShooterComponentBlurRate_ReturnValue;  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDefaultBlurAngle_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReload_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetAmmoClass_AmmoClass;                   // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReload_ReturnValue_1;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBulletCreator*                      CallFunc_GetBulletCreator_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DecrementBullet_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue_1;            // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShoot_can;                             // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB[0x5];                                       // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GeyEjectionPortTransform_Transform;       // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_UseEjectionPort_isUse;                 // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_GetMuzzleEffectParticle_Particle_System;  // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetMuzzleRotator_Rotator;                 // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetMuzzleLocation_MuzzleLocation;         // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_GetMuzzleEffectParticle_Particle_System_1; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetMuzzleRotator_Rotator_1;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetMuzzleLocation_MuzzleLocation_1;       // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_ReturnValue;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_ReturnValue_1;             // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         CallFunc_GetMuzzleEffect_NewParam;                 // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetBulletClass_NewParam;                  // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         CallFunc_GetMuzzleEffect_NewParam_1;               // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetMuzzleLocation_MuzzleLocation_2;       // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetPosition_TargetPosition;         // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                             CallFunc_CreateBullet_ReturnValue;                 // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_Max_ImplicitCast;          // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_Max_ImplicitCast_1;        // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_Min_ImplicitCast;          // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomFloat_Min_ImplicitCast_1;        // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_ShootBullet) == 0x000010, "Wrong alignment on BP_AssaultRifleBase_C_ShootBullet");
static_assert(sizeof(BP_AssaultRifleBase_C_ShootBullet) == 0x000330, "Wrong size on BP_AssaultRifleBase_C_ShootBullet");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, BlurAngle) == 0x000000, "Member 'BP_AssaultRifleBase_C_ShootBullet::BlurAngle' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, Local_SocketTransform) == 0x000008, "Member 'BP_AssaultRifleBase_C_ShootBullet::Local_SocketTransform' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, Blur) == 0x000020, "Member 'BP_AssaultRifleBase_C_ShootBullet::Blur' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetBlurModifierValue_ReturnValue) == 0x000038, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetBlurModifierValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetShooterComponentBlurRate_ReturnValue) == 0x00003C, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetShooterComponentBlurRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Conv_FloatToDouble_ReturnValue) == 0x000040, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Conv_FloatToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetDefaultBlurAngle_ReturnValue) == 0x000048, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetDefaultBlurAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_CanReload_ReturnValue) == 0x000070, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_CanReload_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetOwner_ReturnValue_1) == 0x000078, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_IsEmptyMagazine_ReturnValue) == 0x000080, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000088, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetOwner_ReturnValue_2) == 0x000090, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000098, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetAmmoClass_AmmoClass) == 0x0000A0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetAmmoClass_AmmoClass' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_CanReload_ReturnValue_1) == 0x0000A8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_CanReload_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetOwner_ReturnValue_3) == 0x0000C8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetBulletCreator_ReturnValue) == 0x0000D0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetBulletCreator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_DecrementBullet_ReturnValue) == 0x0000D8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_DecrementBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_IsEmptyMagazine_ReturnValue_1) == 0x0000D9, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_IsEmptyMagazine_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_CanShoot_can) == 0x0000DA, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_CanShoot_can' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GeyEjectionPortTransform_Transform) == 0x0000E0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GeyEjectionPortTransform_Transform' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Is_UseEjectionPort_isUse) == 0x000140, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Is_UseEjectionPort_isUse' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000148, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000150, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleEffectParticle_Particle_System) == 0x000158, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleEffectParticle_Particle_System' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleRotator_Rotator) == 0x000160, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleRotator_Rotator' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleLocation_MuzzleLocation) == 0x000178, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleLocation_MuzzleLocation' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleEffectParticle_Particle_System_1) == 0x000190, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleEffectParticle_Particle_System_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000198, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_IsValid_ReturnValue) == 0x0001A0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleRotator_Rotator_1) == 0x0001A8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleRotator_Rotator_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0001C0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleLocation_MuzzleLocation_1) == 0x0001C8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleLocation_MuzzleLocation_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_ReturnValue) == 0x0001E0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_ReturnValue_1) == 0x0001E4, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleEffect_NewParam) == 0x0001E8, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleEffect_NewParam' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_MakeRotator_ReturnValue) == 0x0001F0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000208, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetBulletClass_NewParam) == 0x000210, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetBulletClass_NewParam' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleEffect_NewParam_1) == 0x000218, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleEffect_NewParam_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetMuzzleLocation_MuzzleLocation_2) == 0x000220, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetMuzzleLocation_MuzzleLocation_2' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_IsValid_ReturnValue_1) == 0x000238, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetTargetPosition_TargetPosition) == 0x000240, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetTargetPosition_TargetPosition' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000258, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_MakeRotFromX_ReturnValue) == 0x000270, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_ComposeRotators_ReturnValue) == 0x000288, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_MakeTransform_ReturnValue) == 0x0002A0, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_CreateBullet_ReturnValue) == 0x000300, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_CreateBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000308, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000310, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_Max_ImplicitCast) == 0x000318, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_Max_ImplicitCast_1) == 0x00031C, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_Min_ImplicitCast) == 0x000320, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_ShootBullet, CallFunc_GetRandomFloat_Min_ImplicitCast_1) == 0x000324, "Member 'BP_AssaultRifleBase_C_ShootBullet::CallFunc_GetRandomFloat_Min_ImplicitCast_1' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.StopReloadWhenRoll
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultRifleBase_C_StopReloadWhenRoll final
{
public:
	const class UPalActionBase*                   Action;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_StopReloadWhenRoll) == 0x000008, "Wrong alignment on BP_AssaultRifleBase_C_StopReloadWhenRoll");
static_assert(sizeof(BP_AssaultRifleBase_C_StopReloadWhenRoll) == 0x000008, "Wrong size on BP_AssaultRifleBase_C_StopReloadWhenRoll");
static_assert(offsetof(BP_AssaultRifleBase_C_StopReloadWhenRoll, Action) == 0x000000, "Member 'BP_AssaultRifleBase_C_StopReloadWhenRoll::Action' has a wrong offset!");

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.IsUseLeftHandAttach
// 0x0002 (0x0002 - 0x0000)
struct BP_AssaultRifleBase_C_IsUseLeftHandAttach final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseLeftHandAttach_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultRifleBase_C_IsUseLeftHandAttach) == 0x000001, "Wrong alignment on BP_AssaultRifleBase_C_IsUseLeftHandAttach");
static_assert(sizeof(BP_AssaultRifleBase_C_IsUseLeftHandAttach) == 0x000002, "Wrong size on BP_AssaultRifleBase_C_IsUseLeftHandAttach");
static_assert(offsetof(BP_AssaultRifleBase_C_IsUseLeftHandAttach, ReturnValue) == 0x000000, "Member 'BP_AssaultRifleBase_C_IsUseLeftHandAttach::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultRifleBase_C_IsUseLeftHandAttach, CallFunc_IsUseLeftHandAttach_ReturnValue) == 0x000001, "Member 'BP_AssaultRifleBase_C_IsUseLeftHandAttach::CallFunc_IsUseLeftHandAttach_ReturnValue' has a wrong offset!");

}

