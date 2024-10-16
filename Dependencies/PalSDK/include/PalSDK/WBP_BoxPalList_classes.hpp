#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_BoxPalList.WBP_BoxPalList_C
// 0x0120 (0x0568 - 0x0448)
class UWBP_BoxPalList_C final : public UPalUIPalBoxBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_BoxName;                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_PageControle;                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCharacterScrollList_C*          WBP_BoxPalScrollList;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_NextPage;                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_PrevPage;                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeftClickedSlot;                                 // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedSlot;                                // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredSlot;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredSlot;                                   // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         LastPalBoxPageNum;                                 // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC[0x4];                                      // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageControls;                                // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableRowHandle                    BoxNameMsgID;                                      // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<class UPalIndividualCharacterSlot*, class UWBP_PalCommonCharacterSlotButton_C*> CurrentPalBoxSlots;                                // 0x04E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnUpdatedPage;                                     // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CanDragDrop;                                       // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541[0x3];                                      // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     NextPageInputAction;                               // 0x0544(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     PrevPageInputAction;                               // 0x054C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_554[0x4];                                      // 0x0554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCreatedNewSlot;                                  // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_BoxPalList_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_0_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_BoxPalList_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_BoxPalList_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_BoxPalList_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_BoxPalList_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void Construct();
	void ExecuteUbergraph_WBP_BoxPalList(int32 EntryPoint);
	void FindWidgetBySlot(class UPalIndividualCharacterSlot* Slot_0, class UWBP_PalCharacterSlotButtonBase_C** Widget);
	void GetNowDisplayingSlots(TArray<class UWBP_PalCharacterSlotButtonBase_C*>* Slots);
	void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
	void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUpdatedPage__DelegateSignature(int32 NowPage);
	void OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void PreConstruct(bool IsDesignTime);
	void SetCurrentPalBoxPageNum(int32 PageNum);
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BoxPalList_C">();
	}
	static class UWBP_BoxPalList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BoxPalList_C>();
	}
};
static_assert(alignof(UWBP_BoxPalList_C) == 0x000008, "Wrong alignment on UWBP_BoxPalList_C");
static_assert(sizeof(UWBP_BoxPalList_C) == 0x000568, "Wrong size on UWBP_BoxPalList_C");
static_assert(offsetof(UWBP_BoxPalList_C, UberGraphFrame) == 0x000448, "Member 'UWBP_BoxPalList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, BP_PalTextBlock_BoxName) == 0x000450, "Member 'UWBP_BoxPalList_C::BP_PalTextBlock_BoxName' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, HorizontalBox_PageControle) == 0x000458, "Member 'UWBP_BoxPalList_C::HorizontalBox_PageControle' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, WBP_BoxPalScrollList) == 0x000460, "Member 'UWBP_BoxPalList_C::WBP_BoxPalScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, WBP_PalKeyGuideIcon_NextPage) == 0x000468, "Member 'UWBP_BoxPalList_C::WBP_PalKeyGuideIcon_NextPage' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, WBP_PalKeyGuideIcon_PrevPage) == 0x000470, "Member 'UWBP_BoxPalList_C::WBP_PalKeyGuideIcon_PrevPage' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnLeftClickedSlot) == 0x000478, "Member 'UWBP_BoxPalList_C::OnLeftClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnRightClickedSlot) == 0x000488, "Member 'UWBP_BoxPalList_C::OnRightClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnHoveredSlot) == 0x000498, "Member 'UWBP_BoxPalList_C::OnHoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnUnhoveredSlot) == 0x0004A8, "Member 'UWBP_BoxPalList_C::OnUnhoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, LastPalBoxPageNum) == 0x0004B8, "Member 'UWBP_BoxPalList_C::LastPalBoxPageNum' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, PalBoxPageControls) == 0x0004C0, "Member 'UWBP_BoxPalList_C::PalBoxPageControls' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, BoxNameMsgID) == 0x0004D0, "Member 'UWBP_BoxPalList_C::BoxNameMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, CurrentPalBoxSlots) == 0x0004E0, "Member 'UWBP_BoxPalList_C::CurrentPalBoxSlots' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnUpdatedPage) == 0x000530, "Member 'UWBP_BoxPalList_C::OnUpdatedPage' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, CanDragDrop) == 0x000540, "Member 'UWBP_BoxPalList_C::CanDragDrop' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, NextPageInputAction) == 0x000544, "Member 'UWBP_BoxPalList_C::NextPageInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, PrevPageInputAction) == 0x00054C, "Member 'UWBP_BoxPalList_C::PrevPageInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_BoxPalList_C, OnCreatedNewSlot) == 0x000558, "Member 'UWBP_BoxPalList_C::OnCreatedNewSlot' has a wrong offset!");

}

