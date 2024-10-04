#pragma once

#include "Basic.hpp"

#include "EPal_NPC_CombatGunState_structs.hpp"
#include "AIModule_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ActionResume");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ActionResume");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.Add Gun Combat State
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State final
{
public:
	EPal_NPC_CombatGunState                       GunState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State) == 0x000018, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State, GunState) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State::GunState' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.AddTimer
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_AddTimer final
{
public:
	double                                        CurrentTime;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_AddTimer) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_AddTimer");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_AddTimer) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_AddTimer");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_AddTimer, CurrentTime) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_AddTimer::CurrentTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_AddTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_AddTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.Change_NextState
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_Change_NextState final
{
public:
	EPal_NPC_CombatGunState                       Next;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_Change_NextState");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState) == 0x000018, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_Change_NextState");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState, Next) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_Change_NextState::Next' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_AIAction_NPC_Combat_Gun_C_Change_NextState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_Change_NextState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_Change_NextState, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_Change_NextState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun
// 0x0080 (0x0080 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPal_NPC_CombatGunState                       Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPal_NPC_CombatGunState                       Temp_byte_Variable_1;                              // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPal_NPC_CombatGunState                       Temp_byte_Variable_2;                              // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TickFinishCheck_ActionFinish;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UPalStateMachineStateBase>  CallFunc_GetFireStateClass_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Tick_DeltaTime_ImplicitCast;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun) == 0x000080, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, Temp_byte_Variable) == 0x000004, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, Temp_byte_Variable_1) == 0x000005, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, Temp_byte_Variable_2) == 0x000006, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_ControlledPawn_4) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_Map_Find_Value) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_ControlledPawn_3) == 0x000020, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_TickFinishCheck_ActionFinish) == 0x00002C, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_TickFinishCheck_ActionFinish' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_ControlledPawn_2) == 0x000030, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_ControlledPawn_1) == 0x000038, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_Event_WithResult) == 0x000048, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_GetControllerRef_NPCAICon) == 0x000050, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000058, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_Map_Remove_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_GetFireStateClass_ReturnValue) == 0x000068, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_GetFireStateClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base) == 0x000070, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, K2Node_ClassDynamicCast_bSuccess) == 0x000078, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_IsValidClass_ReturnValue) == 0x000079, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun, CallFunc_Tick_DeltaTime_ImplicitCast) == 0x00007C, "Member 'BP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun::CallFunc_Tick_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsInMeleeAttackRange
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange final
{
public:
	bool                                          InRange;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandleRef_WeaponHandle;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsMeleeAttackWithGun_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InConeShapAndDitance_Actor_ReturnValue;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange) == 0x000018, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange, InRange) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange::InRange' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange, CallFunc_GetWeaponHandleRef_WeaponHandle) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange::CallFunc_GetWeaponHandleRef_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange, CallFunc_GetIsMeleeAttackWithGun_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange::CallFunc_GetIsMeleeAttackWithGun_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange, CallFunc_InConeShapAndDitance_Actor_ReturnValue) == 0x000011, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange::CallFunc_InConeShapAndDitance_Actor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsNear_FarRange
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange final
{
public:
	double                                        Offset;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Near;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNear_FarRange_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange) == 0x000028, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, Offset) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::Offset' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, Near) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::Near' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, CallFunc_GetControllerRef_NPCAICon) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000018, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, CallFunc_IsNear_FarRange_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::CallFunc_IsNear_FarRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange, CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast) == 0x000024, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange::CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsNear_NearRange
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange final
{
public:
	double                                        Offset;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Near;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNear_NearRange_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange) == 0x000028, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, Offset) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::Offset' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, Near) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::Near' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, CallFunc_GetControllerRef_NPCAICon) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000018, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, CallFunc_IsNear_NearRange_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::CallFunc_IsNear_NearRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange, CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast) == 0x000024, "Member 'BP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange::CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.SwitchTickState
