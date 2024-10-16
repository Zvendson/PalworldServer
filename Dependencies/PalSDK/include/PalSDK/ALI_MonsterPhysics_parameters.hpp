#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function ALI_MonsterPhysics.ALI_MonsterPhysics_C.MonsterPhysics
// 0x0020 (0x0020 - 0x0000)
struct ALI_MonsterPhysics_C_MonsterPhysics final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              MonsterPhysics_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_MonsterPhysics_C_MonsterPhysics) == 0x000008, "Wrong alignment on ALI_MonsterPhysics_C_MonsterPhysics");
static_assert(sizeof(ALI_MonsterPhysics_C_MonsterPhysics) == 0x000020, "Wrong size on ALI_MonsterPhysics_C_MonsterPhysics");
static_assert(offsetof(ALI_MonsterPhysics_C_MonsterPhysics, InPose) == 0x000000, "Member 'ALI_MonsterPhysics_C_MonsterPhysics::InPose' has a wrong offset!");
static_assert(offsetof(ALI_MonsterPhysics_C_MonsterPhysics, MonsterPhysics_0) == 0x000010, "Member 'ALI_MonsterPhysics_C_MonsterPhysics::MonsterPhysics_0' has a wrong offset!");

}

