#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.OnTickForWait
// 0x0004 (0x0004 - 0x0000)
struct BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait) == 0x000004, "Wrong alignment on BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait");
static_assert(sizeof(BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait) == 0x000004, "Wrong size on BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait");
static_assert(offsetof(BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait, DeltaTime) == 0x000000, "Member 'BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait::DeltaTime' has a wrong offset!");

}

