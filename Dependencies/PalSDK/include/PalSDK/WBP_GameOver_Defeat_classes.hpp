#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_GameOver_Defeat.WBP_GameOver_Defeat_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_GameOver_Defeat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_DropPal;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RespawnTimer;                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Scroll;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Scroll_0;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Scroll_1;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Scroll_2;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DropItemInfo;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Second;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_DropInfo;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_DropPalIcon;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinishedOpen;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFinishedClose;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedRespawn;                                  // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    DropInventoryMsgID;                                // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    DropAllItemMsgID;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void BndEvt__WBP_GameOver_Defeat_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_GameOver_Defeat(int32 EntryPoint);
	void Finished_58EC9B6A4AC75462EDBD71B398D95E41();
	void Finished_D92A1E7344709CE3A6F44587549DFD19();
	void HideRespawnTimer();
	void OnClickedRespawn__DelegateSignature();
	void OnFinishedClose__DelegateSignature();
	void OnFinishedOpen__DelegateSignature();
	void Set_Focus_to_Respawn_Button();
	void SetDeathPenaltyMode(EPalOptionWorldDeathPenalty PenaltyMode);
	void SetDropPalInfo(TArray<struct FPalLogInfo_DropPal>& DropPalInfo);
	void SetRemainingTime(int32 RemainingSecond);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameOver_Defeat_C">();
	}
	static class UWBP_GameOver_Defeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameOver_Defeat_C>();
	}
};
static_assert(alignof(UWBP_GameOver_Defeat_C) == 0x000008, "Wrong alignment on UWBP_GameOver_Defeat_C");
static_assert(sizeof(UWBP_GameOver_Defeat_C) == 0x000338, "Wrong size on UWBP_GameOver_Defeat_C");
static_assert(offsetof(UWBP_GameOver_Defeat_C, UberGraphFrame) == 0x000278, "Member 'UWBP_GameOver_Defeat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Anm_Close) == 0x000280, "Member 'UWBP_GameOver_Defeat_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Anm_Open) == 0x000288, "Member 'UWBP_GameOver_Defeat_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, HorizontalBox_DropPal) == 0x000290, "Member 'UWBP_GameOver_Defeat_C::HorizontalBox_DropPal' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, HorizontalBox_RespawnTimer) == 0x000298, "Member 'UWBP_GameOver_Defeat_C::HorizontalBox_RespawnTimer' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Image_Scroll) == 0x0002A0, "Member 'UWBP_GameOver_Defeat_C::Image_Scroll' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Image_Scroll_0) == 0x0002A8, "Member 'UWBP_GameOver_Defeat_C::Image_Scroll_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Image_Scroll_1) == 0x0002B0, "Member 'UWBP_GameOver_Defeat_C::Image_Scroll_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Image_Scroll_2) == 0x0002B8, "Member 'UWBP_GameOver_Defeat_C::Image_Scroll_2' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Text_DropItemInfo) == 0x0002C0, "Member 'UWBP_GameOver_Defeat_C::Text_DropItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, Text_Second) == 0x0002C8, "Member 'UWBP_GameOver_Defeat_C::Text_Second' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, VerticalBox_DropInfo) == 0x0002D0, "Member 'UWBP_GameOver_Defeat_C::VerticalBox_DropInfo' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, VerticalBox_DropPalIcon) == 0x0002D8, "Member 'UWBP_GameOver_Defeat_C::VerticalBox_DropPalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, WBP_CommonButton) == 0x0002E0, "Member 'UWBP_GameOver_Defeat_C::WBP_CommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, OnFinishedOpen) == 0x0002E8, "Member 'UWBP_GameOver_Defeat_C::OnFinishedOpen' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, OnFinishedClose) == 0x0002F8, "Member 'UWBP_GameOver_Defeat_C::OnFinishedClose' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, OnClickedRespawn) == 0x000308, "Member 'UWBP_GameOver_Defeat_C::OnClickedRespawn' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, DropInventoryMsgID) == 0x000318, "Member 'UWBP_GameOver_Defeat_C::DropInventoryMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Defeat_C, DropAllItemMsgID) == 0x000328, "Member 'UWBP_GameOver_Defeat_C::DropAllItemMsgID' has a wrong offset!");

}

