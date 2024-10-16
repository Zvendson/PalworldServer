#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Paldex_Task.WBP_Paldex_Task_C
// 0x00F0 (0x0368 - 0x0278)
class UWBP_Paldex_Task_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Ingame_Flash;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmOutGame_Complete;                               // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIngame_Complete;                                // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Outgame;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Ingame;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelIngame;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelOutgame;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_01;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_B_00;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_Cross_0;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_Cross_1;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_T_00;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Complete;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GaugeFlare_0;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TaskIcon;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_CaptureBonus;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_CaptureBonus_Back;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CaptureNum;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CaptureNumOutGame;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ExpBonus;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ExpBonusMsgID_Normal;                              // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ExpBonusMsgID_First;                               // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ExpBonusMsgID_Capture5;                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ExpBonusMsgID_Complete;                            // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CachedBonusCount;                                  // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Activate(bool AlreadyCompletedBonus);
	void AnmEvent_Flash();
	void ExecuteUbergraph_WBP_Paldex_Task(int32 EntryPoint);
	void GetBonusExpMsg(int32 CaptureCount, class FText* Text);
	void OnInitialized();
	void PreSetup(class FName CharacterID, int32 BonusCount, int32 DisplayExp);
	void SetupBonusCountText(int32 BonusCount);
	void SetupForMenu(int32 BonusCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Paldex_Task_C">();
	}
	static class UWBP_Paldex_Task_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Paldex_Task_C>();
	}
};
static_assert(alignof(UWBP_Paldex_Task_C) == 0x000008, "Wrong alignment on UWBP_Paldex_Task_C");
static_assert(sizeof(UWBP_Paldex_Task_C) == 0x000368, "Wrong size on UWBP_Paldex_Task_C");
static_assert(offsetof(UWBP_Paldex_Task_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Paldex_Task_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Anm_Ingame_Flash) == 0x000280, "Member 'UWBP_Paldex_Task_C::Anm_Ingame_Flash' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, AnmOutGame_Complete) == 0x000288, "Member 'UWBP_Paldex_Task_C::AnmOutGame_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, AnmIngame_Complete) == 0x000290, "Member 'UWBP_Paldex_Task_C::AnmIngame_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Anm_Outgame) == 0x000298, "Member 'UWBP_Paldex_Task_C::Anm_Outgame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Anm_Ingame) == 0x0002A0, "Member 'UWBP_Paldex_Task_C::Anm_Ingame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, CanvasPanelIngame) == 0x0002A8, "Member 'UWBP_Paldex_Task_C::CanvasPanelIngame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, CanvasPanelOutgame) == 0x0002B0, "Member 'UWBP_Paldex_Task_C::CanvasPanelOutgame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Flare_01) == 0x0002B8, "Member 'UWBP_Paldex_Task_C::Flare_01' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Flare_B_00) == 0x0002C0, "Member 'UWBP_Paldex_Task_C::Flare_B_00' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Flare_Cross_0) == 0x0002C8, "Member 'UWBP_Paldex_Task_C::Flare_Cross_0' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Flare_Cross_1) == 0x0002D0, "Member 'UWBP_Paldex_Task_C::Flare_Cross_1' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Flare_T_00) == 0x0002D8, "Member 'UWBP_Paldex_Task_C::Flare_T_00' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Image_Complete) == 0x0002E0, "Member 'UWBP_Paldex_Task_C::Image_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Image_GaugeFlare_0) == 0x0002E8, "Member 'UWBP_Paldex_Task_C::Image_GaugeFlare_0' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Image_TaskIcon) == 0x0002F0, "Member 'UWBP_Paldex_Task_C::Image_TaskIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ProgressBar_CaptureBonus) == 0x0002F8, "Member 'UWBP_Paldex_Task_C::ProgressBar_CaptureBonus' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ProgressBar_CaptureBonus_Back) == 0x000300, "Member 'UWBP_Paldex_Task_C::ProgressBar_CaptureBonus_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Text_CaptureNum) == 0x000308, "Member 'UWBP_Paldex_Task_C::Text_CaptureNum' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Text_CaptureNumOutGame) == 0x000310, "Member 'UWBP_Paldex_Task_C::Text_CaptureNumOutGame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, Text_ExpBonus) == 0x000318, "Member 'UWBP_Paldex_Task_C::Text_ExpBonus' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ExpBonusMsgID_Normal) == 0x000320, "Member 'UWBP_Paldex_Task_C::ExpBonusMsgID_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ExpBonusMsgID_First) == 0x000330, "Member 'UWBP_Paldex_Task_C::ExpBonusMsgID_First' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ExpBonusMsgID_Capture5) == 0x000340, "Member 'UWBP_Paldex_Task_C::ExpBonusMsgID_Capture5' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, ExpBonusMsgID_Complete) == 0x000350, "Member 'UWBP_Paldex_Task_C::ExpBonusMsgID_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_Task_C, CachedBonusCount) == 0x000360, "Member 'UWBP_Paldex_Task_C::CachedBonusCount' has a wrong offset!");

}

