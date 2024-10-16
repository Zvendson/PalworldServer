#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_DragonWave.BP_SkillEffect_DragonWave_C
// 0x0018 (0x03D8 - 0x03C0)
class ABP_SkillEffect_DragonWave_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_DragonWave_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Wave;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void DisableCollision();
	void ExecuteUbergraph_BP_SkillEffect_DragonWave(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_DragonWave_C">();
	}
	static class ABP_SkillEffect_DragonWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_DragonWave_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_DragonWave_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_DragonWave_C");
static_assert(sizeof(ABP_SkillEffect_DragonWave_C) == 0x0003D8, "Wrong size on ABP_SkillEffect_DragonWave_C");
static_assert(offsetof(ABP_SkillEffect_DragonWave_C, UberGraphFrame_BP_SkillEffect_DragonWave_C) == 0x0003C0, "Member 'ABP_SkillEffect_DragonWave_C::UberGraphFrame_BP_SkillEffect_DragonWave_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DragonWave_C, StaticMesh) == 0x0003C8, "Member 'ABP_SkillEffect_DragonWave_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DragonWave_C, Wave) == 0x0003D0, "Member 'ABP_SkillEffect_DragonWave_C::Wave' has a wrong offset!");

}

