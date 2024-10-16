#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C
// 0x0018 (0x0348 - 0x0330)
class ABP_SkillEffect_ThrowRockGround_C final : public APalSkillEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_ThrowRockGround(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ThrowRockGround_C">();
	}
	static class ABP_SkillEffect_ThrowRockGround_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ThrowRockGround_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ThrowRockGround_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ThrowRockGround_C");
static_assert(sizeof(ABP_SkillEffect_ThrowRockGround_C) == 0x000348, "Wrong size on ABP_SkillEffect_ThrowRockGround_C");
static_assert(offsetof(ABP_SkillEffect_ThrowRockGround_C, UberGraphFrame) == 0x000330, "Member 'ABP_SkillEffect_ThrowRockGround_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockGround_C, Niagara) == 0x000338, "Member 'ABP_SkillEffect_ThrowRockGround_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockGround_C, DefaultSceneRoot) == 0x000340, "Member 'ABP_SkillEffect_ThrowRockGround_C::DefaultSceneRoot' has a wrong offset!");

}

