#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function ABP_MonsterBase.ABP_MonsterBase_C.CanSpawnFootStepEffect
// 0x0058 (0x0058 - 0x0000)
struct ABP_MonsterBase_C_CanSpawnFootStepEffect final
{
public:
	bool                                          CanSpawn;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Owner;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetFloorPhisicalSurface_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnteredWater_ReturnValue;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFloorPhysMaterial_ReturnValue;         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_CanSpawnFootStepEffect) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_CanSpawnFootStepEffect");
static_assert(sizeof(ABP_MonsterBase_C_CanSpawnFootStepEffect) == 0x000058, "Wrong size on ABP_MonsterBase_C_CanSpawnFootStepEffect");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CanSpawn) == 0x000000, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CanSpawn' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, Owner) == 0x000008, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::Owner' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_GetFloorPhisicalSurface_ReturnValue) == 0x000030, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_GetFloorPhisicalSurface_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000038, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, K2Node_SwitchEnum_CmpSuccess_1) == 0x000040, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsEnteredWater_ReturnValue) == 0x000042, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsEnteredWater_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsValid_ReturnValue_3) == 0x000043, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_HasFloorPhysMaterial_ReturnValue) == 0x000044, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_HasFloorPhysMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000048, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_CanSpawnFootStepEffect, CallFunc_IsValid_ReturnValue_4) == 0x000050, "Member 'ABP_MonsterBase_C_CanSpawnFootStepEffect::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_MonsterBase_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_MonsterBase_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_MonsterBase_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_MonsterBase_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_MonsterBase_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_MonsterBase_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintThreadSafeUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong alignment on ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong size on ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_MonsterBase_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_MonsterBase_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_AnimGraph");
static_assert(sizeof(ABP_MonsterBase_C_AnimGraph) == 0x000010, "Wrong size on ABP_MonsterBase_C_AnimGraph");
static_assert(offsetof(ABP_MonsterBase_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_MonsterBase_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.AimingOverride
// 0x0038 (0x0038 - 0x0000)
struct ABP_MonsterBase_C_AimingOverride final
{
public:
	struct FPoseLink                              DefaultPose;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                               AimRotator_0;                                      // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                              AimingOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_MonsterBase_C_AimingOverride) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_AimingOverride");
static_assert(sizeof(ABP_MonsterBase_C_AimingOverride) == 0x000038, "Wrong size on ABP_MonsterBase_C_AimingOverride");
static_assert(offsetof(ABP_MonsterBase_C_AimingOverride, DefaultPose) == 0x000000, "Member 'ABP_MonsterBase_C_AimingOverride::DefaultPose' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_AimingOverride, AimRotator_0) == 0x000010, "Member 'ABP_MonsterBase_C_AimingOverride::AimRotator_0' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_AimingOverride, AimingOverride_0) == 0x000028, "Member 'ABP_MonsterBase_C_AimingOverride::AimingOverride_0' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.ExecuteUbergraph_ABP_MonsterBase
// 0x0228 (0x0228 - 0x0000)
struct ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralAnimSequenceType                   Temp_byte_Variable;                                // 0x0019(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_1;                              // 0x001A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_1;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_2;                              // 0x003A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_2;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralAnimSequenceType                   Temp_byte_Variable_3;                              // 0x004A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_4;                              // 0x004B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_Map_Find_Value_3;                         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_4;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_4;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue_1;         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_5;                              // 0x006A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_5;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_5;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                            K2Node_Select_Default_1;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalGeneralAnimSequenceType                   Temp_byte_Variable_6;                              // 0x0090(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_Map_Find_Value_6;                         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_6;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_7;                              // 0x00B2(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_7;                         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_7;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_8;                              // 0x00C1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_9;                              // 0x00C2(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_8;                         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_8;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_9;                         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_9;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_10;                             // 0x00E1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable_11;                             // 0x00E2(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E3[0x5];                                       // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_10;                        // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_10;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value_11;                        // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_11;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_3;            // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_4;            // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_5;            // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_6;            // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_7;            // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_17_ImplicitCast; // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_15_ImplicitCast; // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_10_ImplicitCast; // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_12_ImplicitCast; // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase");
static_assert(sizeof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase) == 0x000228, "Wrong size on ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, EntryPoint) == 0x000000, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue_1) == 0x000006, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_bool_Variable) == 0x000007, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue_1) == 0x000009, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue) == 0x00000C, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue_2) == 0x000011, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1) == 0x000014, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable) == 0x000019, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_1) == 0x00001A, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value) == 0x000020, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_1) == 0x000030, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_1) == 0x000038, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000039, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_2) == 0x00003A, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_bool_Variable_1) == 0x00003B, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_2) == 0x000040, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_2) == 0x000048, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue_2) == 0x000049, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_3) == 0x00004A, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_4) == 0x00004B, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_3) == 0x000050, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_3) == 0x000058, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_4) == 0x000060, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_4) == 0x000068, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ThreadSafe_ReturnValue_1) == 0x000069, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ThreadSafe_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_5) == 0x00006A, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_bool_Variable_2) == 0x00006B, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_bool_Variable_3) == 0x00006C, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_5) == 0x000070, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_5) == 0x000078, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue_3) == 0x000079, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_Select_Default) == 0x000080, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_Select_Default_1) == 0x000088, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_6) == 0x000090, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_6) == 0x000098, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_6' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_6) == 0x0000A0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue_3) == 0x0000B0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000B1, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_7) == 0x0000B2, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_7) == 0x0000B8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_7' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_7) == 0x0000C0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_8) == 0x0000C1, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_9) == 0x0000C2, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_8) == 0x0000C8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_8' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_8) == 0x0000D0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_9) == 0x0000D8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_9' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_9) == 0x0000E0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_10) == 0x0000E1, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, Temp_byte_Variable_11) == 0x0000E2, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_10) == 0x0000E8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_10' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_10) == 0x0000F0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_Value_11) == 0x0000F8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_Value_11' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Map_Find_ReturnValue_11) == 0x000100, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Map_Find_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue_4) == 0x000101, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Not_PreBool_ReturnValue_2) == 0x000102, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000103, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue_4) == 0x000104, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000105, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_Event_DeltaTimeX) == 0x000108, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000110, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000118, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000120, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000128, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ReturnValue_1) == 0x000131, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ReturnValue_2) == 0x000132, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ReturnValue_3) == 0x000133, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_2) == 0x000138, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_3) == 0x000140, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_IsValid_ReturnValue_4) == 0x000148, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_DynamicCast_AsPal_Character) == 0x000150, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_4) == 0x000160, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000168, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetGameSetting_ReturnValue) == 0x000170, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanOR_ReturnValue_5) == 0x000178, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_5) == 0x000180, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000188, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_6) == 0x000190, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000198, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_TryGetPawnOwner_ReturnValue_7) == 0x0001A0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_TryGetPawnOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_GetMainMeshByActor_ReturnValue) == 0x0001A8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BooleanAND_ReturnValue_5) == 0x0001B0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BreakVector_X) == 0x0001B8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BreakVector_Y) == 0x0001C0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_BreakVector_Z) == 0x0001C8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001D0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001D8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Lerp_ReturnValue) == 0x0001E0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0001E8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x0001F0, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001F8, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000200, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_StructMemberSet___FloatProperty_17_ImplicitCast) == 0x000208, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_StructMemberSet___FloatProperty_17_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_StructMemberSet___FloatProperty_15_ImplicitCast) == 0x00020C, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_StructMemberSet___FloatProperty_15_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_StructMemberSet___FloatProperty_10_ImplicitCast) == 0x000210, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_StructMemberSet___FloatProperty_10_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, K2Node_StructMemberSet___FloatProperty_12_ImplicitCast) == 0x000214, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::K2Node_StructMemberSet___FloatProperty_12_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000218, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x000220, "Member 'ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.GetFootStepCharacterSpeed
// 0x0038 (0x0038 - 0x0000)
struct ABP_MonsterBase_C_GetFootStepCharacterSpeed final
{
public:
	double                                        CharacterSpeed;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         MovementComponent;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_GetFootStepCharacterSpeed) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_GetFootStepCharacterSpeed");
static_assert(sizeof(ABP_MonsterBase_C_GetFootStepCharacterSpeed) == 0x000038, "Wrong size on ABP_MonsterBase_C_GetFootStepCharacterSpeed");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CharacterSpeed) == 0x000000, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CharacterSpeed' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, MovementComponent) == 0x000008, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::MovementComponent' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepCharacterSpeed, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'ABP_MonsterBase_C_GetFootStepCharacterSpeed::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.GetFootStepEffectScale
// 0x0048 (0x0048 - 0x0000)
struct ABP_MonsterBase_C_GetFootStepEffectScale final
{
public:
	double                                        Scale;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalSizeParameterDataRow               CallFunc_FindPalSizeParameter_RowData;             // 0x0020(0x0018)()
	bool                                          CallFunc_FindPalSizeParameter_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_Scale_ImplicitCast;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_GetFootStepEffectScale) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_GetFootStepEffectScale");
static_assert(sizeof(ABP_MonsterBase_C_GetFootStepEffectScale) == 0x000048, "Wrong size on ABP_MonsterBase_C_GetFootStepEffectScale");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, Scale) == 0x000000, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::Scale' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, CallFunc_FindPalSizeParameter_RowData) == 0x000020, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::CallFunc_FindPalSizeParameter_RowData' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, CallFunc_FindPalSizeParameter_ReturnValue) == 0x000038, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::CallFunc_FindPalSizeParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetFootStepEffectScale, K2Node_FunctionResult_Scale_ImplicitCast) == 0x000040, "Member 'ABP_MonsterBase_C_GetFootStepEffectScale::K2Node_FunctionResult_Scale_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.GetSprint
// 0x0018 (0x0018 - 0x0000)
struct ABP_MonsterBase_C_GetSprint final
{
public:
	bool                                          IsSprint;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSprint_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_GetSprint) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_GetSprint");
