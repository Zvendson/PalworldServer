#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C
// 0x0198 (0x05C8 - 0x0430)
class UWBP_PalStorageSortSettingWindow_C final : public UPalUIPalBoxSortWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             GridPanel_ElementFilter;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_SuitabilityFilter;                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Dark;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalCheckBox*                           PalCheckBox_Favorite;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Favorite;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_1_C*                  WBP_CommonButton_Sort;                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                 WBP_PalCommonWindow;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_Favorite;                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox;           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_1;         // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_2;         // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_3;         // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton;                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_1;                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_2;                    // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_3;                    // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox;   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1; // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2; // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3; // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalElementType, class UWBP_PalStorageSortElementFilterCheckBox_C*> ElementTypeCheckBoxMap;                            // 0x04E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalStorageSortTypeButton_C*> SortTypeButtonArray;                               // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EPalCharacterContainerSortType                SelectedSortType;                                  // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalWorkSuitability, class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> WorkSuitabilityCheckBoxMap;                        // 0x0548(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalCharacterContainerSortInfo         CachedSortInfo;                                    // 0x0598(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxColumnNum_CheckBox;                             // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyCachedSortInfo();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void CacheSortInfo();
	void CollectFilteringElementType(TArray<EPalElementType>* ElementTypeArray);
	void CollectFilteringSuitability(TArray<EPalWorkSuitability>* SuitabilityArray);
	class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation_0);
	class UWidget* CustomNavi_ToFavoriteCheckBox(EUINavigation Navigation_0);
	class UWidget* CustomNavi_ToSortButton(EUINavigation Navigation_0);
	class UWidget* CustomNavi_ToSortTypeTop(EUINavigation Navigation_0);
	void Destruct();
	void ExecuteUbergraph_WBP_PalStorageSortSettingWindow(int32 EntryPoint);
	void OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType);
	void OnClickedSortTypeButton(class UWBP_PalStorageSortTypeButton_C* Widget);
	void OnClickedWorkSuitabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility);
	void OnInitialized();
	void OnSetup();
	void SetupElementTypeCheckBox();
	void SetupSortTypeButton();
	void SetupWorkSuitabilityCheckBox();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageSortSettingWindow_C">();
	}
	static class UWBP_PalStorageSortSettingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageSortSettingWindow_C>();
	}
};
static_assert(alignof(UWBP_PalStorageSortSettingWindow_C) == 0x000008, "Wrong alignment on UWBP_PalStorageSortSettingWindow_C");
static_assert(sizeof(UWBP_PalStorageSortSettingWindow_C) == 0x0005C8, "Wrong size on UWBP_PalStorageSortSettingWindow_C");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, UberGraphFrame) == 0x000430, "Member 'UWBP_PalStorageSortSettingWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, GridPanel_ElementFilter) == 0x000438, "Member 'UWBP_PalStorageSortSettingWindow_C::GridPanel_ElementFilter' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, GridPanel_SuitabilityFilter) == 0x000440, "Member 'UWBP_PalStorageSortSettingWindow_C::GridPanel_SuitabilityFilter' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, Image_Dark) == 0x000448, "Member 'UWBP_PalStorageSortSettingWindow_C::Image_Dark' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PalCheckBox_Favorite) == 0x000450, "Member 'UWBP_PalStorageSortSettingWindow_C::PalCheckBox_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, Text_Favorite) == 0x000458, "Member 'UWBP_PalStorageSortSettingWindow_C::Text_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_CommonButton_Sort) == 0x000460, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_CommonButton_Sort' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_Menu_btn) == 0x000468, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalCommonWindow) == 0x000470, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalCommonWindow' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalInvisibleButton_Favorite) == 0x000478, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalInvisibleButton_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox) == 0x000480, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_1) == 0x000488, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_2) == 0x000490, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_3) == 0x000498, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton) == 0x0004A0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_1) == 0x0004A8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_2) == 0x0004B0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_3) == 0x0004B8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox) == 0x0004C0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1) == 0x0004C8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2) == 0x0004D0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3) == 0x0004D8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, ElementTypeCheckBoxMap) == 0x0004E0, "Member 'UWBP_PalStorageSortSettingWindow_C::ElementTypeCheckBoxMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, SortTypeButtonArray) == 0x000530, "Member 'UWBP_PalStorageSortSettingWindow_C::SortTypeButtonArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, SelectedSortType) == 0x000540, "Member 'UWBP_PalStorageSortSettingWindow_C::SelectedSortType' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WorkSuitabilityCheckBoxMap) == 0x000548, "Member 'UWBP_PalStorageSortSettingWindow_C::WorkSuitabilityCheckBoxMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, CachedSortInfo) == 0x000598, "Member 'UWBP_PalStorageSortSettingWindow_C::CachedSortInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, MaxColumnNum_CheckBox) == 0x0005C0, "Member 'UWBP_PalStorageSortSettingWindow_C::MaxColumnNum_CheckBox' has a wrong offset!");

}

