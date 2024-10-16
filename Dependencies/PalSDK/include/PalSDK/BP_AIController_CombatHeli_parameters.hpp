#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.ExecuteUbergraph_BP_AIController_CombatHeli
// 0x0090 (0x0090 - 0x0000)
struct BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0038(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli) == 0x000008, "Wrong alignment on BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli");
static_assert(sizeof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli) == 0x000090, "Wrong size on BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, EntryPoint) == 0x000000, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, K2Node_Event_PossessedPawn) == 0x000018, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000028, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000038, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli, CallFunc_SetActionClassParameter_ReturnValue) == 0x000088, "Member 'BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.On Dead
// 0x00B8 (0x00B8 - 0x0000)
struct BP_AIController_CombatHeli_C_On_Dead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0050(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_CombatHeli_C_On_Dead) == 0x000008, "Wrong alignment on BP_AIController_CombatHeli_C_On_Dead");
static_assert(sizeof(BP_AIController_CombatHeli_C_On_Dead) == 0x0000B8, "Wrong size on BP_AIController_CombatHeli_C_On_Dead");
static_assert(offsetof(BP_AIController_CombatHeli_C_On_Dead, DeadInfo) == 0x000000, "Member 'BP_AIController_CombatHeli_C_On_Dead::DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_On_Dead, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000050, "Member 'BP_AIController_CombatHeli_C_On_Dead::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_On_Dead, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x0000A0, "Member 'BP_AIController_CombatHeli_C_On_Dead::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_On_Dead, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_AIController_CombatHeli_C_On_Dead::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIController_CombatHeli_C_On_Dead, CallFunc_SetActionClassParameter_ReturnValue) == 0x0000B0, "Member 'BP_AIController_CombatHeli_C_On_Dead::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_AIController_CombatHeli_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_CombatHeli_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_AIController_CombatHeli_C_ReceivePossess");
static_assert(sizeof(BP_AIController_CombatHeli_C_ReceivePossess) == 0x000008, "Wrong size on BP_AIController_CombatHeli_C_ReceivePossess");
static_assert(offsetof(BP_AIController_CombatHeli_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_AIController_CombatHeli_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

