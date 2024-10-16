#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BPI_SkillEffect.BPI_SkillEffect_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BPI_SkillEffect_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillEffect_C_ShootBullet) == 0x000008, "Wrong alignment on BPI_SkillEffect_C_ShootBullet");
static_assert(sizeof(BPI_SkillEffect_C_ShootBullet) == 0x000018, "Wrong size on BPI_SkillEffect_C_ShootBullet");
static_assert(offsetof(BPI_SkillEffect_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BPI_SkillEffect_C_ShootBullet::TargetLocation' has a wrong offset!");

}

