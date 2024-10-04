#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BattleEntry_Info.WBP_BattleEntry_Info_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_BattleEntry_Info_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Entry;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_EntryNum;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_BattleEntry_Info(int32 EntryPoint);
	void Finished_DCF333D941FA61FD2550718E81C65E72();
	void SetEntryInfo(class FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& EntryPlayers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattleEntry_Info_C">();
	}
	static class UWBP_BattleEntry_Info_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattleEntry_Info_C>();
	}
};
static_assert(alignof(UWBP_BattleEntry_Info_C) == 0x000008, "Wrong alignment on UWBP_BattleEntry_Info_C");
static_assert(sizeof(UWBP_BattleEntry_Info_C) == 0x000298, "Wrong size on UWBP_BattleEntry_Info_C");
static_assert(offsetof(UWBP_BattleEntry_Info_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BattleEntry_Info_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Info_C, FadeIn) == 0x000280, "Member 'UWBP_BattleEntry_Info_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Info_C, Text_Entry) == 0x000288, "Member 'UWBP_BattleEntry_Info_C::Text_Entry' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Info_C, Text_EntryNum) == 0x000290, "Member 'UWBP_BattleEntry_Info_C::Text_EntryNum' has a wrong offset!");

}

