#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.ExecuteUbergraph_BP_SkillEffect_StoneShotgun
// 0x01B0 (0x01B0 - 0x0000)
struct BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Defencer;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_CustomEvent_DamageInfo;                     // 0x0010(0x00D0)()
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_AttackerComponent;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransform>                     CallFunc_GetBulletTransform_Result;                // 0x0118(0x0010)(ReferenceParm)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item;                           // 0x0130(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_StoneShotgunBullet_C*   CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun) == 0x000010, "Wrong alignment on BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun");
static_assert(sizeof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun) == 0x0001B0, "Wrong size on BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, K2Node_CustomEvent_Defencer) == 0x000008, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::K2Node_CustomEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, K2Node_CustomEvent_DamageInfo) == 0x000010, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, K2Node_CustomEvent_HitCount) == 0x0000E0, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, K2Node_CustomEvent_AttackerComponent) == 0x0000E8, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::K2Node_CustomEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_GetOwner_ReturnValue) == 0x0000F0, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, K2Node_CreateDelegate_OutputDelegate) == 0x0000F8, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, Temp_int_Array_Index_Variable) == 0x000108, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, Temp_int_Loop_Counter_Variable) == 0x00010C, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_Add_IntInt_ReturnValue) == 0x000110, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_GetBulletTransform_Result) == 0x000118, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_GetBulletTransform_Result' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_Array_Get_Item) == 0x000130, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000198, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.GetBulletTransform
// 0x0320 (0x0320 - 0x0000)
struct BP_SkillEffect_StoneShotgun_C_GetBulletTransform final
{
public:
	TArray<struct FTransform>                     Result;                                            // 0x0000(0x0010)(Parm, OutParm)
	struct FTransform                             BaseTransform;                                     // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     TransformList;                                     // 0x0070(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue_1;            // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158[0x8];                                      // 0x0158(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0160(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0290(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1; // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;        // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform) == 0x000010, "Wrong alignment on BP_SkillEffect_StoneShotgun_C_GetBulletTransform");
static_assert(sizeof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform) == 0x000320, "Wrong size on BP_SkillEffect_StoneShotgun_C_GetBulletTransform");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, Result) == 0x000000, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::Result' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, BaseTransform) == 0x000010, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::BaseTransform' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, TransformList) == 0x000070, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::TransformList' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, Temp_int_Variable) == 0x000080, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Divide_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000AC, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Divide_IntInt_ReturnValue_1) == 0x0000B4, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0000B8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_GetActorScale3D_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_GetActorScale3D_ReturnValue_1) == 0x000110, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_GetActorScale3D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000128, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeRotFromX_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeTransform_ReturnValue) == 0x000160, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_BreakTransform_Location) == 0x0001C0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_BreakTransform_Rotation) == 0x0001D8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_BreakTransform_Scale) == 0x0001F0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000208, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000210, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000218, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x000220, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000228, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, Temp_int_Variable_1) == 0x000230, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000238, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000240, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000248, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000250, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeRotator_ReturnValue) == 0x000258, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_ComposeRotators_ReturnValue) == 0x000270, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_IntInt_ReturnValue_3) == 0x000288, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeTransform_ReturnValue_1) == 0x000290, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Array_Add_ReturnValue_1) == 0x0002F0, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x0002F4, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x0002F8, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000300, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1) == 0x000308, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1) == 0x00030C, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000310, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000318, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_GetBulletTransform, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x00031C, "Member 'BP_SkillEffect_StoneShotgun_C_GetBulletTransform::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.OnAttackDelegate_イベント_0
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0 final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0");
static_assert(sizeof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0) == 0x0000E8, "Wrong size on BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0, Defencer) == 0x000000, "Member 'BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0::AttackerComponent' has a wrong offset!");

}

