#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_AcidRain.BP_Action_AcidRain_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_Action_AcidRain_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_AcidRain_C;               // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_SkillEffect_AcidRain_Cloud_C*       CloudEffect;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_AcidRain_C*             ChargeEffect;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_AcidRain(int32 EntryPoint);
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_AcidRain_C">();
	}
	static class UBP_Action_AcidRain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_AcidRain_C>();
	}
};
static_assert(alignof(UBP_Action_AcidRain_C) == 0x000010, "Wrong alignment on UBP_Action_AcidRain_C");
static_assert(sizeof(UBP_Action_AcidRain_C) == 0x0002D0, "Wrong size on UBP_Action_AcidRain_C");
static_assert(offsetof(UBP_Action_AcidRain_C, UberGraphFrame_BP_Action_AcidRain_C) == 0x0002B8, "Member 'UBP_Action_AcidRain_C::UberGraphFrame_BP_Action_AcidRain_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_AcidRain_C, CloudEffect) == 0x0002C0, "Member 'UBP_Action_AcidRain_C::CloudEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_AcidRain_C, ChargeEffect) == 0x0002C8, "Member 'UBP_Action_AcidRain_C::ChargeEffect' has a wrong offset!");

}

