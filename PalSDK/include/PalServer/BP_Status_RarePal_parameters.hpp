#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_Status_RarePal.BP_Status_RarePal_C.ExecuteUbergraph_BP_Status_RarePal
// 0x0030 (0x0030 - 0x0000)
struct BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0008(0x0010)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_Local_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal) == 0x000008, "Wrong alignment on BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal");
static_assert(sizeof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal) == 0x000030, "Wrong size on BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal");
static_assert(offsetof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal, EntryPoint) == 0x000000, "Member 'BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000008, "Member 'BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal, CallFunc_AddVisualEffect_Local_ReturnValue) == 0x000028, "Member 'BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal::CallFunc_AddVisualEffect_Local_ReturnValue' has a wrong offset!");

}

