#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C
// 0x0018 (0x03D8 - 0x03C0)
class ABP_SkillEffect_ThunderSword_Blast_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_ThunderSword_Blast_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NiagaraEffect;                                     // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void DisableCollision();
	void EffectTimeout();
	void ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetLifeTime(double Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ThunderSword_Blast_C">();
	}
	static class ABP_SkillEffect_ThunderSword_Blast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ThunderSword_Blast_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ThunderSword_Blast_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ThunderSword_Blast_C");
static_assert(sizeof(ABP_SkillEffect_ThunderSword_Blast_C) == 0x0003D8, "Wrong size on ABP_SkillEffect_ThunderSword_Blast_C");
static_assert(offsetof(ABP_SkillEffect_ThunderSword_Blast_C, UberGraphFrame_BP_SkillEffect_ThunderSword_Blast_C) == 0x0003C0, "Member 'ABP_SkillEffect_ThunderSword_Blast_C::UberGraphFrame_BP_SkillEffect_ThunderSword_Blast_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThunderSword_Blast_C, NiagaraEffect) == 0x0003C8, "Member 'ABP_SkillEffect_ThunderSword_Blast_C::NiagaraEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThunderSword_Blast_C, Sphere) == 0x0003D0, "Member 'ABP_SkillEffect_ThunderSword_Blast_C::Sphere' has a wrong offset!");

}

