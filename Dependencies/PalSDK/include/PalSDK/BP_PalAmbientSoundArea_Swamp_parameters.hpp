#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_PalAmbientSoundArea_Swamp.BP_PalAmbientSoundArea_Swamp_C.GetAreaCollision
// 0x0008 (0x0008 - 0x0000)
struct BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision final
{
public:
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision) == 0x000008, "Wrong alignment on BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision");
static_assert(sizeof(BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision) == 0x000008, "Wrong size on BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision");
static_assert(offsetof(BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision, ReturnValue) == 0x000000, "Member 'BP_PalAmbientSoundArea_Swamp_C_GetAreaCollision::ReturnValue' has a wrong offset!");

}