static_assert(sizeof(ABP_MonsterBase_C_GetSprint) == 0x000018, "Wrong size on ABP_MonsterBase_C_GetSprint");
static_assert(offsetof(ABP_MonsterBase_C_GetSprint, IsSprint) == 0x000000, "Member 'ABP_MonsterBase_C_GetSprint::IsSprint' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetSprint, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_GetSprint::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_GetSprint, CallFunc_IsSprint_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_GetSprint::CallFunc_IsSprint_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.IsFloatingPal
// 0x0020 (0x0020 - 0x0000)
struct ABP_MonsterBase_C_IsFloatingPal final
{
public:
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;      // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_IsFloatingPal) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_IsFloatingPal");
static_assert(sizeof(ABP_MonsterBase_C_IsFloatingPal) == 0x000020, "Wrong size on ABP_MonsterBase_C_IsFloatingPal");
static_assert(offsetof(ABP_MonsterBase_C_IsFloatingPal, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_IsFloatingPal::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_IsFloatingPal, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000008, "Member 'ABP_MonsterBase_C_IsFloatingPal::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_IsFloatingPal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ABP_MonsterBase_C_IsFloatingPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_IsFloatingPal, CallFunc_GetCollisionProfileName_ReturnValue) == 0x000014, "Member 'ABP_MonsterBase_C_IsFloatingPal::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_IsFloatingPal, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00001C, "Member 'ABP_MonsterBase_C_IsFloatingPal::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.LookAtOverride
// 0x0038 (0x0038 - 0x0000)
struct ABP_MonsterBase_C_LookAtOverride final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                LookAtWorldLocation;                               // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                              LookAtOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_MonsterBase_C_LookAtOverride) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_LookAtOverride");
static_assert(sizeof(ABP_MonsterBase_C_LookAtOverride) == 0x000038, "Wrong size on ABP_MonsterBase_C_LookAtOverride");
static_assert(offsetof(ABP_MonsterBase_C_LookAtOverride, InPose) == 0x000000, "Member 'ABP_MonsterBase_C_LookAtOverride::InPose' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_LookAtOverride, LookAtWorldLocation) == 0x000010, "Member 'ABP_MonsterBase_C_LookAtOverride::LookAtWorldLocation' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_LookAtOverride, LookAtOverride_0) == 0x000028, "Member 'ABP_MonsterBase_C_LookAtOverride::LookAtOverride_0' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.MakeSwitchStatePalSize
// 0x0028 (0x0028 - 0x0000)
struct ABP_MonsterBase_C_MakeSwitchStatePalSize final
{
public:
	class APalMonsterCharacter*                   Pal;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 PalSize;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_MakeSwitchStatePalSize) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_MakeSwitchStatePalSize");
static_assert(sizeof(ABP_MonsterBase_C_MakeSwitchStatePalSize) == 0x000028, "Wrong size on ABP_MonsterBase_C_MakeSwitchStatePalSize");
static_assert(offsetof(ABP_MonsterBase_C_MakeSwitchStatePalSize, Pal) == 0x000000, "Member 'ABP_MonsterBase_C_MakeSwitchStatePalSize::Pal' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_MakeSwitchStatePalSize, PalSize) == 0x000008, "Member 'ABP_MonsterBase_C_MakeSwitchStatePalSize::PalSize' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_MakeSwitchStatePalSize, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_MakeSwitchStatePalSize::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.MonsterPhysics
// 0x0020 (0x0020 - 0x0000)
struct ABP_MonsterBase_C_MonsterPhysics final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              MonsterPhysics_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_MonsterBase_C_MonsterPhysics) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_MonsterPhysics");
static_assert(sizeof(ABP_MonsterBase_C_MonsterPhysics) == 0x000020, "Wrong size on ABP_MonsterBase_C_MonsterPhysics");
static_assert(offsetof(ABP_MonsterBase_C_MonsterPhysics, InPose) == 0x000000, "Member 'ABP_MonsterBase_C_MonsterPhysics::InPose' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_MonsterPhysics, MonsterPhysics_0) == 0x000010, "Member 'ABP_MonsterBase_C_MonsterPhysics::MonsterPhysics_0' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.PlayLandingSound
// 0x0040 (0x0040 - 0x0000)
struct ABP_MonsterBase_C_PlayLandingSound final
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x002C(0x0004)(NoDestructor)
	class FString                                 CallFunc_MakeSwitchStatePalSize_PalSize;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_PlayLandingSound) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_PlayLandingSound");
static_assert(sizeof(ABP_MonsterBase_C_PlayLandingSound) == 0x000040, "Wrong size on ABP_MonsterBase_C_PlayLandingSound");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, Owner) == 0x000000, "Member 'ABP_MonsterBase_C_PlayLandingSound::Owner' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000008, "Member 'ABP_MonsterBase_C_PlayLandingSound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_PlayLandingSound::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000018, "Member 'ABP_MonsterBase_C_PlayLandingSound::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000020, "Member 'ABP_MonsterBase_C_PlayLandingSound::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ABP_MonsterBase_C_PlayLandingSound::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, K2Node_MakeStruct_PalSoundOptions) == 0x00002C, "Member 'ABP_MonsterBase_C_PlayLandingSound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlayLandingSound, CallFunc_MakeSwitchStatePalSize_PalSize) == 0x000030, "Member 'ABP_MonsterBase_C_PlayLandingSound::CallFunc_MakeSwitchStatePalSize_PalSize' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.PlaySound
// 0x0070 (0x0070 - 0x0000)
struct ABP_MonsterBase_C_PlaySound final
{
public:
	class FName                                   SoundId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetDown;                                        // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetUp;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       Options;                                           // 0x0038(0x0004)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Owner;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_None;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0050(0x0004)(NoDestructor)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0054(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_PlaySound) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_PlaySound");
static_assert(sizeof(ABP_MonsterBase_C_PlaySound) == 0x000070, "Wrong size on ABP_MonsterBase_C_PlaySound");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, SoundId) == 0x000000, "Member 'ABP_MonsterBase_C_PlaySound::SoundId' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, OffsetDown) == 0x000008, "Member 'ABP_MonsterBase_C_PlaySound::OffsetDown' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, OffsetUp) == 0x000020, "Member 'ABP_MonsterBase_C_PlaySound::OffsetUp' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, Options) == 0x000038, "Member 'ABP_MonsterBase_C_PlaySound::Options' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, Owner) == 0x000040, "Member 'ABP_MonsterBase_C_PlaySound::Owner' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, Name_None) == 0x000048, "Member 'ABP_MonsterBase_C_PlaySound::Name_None' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, K2Node_MakeStruct_PalSoundOptions) == 0x000050, "Member 'ABP_MonsterBase_C_PlaySound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000054, "Member 'ABP_MonsterBase_C_PlaySound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, CallFunc_NotEqual_NameName_ReturnValue) == 0x00005C, "Member 'ABP_MonsterBase_C_PlaySound::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000060, "Member 'ABP_MonsterBase_C_PlaySound::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000068, "Member 'ABP_MonsterBase_C_PlaySound::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'ABP_MonsterBase_C_PlaySound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PlaySound, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'ABP_MonsterBase_C_PlaySound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.PostUpdateDashEffect
// 0x0010 (0x0010 - 0x0000)
struct ABP_MonsterBase_C_PostUpdateDashEffect final
{
public:
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_PostUpdateDashEffect) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_PostUpdateDashEffect");
static_assert(sizeof(ABP_MonsterBase_C_PostUpdateDashEffect) == 0x000010, "Wrong size on ABP_MonsterBase_C_PostUpdateDashEffect");
static_assert(offsetof(ABP_MonsterBase_C_PostUpdateDashEffect, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_PostUpdateDashEffect::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PostUpdateDashEffect, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ABP_MonsterBase_C_PostUpdateDashEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PostUpdateDashEffect, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000004, "Member 'ABP_MonsterBase_C_PostUpdateDashEffect::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_PostUpdateDashEffect, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000008, "Member 'ABP_MonsterBase_C_PostUpdateDashEffect::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.StartFootStepEffect
// 0x0030 (0x0030 - 0x0000)
struct ABP_MonsterBase_C_StartFootStepEffect final
{
public:
	double                                        CallFunc_GetFootStepEffectScale_Scale;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_StartFootStepEffect) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_StartFootStepEffect");
static_assert(sizeof(ABP_MonsterBase_C_StartFootStepEffect) == 0x000030, "Wrong size on ABP_MonsterBase_C_StartFootStepEffect");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_GetFootStepEffectScale_Scale) == 0x000000, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_GetFootStepEffectScale_Scale' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_GetMainMeshByActor_ReturnValue) == 0x000010, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000020, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_StartFootStepEffect, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000028, "Member 'ABP_MonsterBase_C_StartFootStepEffect::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.StopFootStepEffect
// 0x0001 (0x0001 - 0x0000)
struct ABP_MonsterBase_C_StopFootStepEffect final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_StopFootStepEffect) == 0x000001, "Wrong alignment on ABP_MonsterBase_C_StopFootStepEffect");
static_assert(sizeof(ABP_MonsterBase_C_StopFootStepEffect) == 0x000001, "Wrong size on ABP_MonsterBase_C_StopFootStepEffect");
static_assert(offsetof(ABP_MonsterBase_C_StopFootStepEffect, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_StopFootStepEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.Update Look at Parameter
// 0x0020 (0x0020 - 0x0000)
struct ABP_MonsterBase_C_Update_Look_at_Parameter final
{
public:
	class UPalLookAtComponent*                    LookAtComponent;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_LookatInTime_ImplicitCast;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_LookatOutTime_ImplicitCast;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_Update_Look_at_Parameter) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_Update_Look_at_Parameter");
static_assert(sizeof(ABP_MonsterBase_C_Update_Look_at_Parameter) == 0x000020, "Wrong size on ABP_MonsterBase_C_Update_Look_at_Parameter");
static_assert(offsetof(ABP_MonsterBase_C_Update_Look_at_Parameter, LookAtComponent) == 0x000000, "Member 'ABP_MonsterBase_C_Update_Look_at_Parameter::LookAtComponent' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_Update_Look_at_Parameter, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_Update_Look_at_Parameter::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_Update_Look_at_Parameter, K2Node_VariableSet_LookatInTime_ImplicitCast) == 0x000010, "Member 'ABP_MonsterBase_C_Update_Look_at_Parameter::K2Node_VariableSet_LookatInTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_Update_Look_at_Parameter, K2Node_VariableSet_LookatOutTime_ImplicitCast) == 0x000018, "Member 'ABP_MonsterBase_C_Update_Look_at_Parameter::K2Node_VariableSet_LookatOutTime_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateBasicParameter
// 0x0002 (0x0002 - 0x0000)
struct ABP_MonsterBase_C_UpdateBasicParameter final
{
public:
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_UpdateBasicParameter) == 0x000001, "Wrong alignment on ABP_MonsterBase_C_UpdateBasicParameter");
static_assert(sizeof(ABP_MonsterBase_C_UpdateBasicParameter) == 0x000002, "Wrong size on ABP_MonsterBase_C_UpdateBasicParameter");
static_assert(offsetof(ABP_MonsterBase_C_UpdateBasicParameter, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_UpdateBasicParameter::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateBasicParameter, CallFunc_IsValid_ThreadSafe_ReturnValue_1) == 0x000001, "Member 'ABP_MonsterBase_C_UpdateBasicParameter::CallFunc_IsValid_ThreadSafe_ReturnValue_1' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateDashEffect_AnyThread
// 0x0010 (0x0010 - 0x0000)
struct ABP_MonsterBase_C_UpdateDashEffect_AnyThread final
{
public:
	double                                        CallFunc_GetFootStepCharacterSpeed_CharacterSpeed; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSpawnDashEffect_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_UpdateDashEffect_AnyThread) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_UpdateDashEffect_AnyThread");
static_assert(sizeof(ABP_MonsterBase_C_UpdateDashEffect_AnyThread) == 0x000010, "Wrong size on ABP_MonsterBase_C_UpdateDashEffect_AnyThread");
static_assert(offsetof(ABP_MonsterBase_C_UpdateDashEffect_AnyThread, CallFunc_GetFootStepCharacterSpeed_CharacterSpeed) == 0x000000, "Member 'ABP_MonsterBase_C_UpdateDashEffect_AnyThread::CallFunc_GetFootStepCharacterSpeed_CharacterSpeed' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateDashEffect_AnyThread, CallFunc_CanSpawnDashEffect_ReturnValue) == 0x000008, "Member 'ABP_MonsterBase_C_UpdateDashEffect_AnyThread::CallFunc_CanSpawnDashEffect_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateRidingParameter
// 0x0001 (0x0001 - 0x0000)
struct ABP_MonsterBase_C_UpdateRidingParameter final
{
public:
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_UpdateRidingParameter) == 0x000001, "Wrong alignment on ABP_MonsterBase_C_UpdateRidingParameter");
static_assert(sizeof(ABP_MonsterBase_C_UpdateRidingParameter) == 0x000001, "Wrong size on ABP_MonsterBase_C_UpdateRidingParameter");
static_assert(offsetof(ABP_MonsterBase_C_UpdateRidingParameter, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_UpdateRidingParameter::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateShooterParameter
// 0x0100 (0x0100 - 0x0000)
struct ABP_MonsterBase_C_UpdateShooterParameter final
{
public:
	struct FRotator                               CallFunc_NegateRotator_ReturnValue;                // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ThreadSafe_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase_C_UpdateShooterParameter) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_UpdateShooterParameter");
static_assert(sizeof(ABP_MonsterBase_C_UpdateShooterParameter) == 0x000100, "Wrong size on ABP_MonsterBase_C_UpdateShooterParameter");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_NegateRotator_ReturnValue) == 0x000000, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_NegateRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_MakeRotFromX_ReturnValue) == 0x000018, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Roll) == 0x000030, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Pitch) == 0x000034, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Yaw) == 0x000038, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Roll_1) == 0x00003C, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Pitch_1) == 0x000040, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakRotator_Yaw_1) == 0x000044, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_MakeRotator_ReturnValue) == 0x000048, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000068, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_SelectFloat_ReturnValue) == 0x000078, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_IsValid_ThreadSafe_ReturnValue) == 0x000080, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_IsValid_ThreadSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_MakeRotator_ReturnValue_1) == 0x000088, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0000A0, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakVector_X) == 0x0000B8, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakVector_Y) == 0x0000C0, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_BreakVector_Z) == 0x0000C8, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_MakeVector2D_ReturnValue) == 0x0000D0, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000E0, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000E8, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000F0, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpdateShooterParameter, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x0000F8, "Member 'ABP_MonsterBase_C_UpdateShooterParameter::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpperOverride
// 0x0030 (0x0030 - 0x0000)
struct ABP_MonsterBase_C_UpperOverride final
{
public:
	struct FPoseLink                              NativePose;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              ActionPose;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperOverride_0;                                   // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_MonsterBase_C_UpperOverride) == 0x000008, "Wrong alignment on ABP_MonsterBase_C_UpperOverride");
static_assert(sizeof(ABP_MonsterBase_C_UpperOverride) == 0x000030, "Wrong size on ABP_MonsterBase_C_UpperOverride");
static_assert(offsetof(ABP_MonsterBase_C_UpperOverride, NativePose) == 0x000000, "Member 'ABP_MonsterBase_C_UpperOverride::NativePose' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpperOverride, ActionPose) == 0x000010, "Member 'ABP_MonsterBase_C_UpperOverride::ActionPose' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C_UpperOverride, UpperOverride_0) == 0x000020, "Member 'ABP_MonsterBase_C_UpperOverride::UpperOverride_0' has a wrong offset!");

}