// 0x00C0 (0x00C0 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_SwitchTickState final
{
public:
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInMeleeAttackRange_InRange;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndCurrentState_IsEnd;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndCurrentState_IsEnd_1;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNear_FarRange_Near;                     // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNear_FarRange_Near_1;                   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LineTraceTarget_HitToTarget;              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandleRef_WeaponHandle;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUseSideDashMovement_ReturnValue;       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandleRef_WeaponHandle_1;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomMoveTimeMin_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_AddTimer_CurrentTime;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LineTraceTarget_HitToTarget_1;            // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LineTraceTarget_HitToTarget_2;            // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_AddTimer_CurrentTime_1;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_AddTimer_CurrentTime_2;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue_1;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMagazineEmpty_ReturnValue;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNear_FarRange_Near_2;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_SwitchTickState");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState) == 0x0000C0, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_SwitchTickState");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetActionComponent_ReturnValue) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_ActionIsEmpty_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_ActionIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsInMeleeAttackRange_InRange) == 0x000009, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsInMeleeAttackRange_InRange' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsEndCurrentState_IsEnd) == 0x00000A, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsEndCurrentState_IsEnd' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsEndCurrentState_IsEnd_1) == 0x00000C, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsEndCurrentState_IsEnd_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsNear_FarRange_Near) == 0x00000D, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsNear_FarRange_Near' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsNear_FarRange_Near_1) == 0x00000E, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsNear_FarRange_Near_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_LineTraceTarget_HitToTarget) == 0x00000F, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_LineTraceTarget_HitToTarget' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetWeaponHandleRef_WeaponHandle) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetWeaponHandleRef_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_BooleanAND_ReturnValue_1) == 0x000018, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetUseSideDashMovement_ReturnValue) == 0x000019, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetUseSideDashMovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetWeaponHandleRef_WeaponHandle_1) == 0x000020, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetWeaponHandleRef_WeaponHandle_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_RandomFloatInRange_ReturnValue) == 0x000028, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetRandomMoveTimeMin_ReturnValue) == 0x000030, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetRandomMoveTimeMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_RandomFloat_ReturnValue) == 0x000048, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_AddTimer_CurrentTime) == 0x000058, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_AddTimer_CurrentTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_BooleanAND_ReturnValue_2) == 0x000060, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000061, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_LineTraceTarget_HitToTarget_1) == 0x000062, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_LineTraceTarget_HitToTarget_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_LineTraceTarget_HitToTarget_2) == 0x000063, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_LineTraceTarget_HitToTarget_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_BooleanAND_ReturnValue_3) == 0x000064, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_AddTimer_CurrentTime_1) == 0x000068, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_AddTimer_CurrentTime_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_AddTimer_CurrentTime_2) == 0x000078, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_AddTimer_CurrentTime_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Greater_DoubleDouble_ReturnValue_3) == 0x000080, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Greater_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetActionComponent_ReturnValue_1) == 0x000088, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_ActionIsEmpty_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_ActionIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetControllerRef_NPCAICon) == 0x000098, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_GetWeaponHandle_WeaponHandle) == 0x0000A0, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsMagazineEmpty_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsMagazineEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsNear_FarRange_Near_2) == 0x0000A9, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsNear_FarRange_Near_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_IsValid_ReturnValue) == 0x0000AA, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, K2Node_SwitchEnum_CmpSuccess) == 0x0000AB, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_RandomFloatInRange_Min_ImplicitCast) == 0x0000B0, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_RandomFloatInRange_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_SwitchTickState, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BP_AIAction_NPC_Combat_Gun_C_SwitchTickState::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Gun_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Gun_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Gun_C_ActionTick");
static_assert(sizeof(BP_AIAction_NPC_Combat_Gun_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Gun_C_ActionTick");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Gun_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Gun_C_ActionTick::DeltaSeconds' has a wrong offset!");

}

