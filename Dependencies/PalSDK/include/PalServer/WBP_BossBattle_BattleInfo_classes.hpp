#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_BossBattle_BattleInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BossBattle_BossEliminated_C*       WBP_BossBattle_BossEliminated;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_TimeOut_C*              WBP_BossBattle_TimeOut;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*                WBP_BossBattle_Timer;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalBossTower*                          CurrentBossTower;                                  // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CurrentTimer;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRaidBossComponent_C*             CurrentRaid;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_PalRaidBossComponent_C*>     CachedRaids;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ActUICombatResult(EPalBossBattleCombatResult CombatResult);
	void CloseTimer();
	void CountDown_Raid();
	void CountDown_TowerBoss();
	void ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint);
	void Finished_3EF5F8014E85067431DFCC89EED868D4();
	void Finished_413432514DE4FC814BDA5192337698D2();
	void Finished_8C451D0644B19738D91CB8BD4A008BD2();
	void Finished_C4E7DBA04E1A39E6670703A0D0184F95();
	void GetBossTower(class APalBossTower* BossTower);
	void OnRaidBossBattleEnd(const struct FGuid& CampID, EPalRaidBossBattleFinishType EndType);
	void OnRaidBossBattleStart(const struct FGuid& CampID);
	void StartCombatTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossBattle_BattleInfo_C">();
	}
	static class UWBP_BossBattle_BattleInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossBattle_BattleInfo_C>();
	}
};
static_assert(alignof(UWBP_BossBattle_BattleInfo_C) == 0x000008, "Wrong alignment on UWBP_BossBattle_BattleInfo_C");
static_assert(sizeof(UWBP_BossBattle_BattleInfo_C) == 0x0002C0, "Wrong size on UWBP_BossBattle_BattleInfo_C");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BossBattle_BattleInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, WBP_BossBattle_BossEliminated) == 0x000280, "Member 'UWBP_BossBattle_BattleInfo_C::WBP_BossBattle_BossEliminated' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, WBP_BossBattle_TimeOut) == 0x000288, "Member 'UWBP_BossBattle_BattleInfo_C::WBP_BossBattle_TimeOut' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, WBP_BossBattle_Timer) == 0x000290, "Member 'UWBP_BossBattle_BattleInfo_C::WBP_BossBattle_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, CurrentBossTower) == 0x000298, "Member 'UWBP_BossBattle_BattleInfo_C::CurrentBossTower' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, CurrentTimer) == 0x0002A0, "Member 'UWBP_BossBattle_BattleInfo_C::CurrentTimer' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, CurrentRaid) == 0x0002A8, "Member 'UWBP_BossBattle_BattleInfo_C::CurrentRaid' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BattleInfo_C, CachedRaids) == 0x0002B0, "Member 'UWBP_BossBattle_BattleInfo_C::CachedRaids' has a wrong offset!");

}

