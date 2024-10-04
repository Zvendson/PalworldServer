#include "PalServer/Basic.hpp"

#include "PalServer/BP_Status_RaidBossModeChange_classes.hpp"
#include "PalServer/BP_Status_RaidBossModeChange_parameters.hpp"


namespace PalServer
{

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.CompEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_RaidBossModeChange_C::CompEvent(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "CompEvent");

	Params::BP_Status_RaidBossModeChange_C_CompEvent Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.ExecuteUbergraph_BP_Status_RaidBossModeChange
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_RaidBossModeChange_C::ExecuteUbergraph_BP_Status_RaidBossModeChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "ExecuteUbergraph_BP_Status_RaidBossModeChange");

	Params::BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.FindModeChangeVisualEffectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalElementType                         Element                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalVisualEffectID                      VisualEffect                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_RaidBossModeChange_C::FindModeChangeVisualEffectType(EPalElementType Element, EPalVisualEffectID* VisualEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "FindModeChangeVisualEffectType");

	Params::BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType Parms{};

	Parms.Element = Element;

	UObject::ProcessEvent(Func, &Parms);

	if (VisualEffect != nullptr)
		*VisualEffect = Parms.VisualEffect;
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.FindRaidBossData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalRaidBossSpawnInfo            BossInfo                                               (Parm, OutParm)

void UBP_Status_RaidBossModeChange_C::FindRaidBossData(struct FPalRaidBossSpawnInfo* BossInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "FindRaidBossData");

	Params::BP_Status_RaidBossModeChange_C_FindRaidBossData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BossInfo != nullptr)
		*BossInfo = std::move(Parms.BossInfo);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_RaidBossModeChange_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_RaidBossModeChange_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.SetupStatus
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_RaidBossModeChange_C::SetupStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "SetupStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_RaidBossModeChange_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RaidBossModeChange_C", "TickStatus");

	Params::BP_Status_RaidBossModeChange_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

