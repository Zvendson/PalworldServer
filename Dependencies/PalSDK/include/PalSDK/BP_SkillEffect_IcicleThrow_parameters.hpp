#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_IcicleThrow_C_BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.ExecuteUbergraph_BP_SkillEffect_IcicleThrow
// 0x01E0 (0x01E0 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00A8(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0194(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x01A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow) == 0x0001E0, "Wrong size on BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_IsClosed_Variable) == 0x000038, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_Has_Been_Initd_Variable) == 0x000039, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_SelectFloat_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_FClamp_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_GetFloatValue_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_Has_Been_Initd_Variable_1) == 0x000064, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000070, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_Event_DeltaSeconds) == 0x000074, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_ComponentBoundEvent_HitComponent) == 0x000078, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_ComponentBoundEvent_OtherActor) == 0x000080, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_ComponentBoundEvent_OtherComp) == 0x000088, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000090, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_ComponentBoundEvent_Hit) == 0x0000A8, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000190, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_CreateDelegate_OutputDelegate) == 0x000194, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, K2Node_Event_DeltaSecond) == 0x0001B0, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, Temp_bool_IsClosed_Variable_1) == 0x0001B8, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0001BC, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001C0, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0001C8, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x0001CC, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0001D0, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0001D8, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0001DC, "Member 'BP_SkillEffect_IcicleThrow_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.ExplosionMainBullet
// 0x0090 (0x0090 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_IcicleThrow_Blast_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet) == 0x000010, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet) == 0x000090, "Wrong size on BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_IcicleThrow_C_ExplosionMainBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_IcicleThrow_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_ReceiveHit) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_ReceiveHit");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_ReceiveHit) == 0x000150, "Wrong size on BP_SkillEffect_IcicleThrow_C_ReceiveHit");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, MyComp) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, Other) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveHit, Hit) == 0x000068, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveHit::Hit' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_IcicleThrow_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.ShootMainBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_ShootMainBullet final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_ShootMainBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_ShootMainBullet");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_ShootMainBullet) == 0x000018, "Wrong size on BP_SkillEffect_IcicleThrow_C_ShootMainBullet");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_ShootMainBullet, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_ShootMainBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.UpdateMainBulletRotation
// 0x03C0 (0x03C0 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation final
{
public:
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x01D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue_1;                  // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x02D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast_1;       // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation) == 0x0003C0, "Wrong size on BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_GetActionTargetActor_ReturnValue) == 0x000090, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000098, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000B0, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_GetActionTargetLocation_ReturnValue) == 0x0000E0, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Conv_DoubleToVector_ReturnValue_2) == 0x0000F8, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Conv_DoubleToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_FindLookAtRotation_ReturnValue) == 0x000110, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000128, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_Add_VectorVector_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000158, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000160, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x000168, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000180, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x000198, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_RInterpTo_ReturnValue) == 0x0001B0, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x0001C8, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0001D0, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_RInterpTo_ReturnValue_1) == 0x0002B8, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_RInterpTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x0002D0, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_RInterpTo_DeltaTime_ImplicitCast) == 0x0003B8, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_RInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation, CallFunc_RInterpTo_DeltaTime_ImplicitCast_1) == 0x0003BC, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletRotation::CallFunc_RInterpTo_DeltaTime_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C.UpdateMainBulletScale
// 0x0030 (0x0030 - 0x0000)
struct BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale final
{
public:
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Ease_ReturnValue;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale) == 0x000008, "Wrong alignment on BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale");
static_assert(sizeof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale) == 0x000030, "Wrong size on BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_Ease_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000028, "Member 'BP_SkillEffect_IcicleThrow_C_UpdateMainBulletScale::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

}

