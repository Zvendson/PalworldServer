#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_GrassPanda_MusclePunch.BP_SkillEffect_Unique_GrassPanda_MusclePunch_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_GrassPanda_MusclePunch_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Audio_Event;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Audio_Event_0;                                     // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_GrassPanda_MusclePunch_C">();
	}
	static class ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C");
static_assert(sizeof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C");
static_assert(offsetof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C, UberGraphFrame_BP_SkillEffect_Unique_GrassPanda_MusclePunch_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::UberGraphFrame_BP_SkillEffect_Unique_GrassPanda_MusclePunch_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C, Audio_Event) == 0x0003D0, "Member 'ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::Audio_Event' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C, Audio_Event_0) == 0x0003D8, "Member 'ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::Audio_Event_0' has a wrong offset!");

}

