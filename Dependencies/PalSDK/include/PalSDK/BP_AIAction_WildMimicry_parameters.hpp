#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildMimicry_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ActionAbort");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_WildMimicry_C_ActionAbort");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_WildMimicry_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ActionFinished");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_WildMimicry_C_ActionFinished");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_WildMimicry_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildMimicry_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ActionPause");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_WildMimicry_C_ActionPause");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildMimicry_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ActionResume");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_WildMimicry_C_ActionResume");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildMimicry_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ActionStart");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_WildMimicry_C_ActionStart");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.ExecuteUbergraph_BP_AIAction_WildMimicry
// 0x0078 (0x0078 - 0x0000)
struct BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayAction_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_1;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry");
static_assert(sizeof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry) == 0x000078, "Wrong size on BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, EntryPoint) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_ControlledPawn_4) == 0x000018, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_ControlledPawn_3) == 0x000020, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_ControlledPawn_2) == 0x000028, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_ControlledPawn_1) == 0x000030, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_WithResult) == 0x000038, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_GetActionComponent_ReturnValue) == 0x000048, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_PlayAction_ReturnValue) == 0x000050, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_PlayAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_GetCharacter_ReturnValue_1) == 0x000058, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'BP_AIAction_WildMimicry_C_ExecuteUbergraph_BP_AIAction_WildMimicry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_AIAction_WildMimicry.BP_AIAction_WildMimicry_C.On Damage Mimicry
// 0x00C8 (0x00C8 - 0x0000)
struct BP_AIAction_WildMimicry_C_On_Damage_Mimicry final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0058(0x0050)(NoDestructor)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetAIActionComponent_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry) == 0x000008, "Wrong alignment on BP_AIAction_WildMimicry_C_On_Damage_Mimicry");
static_assert(sizeof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry) == 0x0000C8, "Wrong size on BP_AIAction_WildMimicry_C_On_Damage_Mimicry");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, DamageResult) == 0x000000, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::DamageResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_GetActionComponent_ReturnValue) == 0x000050, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000058, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_GetCharacter_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_IsFriend_ReturnValue) == 0x0000B1, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_GetAIActionComponent_ReturnValue) == 0x0000B8, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_GetAIActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildMimicry_C_On_Damage_Mimicry, CallFunc_SetActionClassParameter_ReturnValue) == 0x0000C0, "Member 'BP_AIAction_WildMimicry_C_On_Damage_Mimicry::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

}

