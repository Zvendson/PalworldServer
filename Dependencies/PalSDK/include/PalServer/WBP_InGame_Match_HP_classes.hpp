#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_InGame_Match_HP.WBP_InGame_Match_HP_C
// 0x00A0 (0x0318 - 0x0278)
class UWBP_InGame_Match_HP_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_HPGauge_Player;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Player_Back;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Rival;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Rival_Back;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*                WBP_BossBattle_Timer;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Player_0;                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Player_1;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Player_2;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Rival_0;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Rival_1;                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              WBP_InGame_Match_HPPal_Rival_2;                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             PlayerHPGauge;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             RivalHPGauge;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_InGame_Match_HPPal_C*>      PlayerPals;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_InGame_Match_HPPal_C*>      RivalPals;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalIndividualCharacterParameter*       Player_Individual_Parameter;                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       Rival_Individual_Parameter;                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InGame_Match_HP(int32 EntryPoint);
	void OnInitialized();
	void Setup(EPalArenaPlayerIndex LocalPlayerIndex, const TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo>& PlayerInfoMap);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Unbind();
	void UpdatePlayerHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP);
	void UpdateRivalHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Match_HP_C">();
	}
	static class UWBP_InGame_Match_HP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Match_HP_C>();
	}
};
static_assert(alignof(UWBP_InGame_Match_HP_C) == 0x000008, "Wrong alignment on UWBP_InGame_Match_HP_C");
static_assert(sizeof(UWBP_InGame_Match_HP_C) == 0x000318, "Wrong size on UWBP_InGame_Match_HP_C");
static_assert(offsetof(UWBP_InGame_Match_HP_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InGame_Match_HP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, ProgressBar_HPGauge_Player) == 0x000280, "Member 'UWBP_InGame_Match_HP_C::ProgressBar_HPGauge_Player' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, ProgressBar_HPGauge_Player_Back) == 0x000288, "Member 'UWBP_InGame_Match_HP_C::ProgressBar_HPGauge_Player_Back' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, ProgressBar_HPGauge_Rival) == 0x000290, "Member 'UWBP_InGame_Match_HP_C::ProgressBar_HPGauge_Rival' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, ProgressBar_HPGauge_Rival_Back) == 0x000298, "Member 'UWBP_InGame_Match_HP_C::ProgressBar_HPGauge_Rival_Back' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_BossBattle_Timer) == 0x0002A0, "Member 'UWBP_InGame_Match_HP_C::WBP_BossBattle_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Player_0) == 0x0002A8, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Player_0' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Player_1) == 0x0002B0, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Player_1' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Player_2) == 0x0002B8, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Player_2' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Rival_0) == 0x0002C0, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Rival_0' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Rival_1) == 0x0002C8, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Rival_1' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, WBP_InGame_Match_HPPal_Rival_2) == 0x0002D0, "Member 'UWBP_InGame_Match_HP_C::WBP_InGame_Match_HPPal_Rival_2' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, PlayerHPGauge) == 0x0002D8, "Member 'UWBP_InGame_Match_HP_C::PlayerHPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, RivalHPGauge) == 0x0002E0, "Member 'UWBP_InGame_Match_HP_C::RivalHPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, PlayerPals) == 0x0002E8, "Member 'UWBP_InGame_Match_HP_C::PlayerPals' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, RivalPals) == 0x0002F8, "Member 'UWBP_InGame_Match_HP_C::RivalPals' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, Player_Individual_Parameter) == 0x000308, "Member 'UWBP_InGame_Match_HP_C::Player_Individual_Parameter' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HP_C, Rival_Individual_Parameter) == 0x000310, "Member 'UWBP_InGame_Match_HP_C::Rival_Individual_Parameter' has a wrong offset!");

}

