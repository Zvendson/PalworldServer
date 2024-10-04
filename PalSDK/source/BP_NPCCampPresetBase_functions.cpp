#include "PalServer/Basic.hpp"

#include "PalServer/BP_NPCCampPresetBase_classes.hpp"
#include "PalServer/BP_NPCCampPresetBase_parameters.hpp"


namespace PalServer
{

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.DeleteChildActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampPresetBase_C::DeleteChildActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "DeleteChildActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.ExecuteUbergraph_BP_NPCCampPresetBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::ExecuteUbergraph_BP_NPCCampPresetBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "ExecuteUbergraph_BP_NPCCampPresetBase");

	Params::BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.GetCampSpawnerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Key                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::GetCampSpawnerName(class FName* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "GetCampSpawnerName");

	Params::BP_NPCCampPresetBase_C_GetCampSpawnerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.GetRewardKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Key                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::GetRewardKey(class FName* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "GetRewardKey");

	Params::BP_NPCCampPresetBase_C_GetRewardKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.OnCapturedEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPCCampPresetBase_C::OnCapturedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "OnCapturedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.OnSpawnedCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::OnSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "OnSpawnedCharacter__DelegateSignature");

	Params::BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.RayAdjustFloor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampPresetBase_C::RayAdjustFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "RayAdjustFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPCCampPresetBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "ReceiveEndPlay");

	Params::BP_NPCCampPresetBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.カスタムイベント
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampPresetBase_C::________________________(class UPalIndividualCharacterHandle* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampPresetBase_C", "カスタムイベント");

	Params::BP_NPCCampPresetBase_C_________________________ Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

}

