#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalItemSlotButtonBase_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C
// 0x0068 (0x05E0 - 0x0578)
class UWBP_PalCommonItemSlotButton_C final : public UWBP_PalItemSlotButtonBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonItemSlotButton_C;      // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_UnselectToSelect;                              // 0x0580(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Unlock;                                        // 0x0588(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Lock;                                          // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Unfocus;                                       // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FocusedFrame;                                      // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocusedFrame_1;                                    // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PushEff;                                           // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PushEff_1;                                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemSlot_C*               WBP_PalCommonItemSlot;                             // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Lock();
	void AnmEvent_Push();
	void AnmEvent_Unfocus();
	void AnmEvent_Unlock();
	void DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint);
	void LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnInitialized();
	void PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void RegisterButton(class UCommonButtonBase** Button);
	void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonItemSlotButton_C">();
	}
	static class UWBP_PalCommonItemSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonItemSlotButton_C>();
	}
};
static_assert(alignof(UWBP_PalCommonItemSlotButton_C) == 0x000008, "Wrong alignment on UWBP_PalCommonItemSlotButton_C");
static_assert(sizeof(UWBP_PalCommonItemSlotButton_C) == 0x0005E0, "Wrong size on UWBP_PalCommonItemSlotButton_C");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, UberGraphFrame_WBP_PalCommonItemSlotButton_C) == 0x000578, "Member 'UWBP_PalCommonItemSlotButton_C::UberGraphFrame_WBP_PalCommonItemSlotButton_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_UnselectToSelect) == 0x000580, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_UnselectToSelect' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_Unlock) == 0x000588, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_Unlock' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_Lock) == 0x000590, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_Push) == 0x000598, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_Unfocus) == 0x0005A0, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_Unfocus' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, Anm_Focus) == 0x0005A8, "Member 'UWBP_PalCommonItemSlotButton_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, FocusedFrame) == 0x0005B0, "Member 'UWBP_PalCommonItemSlotButton_C::FocusedFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, FocusedFrame_1) == 0x0005B8, "Member 'UWBP_PalCommonItemSlotButton_C::FocusedFrame_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, PushEff) == 0x0005C0, "Member 'UWBP_PalCommonItemSlotButton_C::PushEff' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, PushEff_1) == 0x0005C8, "Member 'UWBP_PalCommonItemSlotButton_C::PushEff_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, WBP_PalCommonItemSlot) == 0x0005D0, "Member 'UWBP_PalCommonItemSlotButton_C::WBP_PalCommonItemSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlotButton_C, WBP_PalInvisibleButton) == 0x0005D8, "Member 'UWBP_PalCommonItemSlotButton_C::WBP_PalInvisibleButton' has a wrong offset!");

}

