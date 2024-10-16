#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_BattleEntry_Member_classes.hpp"
#include "PalSDK/WBP_BattleEntry_Member_parameters.hpp"


namespace PalSDK
{

// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.AddTaslDetailText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequireNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_Member_C::AddTaslDetailText(const class FText& Text, int32 NowNum, int32 RequireNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Member_C", "AddTaslDetailText");

	Params::WBP_BattleEntry_Member_C_AddTaslDetailText Parms{};

	Parms.Text = std::move(Text);
	Parms.NowNum = NowNum;
	Parms.RequireNum = RequireNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.ExecuteUbergraph_WBP_BattleEntry_Member
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_Member_C::ExecuteUbergraph_WBP_BattleEntry_Member(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Member_C", "ExecuteUbergraph_WBP_BattleEntry_Member");

	Params::WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.OnChangedBossBattlePlayerListEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BossType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalBossBattleDifficulty                Difficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*>      PlayerList                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BattleEntry_Member_C::OnChangedBossBattlePlayerListEvent(class FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& PlayerList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Member_C", "OnChangedBossBattlePlayerListEvent");

	Params::WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent Parms{};

	Parms.BossType = BossType;
	Parms.Difficulty = Difficulty;
	Parms.PlayerList = std::move(PlayerList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.RemoveTaskDetailText
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_BattleEntry_Member_C::RemoveTaskDetailText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Member_C", "RemoveTaskDetailText");

	UObject::ProcessEvent(Func, nullptr);
}

}

