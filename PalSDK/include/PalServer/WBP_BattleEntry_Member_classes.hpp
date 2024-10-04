#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BattleEntry_Member.WBP_BattleEntry_Member_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_BattleEntry_Member_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Listup;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BattleName;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalNum;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_All;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_BattleEntry_MemberList_C*>  WBP_MemberLists;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AddTaslDetailText(const class FText& Text, int32 NowNum, int32 RequireNum);
	void ExecuteUbergraph_WBP_BattleEntry_Member(int32 EntryPoint);
	void OnChangedBossBattlePlayerListEvent(class FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& PlayerList);
	void RemoveTaskDetailText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattleEntry_Member_C">();
	}
	static class UWBP_BattleEntry_Member_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattleEntry_Member_C>();
	}
};
static_assert(alignof(UWBP_BattleEntry_Member_C) == 0x000008, "Wrong alignment on UWBP_BattleEntry_Member_C");
static_assert(sizeof(UWBP_BattleEntry_Member_C) == 0x0002B0, "Wrong size on UWBP_BattleEntry_Member_C");
static_assert(offsetof(UWBP_BattleEntry_Member_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BattleEntry_Member_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Member_C, Listup) == 0x000280, "Member 'UWBP_BattleEntry_Member_C::Listup' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Member_C, Text_BattleName) == 0x000288, "Member 'UWBP_BattleEntry_Member_C::Text_BattleName' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Member_C, Text_PalNum) == 0x000290, "Member 'UWBP_BattleEntry_Member_C::Text_PalNum' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Member_C, VerticalBox_All) == 0x000298, "Member 'UWBP_BattleEntry_Member_C::VerticalBox_All' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_Member_C, WBP_MemberLists) == 0x0002A0, "Member 'UWBP_BattleEntry_Member_C::WBP_MemberLists' has a wrong offset!");

}

