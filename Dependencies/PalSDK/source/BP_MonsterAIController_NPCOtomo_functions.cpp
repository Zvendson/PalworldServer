#include "PalServer/Basic.hpp"

#include "PalServer/BP_MonsterAIController_NPCOtomo_classes.hpp"
#include "PalServer/BP_MonsterAIController_NPCOtomo_parameters.hpp"


namespace PalServer
{

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ExecuteUbergraph_BP_MonsterAIController_NPCOtomo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::ExecuteUbergraph_BP_MonsterAIController_NPCOtomo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "ExecuteUbergraph_BP_MonsterAIController_NPCOtomo");

	Params::BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     LeaderPalBrackboard                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "GetLeaderBB");

	Params::BP_MonsterAIController_NPCOtomo_C_GetLeaderBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;
}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBrackboard                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "GetMyBB");

	Params::BP_MonsterAIController_NPCOtomo_C_GetMyBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;
}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "ReceivePossess");

	Params::BP_MonsterAIController_NPCOtomo_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.カスタムイベント_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_NPCOtomo_C::_________________________2(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "カスタムイベント_2");

	Params::BP_MonsterAIController_NPCOtomo_C__________________________2 Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

