#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C
// 0x0018 (0x0060 - 0x0048)
class UBP_Status_WithVisualEffect_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPalVisualEffectID                            VisualEffectID;                                    // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoRemoveWhenOtherElemetAdd;                      // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               DamageUpElement;                                   // 0x0052(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               DamageDownElement;                                 // 0x0053(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CommonFlagName;                                    // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsHideEffect;                                      // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint);
	void HasSelfPalElement(EPalElementType MyElement, bool* Has);
	void HideReAddEffect();
	void HideReAddEffectWhenInActiveOtomo();
	void IsIgnoreElement(EPalAdditionalEffectType AddEffect, bool* Ignore);
	void OnBeginStatus();
	void OnEndStatus();
	void ResetDamageDown();
	void ResetDamageUp();
	void SetDamageDown();
	void SetDamageUp();
	void TickStatus(float DeltaTime);
	void _________________________Dead(const struct FPalDeadInfo& DeadInfo);
	void _________________________OtherStatusAdd(const class UPalStatusComponent* StatusComponent, EPalStatusID StatusId_0, class UPalStatusBase* Status);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_WithVisualEffect_C">();
	}
	static class UBP_Status_WithVisualEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_WithVisualEffect_C>();
	}
};
static_assert(alignof(UBP_Status_WithVisualEffect_C) == 0x000008, "Wrong alignment on UBP_Status_WithVisualEffect_C");
static_assert(sizeof(UBP_Status_WithVisualEffect_C) == 0x000060, "Wrong size on UBP_Status_WithVisualEffect_C");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_WithVisualEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, VisualEffectID) == 0x000050, "Member 'UBP_Status_WithVisualEffect_C::VisualEffectID' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, AutoRemoveWhenOtherElemetAdd) == 0x000051, "Member 'UBP_Status_WithVisualEffect_C::AutoRemoveWhenOtherElemetAdd' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, DamageUpElement) == 0x000052, "Member 'UBP_Status_WithVisualEffect_C::DamageUpElement' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, DamageDownElement) == 0x000053, "Member 'UBP_Status_WithVisualEffect_C::DamageDownElement' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, CommonFlagName) == 0x000054, "Member 'UBP_Status_WithVisualEffect_C::CommonFlagName' has a wrong offset!");
static_assert(offsetof(UBP_Status_WithVisualEffect_C, IsHideEffect) == 0x00005C, "Member 'UBP_Status_WithVisualEffect_C::IsHideEffect' has a wrong offset!");

}

