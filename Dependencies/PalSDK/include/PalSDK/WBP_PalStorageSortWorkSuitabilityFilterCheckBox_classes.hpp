#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalCheckBox*                           PalCheckBox_43;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IconPalWork_C*                     WBP_IconPalWork;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPalWorkSuitability                           BindSuitability;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox(int32 EntryPoint);
	void OnChangedStateInternal(bool IsChecked);
	void OnClicked__DelegateSignature(bool bChecked, EPalWorkSuitability WorkSuitbility);
	void SetCheckedState(bool bChecked);
	void SetWorkSuitability(EPalWorkSuitability WorkSuitability);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C">();
	}
	static class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C>();
	}
};
static_assert(alignof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C) == 0x000008, "Wrong alignment on UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C");
static_assert(sizeof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C) == 0x0002B8, "Wrong size on UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, PalCheckBox_43) == 0x000280, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::PalCheckBox_43' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, Text_Title) == 0x000288, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, WBP_IconPalWork) == 0x000290, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::WBP_IconPalWork' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, WBP_PalInvisibleButton) == 0x000298, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, BindSuitability) == 0x0002A0, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::BindSuitability' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C, OnClicked) == 0x0002A8, "Member 'UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::OnClicked' has a wrong offset!");

}

