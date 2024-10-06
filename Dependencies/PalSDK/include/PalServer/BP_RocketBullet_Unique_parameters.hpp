#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_RocketBullet_Unique.BP_RocketBullet_Unique_C.GetExplosionClass
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketBullet_Unique_C_GetExplosionClass final
{
public:
	class UClass*                                 ExplosionClass;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketBullet_Unique_C_GetExplosionClass) == 0x000008, "Wrong alignment on BP_RocketBullet_Unique_C_GetExplosionClass");
static_assert(sizeof(BP_RocketBullet_Unique_C_GetExplosionClass) == 0x000008, "Wrong size on BP_RocketBullet_Unique_C_GetExplosionClass");
static_assert(offsetof(BP_RocketBullet_Unique_C_GetExplosionClass, ExplosionClass) == 0x000000, "Member 'BP_RocketBullet_Unique_C_GetExplosionClass::ExplosionClass' has a wrong offset!");

}

