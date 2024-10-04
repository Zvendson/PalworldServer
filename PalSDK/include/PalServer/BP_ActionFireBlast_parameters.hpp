#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionFireBlast.BP_ActionFireBlast_C.BulletHasShooted
// 0x00E8 (0x00E8 - 0x0000)
struct BP_ActionFireBlast_C_BulletHasShooted final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0088(0x0038)(NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBlast_C_BulletHasShooted) == 0x000008, "Wrong alignment on BP_ActionFireBlast_C_BulletHasShooted");
static_assert(sizeof(BP_ActionFireBlast_C_BulletHasShooted) == 0x0000E8, "Wrong size on BP_ActionFireBlast_C_BulletHasShooted");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, Effect_0) == 0x000000, "Member 'BP_ActionFireBlast_C_BulletHasShooted::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_GetPredictedTargetLocation_Location) == 0x000008, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_Normal_ReturnValue) == 0x000058, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000070, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_FindEffectByClass_Effect) == 0x0000D8, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_BulletHasShooted, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E1, "Member 'BP_ActionFireBlast_C_BulletHasShooted::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ActionFireBlast.BP_ActionFireBlast_C.CanNextActionCancel
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionFireBlast_C_CanNextActionCancel final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBlast_C_CanNextActionCancel) == 0x000001, "Wrong alignment on BP_ActionFireBlast_C_CanNextActionCancel");
static_assert(sizeof(BP_ActionFireBlast_C_CanNextActionCancel) == 0x000001, "Wrong size on BP_ActionFireBlast_C_CanNextActionCancel");
static_assert(offsetof(BP_ActionFireBlast_C_CanNextActionCancel, ReturnValue) == 0x000000, "Member 'BP_ActionFireBlast_C_CanNextActionCancel::ReturnValue' has a wrong offset!");

// Function BP_ActionFireBlast.BP_ActionFireBlast_C.ExecuteUbergraph_BP_ActionFireBlast
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast) == 0x000008, "Wrong alignment on BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast");
static_assert(sizeof(BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast) == 0x000018, "Wrong size on BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast");
static_assert(offsetof(BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast, EntryPoint) == 0x000000, "Member 'BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast, CallFunc_IsPlayerControlled_ReturnValue) == 0x000010, "Member 'BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");

}

