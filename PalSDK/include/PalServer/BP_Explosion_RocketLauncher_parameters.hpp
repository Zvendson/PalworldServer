#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.ExecuteUbergraph_BP_Explosion_RocketLauncher
// 0x0010 (0x0010 - 0x0000)
struct BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher) == 0x000008, "Wrong alignment on BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher");
static_assert(sizeof(BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher) == 0x000010, "Wrong size on BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher");
static_assert(offsetof(BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher, EntryPoint) == 0x000000, "Member 'BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher, K2Node_ComponentBoundEvent_PSystem) == 0x000008, "Member 'BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");

// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectType
// 0x0001 (0x0001 - 0x0000)
struct BP_Explosion_RocketLauncher_C_GetEffectType final
{
public:
	EPalAdditionalEffectType                      Effect;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_RocketLauncher_C_GetEffectType) == 0x000001, "Wrong alignment on BP_Explosion_RocketLauncher_C_GetEffectType");
static_assert(sizeof(BP_Explosion_RocketLauncher_C_GetEffectType) == 0x000001, "Wrong size on BP_Explosion_RocketLauncher_C_GetEffectType");
static_assert(offsetof(BP_Explosion_RocketLauncher_C_GetEffectType, Effect) == 0x000000, "Member 'BP_Explosion_RocketLauncher_C_GetEffectType::Effect' has a wrong offset!");

// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectValue
// 0x0004 (0x0004 - 0x0000)
struct BP_Explosion_RocketLauncher_C_GetEffectValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_RocketLauncher_C_GetEffectValue) == 0x000004, "Wrong alignment on BP_Explosion_RocketLauncher_C_GetEffectValue");
static_assert(sizeof(BP_Explosion_RocketLauncher_C_GetEffectValue) == 0x000004, "Wrong size on BP_Explosion_RocketLauncher_C_GetEffectValue");
static_assert(offsetof(BP_Explosion_RocketLauncher_C_GetEffectValue, Value) == 0x000000, "Member 'BP_Explosion_RocketLauncher_C_GetEffectValue::Value' has a wrong offset!");

}

