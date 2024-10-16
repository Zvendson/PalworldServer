#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_Light_FloorLamp02.BP_BuildObject_Light_FloorLamp02_C.SetActiveLight
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_Light_FloorLamp02_C_SetActiveLight final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Light_FloorLamp02_C_SetActiveLight) == 0x000001, "Wrong alignment on BP_BuildObject_Light_FloorLamp02_C_SetActiveLight");
static_assert(sizeof(BP_BuildObject_Light_FloorLamp02_C_SetActiveLight) == 0x000001, "Wrong size on BP_BuildObject_Light_FloorLamp02_C_SetActiveLight");
static_assert(offsetof(BP_BuildObject_Light_FloorLamp02_C_SetActiveLight, bActive) == 0x000000, "Member 'BP_BuildObject_Light_FloorLamp02_C_SetActiveLight::bActive' has a wrong offset!");

}

