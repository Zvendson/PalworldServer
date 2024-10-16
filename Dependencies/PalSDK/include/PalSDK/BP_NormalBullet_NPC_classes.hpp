#pragma once

#include "Basic.hpp"

#include "BP_NormalBullet_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_NormalBullet_NPC.BP_NormalBullet_NPC_C
// 0x0000 (0x0380 - 0x0380)
class ABP_NormalBullet_NPC_C : public ABP_NormalBullet_C
{
public:
	void GetHitEffect(class UNiagaraSystem** NiagaraEffect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NormalBullet_NPC_C">();
	}
	static class ABP_NormalBullet_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NormalBullet_NPC_C>();
	}
};
static_assert(alignof(ABP_NormalBullet_NPC_C) == 0x000008, "Wrong alignment on ABP_NormalBullet_NPC_C");
static_assert(sizeof(ABP_NormalBullet_NPC_C) == 0x000380, "Wrong size on ABP_NormalBullet_NPC_C");

}

