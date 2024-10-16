#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MonsterAIController_Boss_classes.hpp"
#include "PalSDK/BP_MonsterAIController_Boss_parameters.hpp"


namespace PalSDK
{

// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.ExecuteUbergraph_BP_MonsterAIController_Boss
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Boss_C::ExecuteUbergraph_BP_MonsterAIController_Boss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "ExecuteUbergraph_BP_MonsterAIController_Boss");

	Params::BP_MonsterAIController_Boss_C_ExecuteUbergraph_BP_MonsterAIController_Boss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.Force Battle Start To Target Boss
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*>      AllPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_Boss_C::Force_Battle_Start_To_Target_Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "Force Battle Start To Target Boss");

	Params::BP_MonsterAIController_Boss_C_Force_Battle_Start_To_Target_Boss Parms{};

	Parms.Player = Player;
	Parms.AllPlayer = std::move(AllPlayer);

	UObject::ProcessEvent(Func, &Parms);

	AllPlayer = std::move(Parms.AllPlayer);
}


// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     LeaderPalBrackboard                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Boss_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "GetLeaderBB");

	Params::BP_MonsterAIController_Boss_C_GetLeaderBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;
}


// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBrackboard                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Boss_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "GetMyBB");

	Params::BP_MonsterAIController_Boss_C_GetMyBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;
}


// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Boss_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "ReceivePossess");

	Params::BP_MonsterAIController_Boss_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C.カスタムイベント_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Boss_C::_________________________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Boss_C", "カスタムイベント_1");

	Params::BP_MonsterAIController_Boss_C__________________________1 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

