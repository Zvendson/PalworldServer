#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C
// 0x0128 (0x06E0 - 0x05B8)
class UWBP_IngameMenu_PalBox_PalList_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_IngameMenu_PalBox_PalList_C;    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Pal_Alive;                                     // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Pal_Dead;                                      // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_LvText;                            // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_119;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_HP;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_Hunger;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Check;                                       // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HP_Bar;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Huger_Bar;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Locked;                                 // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Pal_List_Bar;                                // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIcon;                                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_HP;                                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelValue;                                   // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxHP;                                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NickName;                                     // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterParameter> LastBindedIndividualParam;                         // 0x0668(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableDragDrop;                                   // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_FocusToNormal();
	void AnmEvent_NormalToFocus();
	void AnmEvent_Reset();
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot_0);
	void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void DraggedButtonEvent(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList(int32 EntryPoint);
	void OnClicked__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot_0);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnInitialized();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnUnhovered__DelegateSignature();
	void OnUpdateHandleSlot(class UPalIndividualCharacterSlot* Slot_0, class UPalIndividualCharacterHandle* LastHandle);
	void OnUpdateSkin(const class FName& NewSkinName);
	void SetEmpty();
	void SetEnableDragDrop(bool bIsEnable);
	void Setup(class UPalIndividualCharacterSlot* TargetSlot_0);
	void Unbind();
	void Update_Level(int32 NewLevel);
	void UpdateFavorite();
	void UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UpdateHunger(double NowHunger, double NowMaxHunger);
	void UpdateNickName(const class FString& NewNickName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_PalBox_PalList_C">();
	}
	static class UWBP_IngameMenu_PalBox_PalList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_PalBox_PalList_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_PalBox_PalList_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_PalBox_PalList_C");
static_assert(sizeof(UWBP_IngameMenu_PalBox_PalList_C) == 0x0006E0, "Wrong size on UWBP_IngameMenu_PalBox_PalList_C");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, UberGraphFrame_WBP_IngameMenu_PalBox_PalList_C) == 0x0005B8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::UberGraphFrame_WBP_IngameMenu_PalBox_PalList_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Anm_Pal_Alive) == 0x0005C0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Anm_Pal_Alive' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Anm_Pal_Dead) == 0x0005C8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Anm_Pal_Dead' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Anm_NormalToFocus) == 0x0005D0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Anm_Focus) == 0x0005D8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Anm_Normal) == 0x0005E0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, BP_PalTextBlock_LvText) == 0x0005E8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::BP_PalTextBlock_LvText' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, CanvasPanel_119) == 0x0005F0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::CanvasPanel_119' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Gauge_HP) == 0x0005F8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Gauge_HP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Gauge_Hunger) == 0x000600, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Gauge_Hunger' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Image_Check) == 0x000608, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Image_Check' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Image_HP_Bar) == 0x000610, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Image_HP_Bar' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Image_Huger_Bar) == 0x000618, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Image_Huger_Bar' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Image_Icon_Locked) == 0x000620, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Image_Icon_Locked' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Image_Pal_List_Bar) == 0x000628, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Image_Pal_List_Bar' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, PalIcon) == 0x000630, "Member 'UWBP_IngameMenu_PalBox_PalList_C::PalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, RetainerBox_0) == 0x000638, "Member 'UWBP_IngameMenu_PalBox_PalList_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Text_HP) == 0x000640, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Text_HP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Text_LevelValue) == 0x000648, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Text_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Text_MaxHP) == 0x000650, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Text_MaxHP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, Text_NickName) == 0x000658, "Member 'UWBP_IngameMenu_PalBox_PalList_C::Text_NickName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, WBP_PalInvisibleButton) == 0x000660, "Member 'UWBP_IngameMenu_PalBox_PalList_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, LastBindedIndividualParam) == 0x000668, "Member 'UWBP_IngameMenu_PalBox_PalList_C::LastBindedIndividualParam' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, OnClicked) == 0x000698, "Member 'UWBP_IngameMenu_PalBox_PalList_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, OnHovered) == 0x0006A8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, TargetSlot) == 0x0006B8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::TargetSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, OnUnhovered) == 0x0006C0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, DynamicMaterial) == 0x0006D0, "Member 'UWBP_IngameMenu_PalBox_PalList_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalList_C, bEnableDragDrop) == 0x0006D8, "Member 'UWBP_IngameMenu_PalBox_PalList_C::bEnableDragDrop' has a wrong offset!");

}

