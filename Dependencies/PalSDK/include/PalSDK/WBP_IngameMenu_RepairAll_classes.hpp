#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_IngameMenu_RepairAll_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_852;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MaterialBase;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_1;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_ItemInfo;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_ItemSlot;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_IngameMenu_RepairAll(int32 EntryPoint);
	void GetFocusTarget(class UWidget** FocusTarget);
	void OnClickedButton__DelegateSignature(bool IsYes);
	void Setup(TArray<class UPalItemSlot*>& TargetItemSlots, TArray<struct FPalStaticItemIdAndNum>& RequireMaterials);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_RepairAll_C">();
	}
	static class UWBP_IngameMenu_RepairAll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_RepairAll_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_RepairAll_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_RepairAll_C");
static_assert(sizeof(UWBP_IngameMenu_RepairAll_C) == 0x0002D0, "Wrong size on UWBP_IngameMenu_RepairAll_C");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_RepairAll_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, Image) == 0x000280, "Member 'UWBP_IngameMenu_RepairAll_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, Image_1) == 0x000288, "Member 'UWBP_IngameMenu_RepairAll_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, Image_852) == 0x000290, "Member 'UWBP_IngameMenu_RepairAll_C::Image_852' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, MaterialBase) == 0x000298, "Member 'UWBP_IngameMenu_RepairAll_C::MaterialBase' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, WBP_CommonButton) == 0x0002A0, "Member 'UWBP_IngameMenu_RepairAll_C::WBP_CommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, WBP_CommonButton_1) == 0x0002A8, "Member 'UWBP_IngameMenu_RepairAll_C::WBP_CommonButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, WrapBox_ItemInfo) == 0x0002B0, "Member 'UWBP_IngameMenu_RepairAll_C::WrapBox_ItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, WrapBox_ItemSlot) == 0x0002B8, "Member 'UWBP_IngameMenu_RepairAll_C::WrapBox_ItemSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_RepairAll_C, OnClickedButton) == 0x0002C0, "Member 'UWBP_IngameMenu_RepairAll_C::OnClickedButton' has a wrong offset!");

}

