#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BattleEntry_MemberList_classes.hpp"
#include "PalServer/WBP_BattleEntry_MemberList_parameters.hpp"


namespace PalServer
{

// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BattleEntry_MemberList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.ExecuteUbergraph_WBP_BattleEntry_MemberList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_MemberList_C::ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "ExecuteUbergraph_WBP_BattleEntry_MemberList");

	Params::WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   PlayLv                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_MemberList_C::SetPlayerInfo(const class FString& PlayerName, int32 PlayLv, bool IsHost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "SetPlayerInfo");

	Params::WBP_BattleEntry_MemberList_C_SetPlayerInfo Parms{};

	Parms.PlayerName = std::move(PlayerName);
	Parms.PlayLv = PlayLv;
	Parms.IsHost = IsHost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetValidation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_MemberList_C::SetValidation(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "SetValidation");

	Params::WBP_BattleEntry_MemberList_C_SetValidation Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);
}

}

