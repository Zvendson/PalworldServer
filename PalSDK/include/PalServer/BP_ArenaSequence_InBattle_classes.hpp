#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C
// 0x0030 (0x0078 - 0x0048)
class UBP_ArenaSequence_InBattle_C final : public UPalArenaSequenceInBattle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Timeup;                                            // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           BattleTimerHandle;                                 // 0x0058(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTimerTick;                                       // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeArenaInBattleCharacterts(bool InBattle);
	void CheckBattleEnd();
	void EnableMovement();
	void ExecuteUbergraph_BP_ArenaSequence_InBattle(int32 EntryPoint);
	void OnBeginSequence();
	void OnBreakSequence();
	void OnDeadCharacter(const struct FPalDeadInfo& DeadInfo);
	void OnEndSequence();
	void OnTimerTick__DelegateSignature(int32 Time);
	void OnTimeup();
	void SetDisableOtomoDeadReturn(bool Disable);
	void SetInBattleControllerSetting(bool InBattle);
	void TickSequence(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArenaSequence_InBattle_C">();
	}
	static class UBP_ArenaSequence_InBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArenaSequence_InBattle_C>();
	}
};
static_assert(alignof(UBP_ArenaSequence_InBattle_C) == 0x000008, "Wrong alignment on UBP_ArenaSequence_InBattle_C");
static_assert(sizeof(UBP_ArenaSequence_InBattle_C) == 0x000078, "Wrong size on UBP_ArenaSequence_InBattle_C");
static_assert(offsetof(UBP_ArenaSequence_InBattle_C, UberGraphFrame) == 0x000048, "Member 'UBP_ArenaSequence_InBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_InBattle_C, Timeup) == 0x000050, "Member 'UBP_ArenaSequence_InBattle_C::Timeup' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_InBattle_C, BattleTimerHandle) == 0x000058, "Member 'UBP_ArenaSequence_InBattle_C::BattleTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_InBattle_C, FlagName) == 0x000060, "Member 'UBP_ArenaSequence_InBattle_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_InBattle_C, OnTimerTick) == 0x000068, "Member 'UBP_ArenaSequence_InBattle_C::OnTimerTick' has a wrong offset!");

}

