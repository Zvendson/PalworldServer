#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCharacterSlotButtonBase_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C
// 0x0050 (0x0508 - 0x04B8)
class UWBP_PalCommonCharacterSlotButton_C final : public UWBP_PalCharacterSlotButtonBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonCharacterSlotButton_C; // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_UnselectToSelect;                              // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_36;                                    // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check_0;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check_1;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocusedFrame;                                      // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PushEff;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot;                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_BasePal(bool Enable);
	void AnmEvent_ConsumePal(bool Enable);
	void Destruct();
	void ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint);
	void OnInitialized();
	void PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void RegisterButton(class UCommonButtonBase** Button);
	void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget);
	void SetEnable(bool IsEnable);
	void SetOverrideSize(const struct FVector2D& NewSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonCharacterSlotButton_C">();
	}
	static class UWBP_PalCommonCharacterSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonCharacterSlotButton_C>();
	}
};
static_assert(alignof(UWBP_PalCommonCharacterSlotButton_C) == 0x000008, "Wrong alignment on UWBP_PalCommonCharacterSlotButton_C");
static_assert(sizeof(UWBP_PalCommonCharacterSlotButton_C) == 0x000508, "Wrong size on UWBP_PalCommonCharacterSlotButton_C");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, UberGraphFrame_WBP_PalCommonCharacterSlotButton_C) == 0x0004B8, "Member 'UWBP_PalCommonCharacterSlotButton_C::UberGraphFrame_WBP_PalCommonCharacterSlotButton_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, Anm_UnselectToSelect) == 0x0004C0, "Member 'UWBP_PalCommonCharacterSlotButton_C::Anm_UnselectToSelect' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, Anm_Push) == 0x0004C8, "Member 'UWBP_PalCommonCharacterSlotButton_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, CanvasPanel_36) == 0x0004D0, "Member 'UWBP_PalCommonCharacterSlotButton_C::CanvasPanel_36' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, Check_0) == 0x0004D8, "Member 'UWBP_PalCommonCharacterSlotButton_C::Check_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, Check_1) == 0x0004E0, "Member 'UWBP_PalCommonCharacterSlotButton_C::Check_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, FocusedFrame) == 0x0004E8, "Member 'UWBP_PalCommonCharacterSlotButton_C::FocusedFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, PushEff) == 0x0004F0, "Member 'UWBP_PalCommonCharacterSlotButton_C::PushEff' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, WBP_PalCommonCharacterSlot) == 0x0004F8, "Member 'UWBP_PalCommonCharacterSlotButton_C::WBP_PalCommonCharacterSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlotButton_C, WBP_PalInvisibleButton) == 0x000500, "Member 'UWBP_PalCommonCharacterSlotButton_C::WBP_PalInvisibleButton' has a wrong offset!");

}

