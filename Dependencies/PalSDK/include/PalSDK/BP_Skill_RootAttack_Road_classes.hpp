#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C
// 0x0010 (0x03D0 - 0x03C0)
class ABP_Skill_RootAttack_Road_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_RootAttack_Road_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      RootAttack;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void End();
	void ExecuteUbergraph_BP_Skill_RootAttack_Road(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_RootAttack_Road_C">();
	}
	static class ABP_Skill_RootAttack_Road_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_RootAttack_Road_C>();
	}
};
static_assert(alignof(ABP_Skill_RootAttack_Road_C) == 0x000008, "Wrong alignment on ABP_Skill_RootAttack_Road_C");
static_assert(sizeof(ABP_Skill_RootAttack_Road_C) == 0x0003D0, "Wrong size on ABP_Skill_RootAttack_Road_C");
static_assert(offsetof(ABP_Skill_RootAttack_Road_C, UberGraphFrame_BP_Skill_RootAttack_Road_C) == 0x0003C0, "Member 'ABP_Skill_RootAttack_Road_C::UberGraphFrame_BP_Skill_RootAttack_Road_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_Road_C, RootAttack) == 0x0003C8, "Member 'ABP_Skill_RootAttack_Road_C::RootAttack' has a wrong offset!");

}

