#include "PalServer/Basic.hpp"

#include "PalServer/BP_BossBattleEventBase_classes.hpp"
#include "PalServer/BP_BossBattleEventBase_parameters.hpp"


namespace PalServer
{

// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.ActivateCharacter
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BossBattleEventBase_C::ActivateCharacter(class UPalIndividualCharacterHandle* IndividualHandle, const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattleEventBase_C", "ActivateCharacter");

	Params::BP_BossBattleEventBase_C_ActivateCharacter Parms{};

	Parms.IndividualHandle = IndividualHandle;
	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.ExecuteUbergraph_BP_BossBattleEventBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BossBattleEventBase_C::ExecuteUbergraph_BP_BossBattleEventBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattleEventBase_C", "ExecuteUbergraph_BP_BossBattleEventBase");

	Params::BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.GetDebugNo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BitFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BossBattleEventBase_C::GetDebugNo(int32 BitFlag, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattleEventBase_C", "GetDebugNo");

	Params::BP_BossBattleEventBase_C_GetDebugNo Parms{};

	Parms.BitFlag = BitFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_BossBattleEventBase_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattleEventBase_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.SetSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BossBattle_BossCharacterSpawner_C*Spawner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BossBattleEventBase_C::SetSpawner(class ABP_BossBattle_BossCharacterSpawner_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattleEventBase_C", "SetSpawner");

	Params::BP_BossBattleEventBase_C_SetSpawner Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);
}

}

