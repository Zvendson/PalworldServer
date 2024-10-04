#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_EnemyGauge.WBP_EnemyGauge_C
// 0x0210 (0x0488 - 0x0278)
class UWBP_EnemyGauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_WorkIcon_2;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_WorkIcon_1;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_WorkIcon;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_BattleIN;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Hunger;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Party;                                         // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Pinch;                                         // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Damage;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_BattleFlare;                                   // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_ATK;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_DEF;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_HP;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalCommonDetail;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Pinch;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelBattleIcon;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelWork;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconGroupWork_1;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconPalWork;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconPalWork_2;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconSleeping;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_145;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Base;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Frame;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Rank;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Strong_Rare;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Potencial;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalEnemyBase_Hunger;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Back;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HP;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_CommonDetail;                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Gender;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_GuildName;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelNum;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelTitle;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Name;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkName;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnemyGauge_SAN_C*                  WBP_EnemyGauge_SAN;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State;                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_00;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_01;                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Single;                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGenderIcon_C*                   WBP_PalGenderIcon;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UTexture2D*>                RankIconMap;                                       // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FColor                                 EnemyColor;                                        // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 FriendColor;                                       // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             DelayGaugeCalculator;                              // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              SavedDefaultFontMat;                               // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        LowHealthPercent;                                  // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLowHealthNoticeDisplay;                          // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CachedHPPercent;                                   // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFriendBg;                                        // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedBattleMode;                                  // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedIsWork;                                      // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBaseCampWorkerEventType                   CachedCampEvent;                                   // 0x046B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CurrentIconAnm;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SleepMsgId;                                        // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_BgChange_Enemy();
	void AnmEvent_BgChange_Party();
	void AnmEvent_Damage();
	void AnmEvent_LowHealth(bool IsDisplay);
	void AnmEvent_StartBattleLoop();
	void AnmEvent_Starvation();
	void AnmEvent_StopBattleLoop();
	void AnmEvent_StopStarvation();
	void AnmEvent_StopWorkLoop();
	void AnmEvent_WorkLoop();
	void ChangeEnemyMode();
	void ChangeFriendMode();
	void ChangeRarePalMark();
	void ChangeStrongPalMark();
	void ExecuteUbergraph_WBP_EnemyGauge(int32 EntryPoint);
	void Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2();
	void Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8();
	void OnInitialized();
	void RetainCommonDetail();
	void Set_Battle_Mode(bool IsBattleMode);
	void Set_Enable_Talent_Detail(bool IsEnable, class UPalIndividualCharacterParameter* Parameter);
	void Set_Level(int32 Level, bool GetLevelPenalty);
	void Set_Work_Event_Info(class UPalIndividualCharacterHandle* Handle, bool NotBattle);
	void SetElement(EPalElementType Type1, EPalElementType Type2);
	void SetGender(EPalGenderType GenderType);
	void SetGuildName(const class FString& NewGuildName);
	void SetHPPercent(double Percent);
	void SetHPPercent_Force(double Percent);
	void SetHungryCondition(TArray<EPalUIConditionType>& Conditions);
	void SetLowHealthNoticeDisplayFlag(bool IsDisplay);
	void SetRank(int32 Rank);
	void SetSanityValue(double NowSanityValue, double MaxSanityValue);
	void SetTargetName(const class FText& Name_0);
	void SetVisibilityBattleIcon(ESlateVisibility Visibiliy);
	void SetVisibilitySanityGauge(ESlateVisibility Visibility_0);
	void SetVisibilityStrongRareMark(ESlateVisibility Visibility_0);
	void SetWorkSuitability(TArray<EPalWorkSuitability>& Suitability);
	void Trigger_Damage_Animation();
	void TryDisplayLowHealthNotice(double NowPercent);
	void UpdateForTick(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyGauge_C">();
	}
	static class UWBP_EnemyGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyGauge_C>();
	}
};
static_assert(alignof(UWBP_EnemyGauge_C) == 0x000008, "Wrong alignment on UWBP_EnemyGauge_C");
static_assert(sizeof(UWBP_EnemyGauge_C) == 0x000488, "Wrong size on UWBP_EnemyGauge_C");
static_assert(offsetof(UWBP_EnemyGauge_C, UberGraphFrame) == 0x000278, "Member 'UWBP_EnemyGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_WorkIcon_2) == 0x000280, "Member 'UWBP_EnemyGauge_C::Anm_WorkIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_WorkIcon_1) == 0x000288, "Member 'UWBP_EnemyGauge_C::Anm_WorkIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_WorkIcon) == 0x000290, "Member 'UWBP_EnemyGauge_C::Anm_WorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_BattleIN) == 0x000298, "Member 'UWBP_EnemyGauge_C::Anm_BattleIN' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_Hunger) == 0x0002A0, "Member 'UWBP_EnemyGauge_C::Anm_Hunger' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_Party) == 0x0002A8, "Member 'UWBP_EnemyGauge_C::Anm_Party' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_Pinch) == 0x0002B0, "Member 'UWBP_EnemyGauge_C::Anm_Pinch' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_Damage) == 0x0002B8, "Member 'UWBP_EnemyGauge_C::Anm_Damage' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_Normal) == 0x0002C0, "Member 'UWBP_EnemyGauge_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Anm_BattleFlare) == 0x0002C8, "Member 'UWBP_EnemyGauge_C::Anm_BattleFlare' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, BPPalTextBlock_ATK) == 0x0002D0, "Member 'UWBP_EnemyGauge_C::BPPalTextBlock_ATK' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, BPPalTextBlock_DEF) == 0x0002D8, "Member 'UWBP_EnemyGauge_C::BPPalTextBlock_DEF' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, BPPalTextBlock_HP) == 0x0002E0, "Member 'UWBP_EnemyGauge_C::BPPalTextBlock_HP' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Canvas_PalCommonDetail) == 0x0002E8, "Member 'UWBP_EnemyGauge_C::Canvas_PalCommonDetail' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Canvas_Pinch) == 0x0002F0, "Member 'UWBP_EnemyGauge_C::Canvas_Pinch' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CanvasPanelBattleIcon) == 0x0002F8, "Member 'UWBP_EnemyGauge_C::CanvasPanelBattleIcon' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CanvasPanelWork) == 0x000300, "Member 'UWBP_EnemyGauge_C::CanvasPanelWork' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IconGroupWork_1) == 0x000308, "Member 'UWBP_EnemyGauge_C::IconGroupWork_1' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IconPalWork) == 0x000310, "Member 'UWBP_EnemyGauge_C::IconPalWork' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IconPalWork_2) == 0x000318, "Member 'UWBP_EnemyGauge_C::IconPalWork_2' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IconSleeping) == 0x000320, "Member 'UWBP_EnemyGauge_C::IconSleeping' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image) == 0x000328, "Member 'UWBP_EnemyGauge_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_1) == 0x000330, "Member 'UWBP_EnemyGauge_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_145) == 0x000338, "Member 'UWBP_EnemyGauge_C::Image_145' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_Base) == 0x000340, "Member 'UWBP_EnemyGauge_C::Image_Base' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_Frame) == 0x000348, "Member 'UWBP_EnemyGauge_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_Rank) == 0x000350, "Member 'UWBP_EnemyGauge_C::Image_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Image_Strong_Rare) == 0x000358, "Member 'UWBP_EnemyGauge_C::Image_Strong_Rare' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Overlay_Potencial) == 0x000360, "Member 'UWBP_EnemyGauge_C::Overlay_Potencial' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, PalEnemyBase_Hunger) == 0x000368, "Member 'UWBP_EnemyGauge_C::PalEnemyBase_Hunger' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, ProgressBar_Back) == 0x000370, "Member 'UWBP_EnemyGauge_C::ProgressBar_Back' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, ProgressBar_HP) == 0x000378, "Member 'UWBP_EnemyGauge_C::ProgressBar_HP' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, RetainerBox_CommonDetail) == 0x000380, "Member 'UWBP_EnemyGauge_C::RetainerBox_CommonDetail' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, SizeBox_Gender) == 0x000388, "Member 'UWBP_EnemyGauge_C::SizeBox_Gender' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Text_GuildName) == 0x000390, "Member 'UWBP_EnemyGauge_C::Text_GuildName' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Text_LevelNum) == 0x000398, "Member 'UWBP_EnemyGauge_C::Text_LevelNum' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Text_LevelTitle) == 0x0003A0, "Member 'UWBP_EnemyGauge_C::Text_LevelTitle' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Text_Name) == 0x0003A8, "Member 'UWBP_EnemyGauge_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, Text_WorkName) == 0x0003B0, "Member 'UWBP_EnemyGauge_C::Text_WorkName' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_EnemyGauge_SAN) == 0x0003B8, "Member 'UWBP_EnemyGauge_C::WBP_EnemyGauge_SAN' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_MainMenu_Pal_State) == 0x0003C0, "Member 'UWBP_EnemyGauge_C::WBP_MainMenu_Pal_State' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_PalElementIcon_Double_00) == 0x0003C8, "Member 'UWBP_EnemyGauge_C::WBP_PalElementIcon_Double_00' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_PalElementIcon_Double_01) == 0x0003D0, "Member 'UWBP_EnemyGauge_C::WBP_PalElementIcon_Double_01' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_PalElementIcon_Single) == 0x0003D8, "Member 'UWBP_EnemyGauge_C::WBP_PalElementIcon_Single' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, WBP_PalGenderIcon) == 0x0003E0, "Member 'UWBP_EnemyGauge_C::WBP_PalGenderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, RankIconMap) == 0x0003E8, "Member 'UWBP_EnemyGauge_C::RankIconMap' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, EnemyColor) == 0x000438, "Member 'UWBP_EnemyGauge_C::EnemyColor' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, FriendColor) == 0x00043C, "Member 'UWBP_EnemyGauge_C::FriendColor' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, DelayGaugeCalculator) == 0x000440, "Member 'UWBP_EnemyGauge_C::DelayGaugeCalculator' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, SavedDefaultFontMat) == 0x000448, "Member 'UWBP_EnemyGauge_C::SavedDefaultFontMat' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, LowHealthPercent) == 0x000450, "Member 'UWBP_EnemyGauge_C::LowHealthPercent' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IsLowHealthNoticeDisplay) == 0x000458, "Member 'UWBP_EnemyGauge_C::IsLowHealthNoticeDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CachedHPPercent) == 0x000460, "Member 'UWBP_EnemyGauge_C::CachedHPPercent' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, IsFriendBg) == 0x000468, "Member 'UWBP_EnemyGauge_C::IsFriendBg' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CachedBattleMode) == 0x000469, "Member 'UWBP_EnemyGauge_C::CachedBattleMode' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CachedIsWork) == 0x00046A, "Member 'UWBP_EnemyGauge_C::CachedIsWork' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CachedCampEvent) == 0x00046B, "Member 'UWBP_EnemyGauge_C::CachedCampEvent' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, CurrentIconAnm) == 0x000470, "Member 'UWBP_EnemyGauge_C::CurrentIconAnm' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_C, SleepMsgId) == 0x000478, "Member 'UWBP_EnemyGauge_C::SleepMsgId' has a wrong offset!");

}

