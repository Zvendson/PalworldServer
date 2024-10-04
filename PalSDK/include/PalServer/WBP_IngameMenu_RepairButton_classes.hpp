#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_RepairButton.WBP_IngameMenu_RepairButton_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_IngameMenu_RepairButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_DisableToEnable;                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_IngameMenu_RepairButton(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void SetEnableButton(bool IsEnableButton);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_RepairButton_C">();
	}
	static class UWBP_IngameMenu_RepairButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_RepairButton_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_RepairButton_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_RepairButton_C");
static_assert(sizeof(UWBP_IngameMenu_RepairButton_C) == 0x0002B8, "Wrong size on UWBP_IngameMenu_RepairButton_C");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_RepairButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, Anm_DisableToEnable) == 0x000280, "Member 'UWBP_IngameMenu_RepairButton_C::Anm_DisableToEnable' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, Anm_NormalToFocus) == 0x000288, "Member 'UWBP_IngameMenu_RepairButton_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, Text_Main) == 0x000290, "Member 'UWBP_IngameMenu_RepairButton_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, WBP_PalInvisibleButton) == 0x000298, "Member 'UWBP_IngameMenu_RepairButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, WBP_PalKeyGuideIcon) == 0x0002A0, "Member 'UWBP_IngameMenu_RepairButton_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairButton_C, OnClicked) == 0x0002A8, "Member 'UWBP_IngameMenu_RepairButton_C::OnClicked' has a wrong offset!");

}

