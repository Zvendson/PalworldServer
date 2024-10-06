#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalStorageSortTypeButton.WBP_PalStorageSortTypeButton_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_PalStorageSortTypeButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Select;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Unselect;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_UnfocusToFocus;                                // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SortType;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPalCharacterContainerSortType                BindSortType;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<EPalCharacterContainerSortType, struct FDataTableRowHandle> BoxSortTypeMsgIDMap;                               // 0x02D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_Focus();
	void AnmEvent_ResetFocus();
	void AnmEvent_ResetSelect();
	void AnmEvent_Select();
	void AnmEvent_Unfocus();
	void AnmEvent_Unselect();
	void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_PalStorageSortTypeButton(int32 EntryPoint);
	void GetBindedSortType(EPalCharacterContainerSortType* SortType);
	void OnClicked__DelegateSignature(class UWBP_PalStorageSortTypeButton_C* Widget);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageSortTypeButton_C">();
	}
	static class UWBP_PalStorageSortTypeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageSortTypeButton_C>();
	}
};
static_assert(alignof(UWBP_PalStorageSortTypeButton_C) == 0x000008, "Wrong alignment on UWBP_PalStorageSortTypeButton_C");
static_assert(sizeof(UWBP_PalStorageSortTypeButton_C) == 0x000320, "Wrong size on UWBP_PalStorageSortTypeButton_C");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalStorageSortTypeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Anm_Select) == 0x000280, "Member 'UWBP_PalStorageSortTypeButton_C::Anm_Select' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Anm_Unselect) == 0x000288, "Member 'UWBP_PalStorageSortTypeButton_C::Anm_Unselect' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Anm_UnfocusToFocus) == 0x000290, "Member 'UWBP_PalStorageSortTypeButton_C::Anm_UnfocusToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Base) == 0x000298, "Member 'UWBP_PalStorageSortTypeButton_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Frame) == 0x0002A0, "Member 'UWBP_PalStorageSortTypeButton_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, Text_SortType) == 0x0002A8, "Member 'UWBP_PalStorageSortTypeButton_C::Text_SortType' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, WBP_PalInvisibleButton) == 0x0002B0, "Member 'UWBP_PalStorageSortTypeButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, BindSortType) == 0x0002B8, "Member 'UWBP_PalStorageSortTypeButton_C::BindSortType' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, OnClicked) == 0x0002C0, "Member 'UWBP_PalStorageSortTypeButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortTypeButton_C, BoxSortTypeMsgIDMap) == 0x0002D0, "Member 'UWBP_PalStorageSortTypeButton_C::BoxSortTypeMsgIDMap' has a wrong offset!");

}

