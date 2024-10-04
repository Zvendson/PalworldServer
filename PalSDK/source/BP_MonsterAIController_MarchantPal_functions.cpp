#include "PalServer/Basic.hpp"

#include "PalServer/BP_MonsterAIController_MarchantPal_classes.hpp"
#include "PalServer/BP_MonsterAIController_MarchantPal_parameters.hpp"


namespace PalServer
{

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ExecuteUbergraph_BP_MonsterAIController_MarchantPal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::ExecuteUbergraph_BP_MonsterAIController_MarchantPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "ExecuteUbergraph_BP_MonsterAIController_MarchantPal");

	Params::BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.IsEscapeEnd
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEscapeEnd_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::IsEscapeEnd(bool* IsEscapeEnd_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "IsEscapeEnd");

	Params::BP_MonsterAIController_MarchantPal_C_IsEscapeEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEscapeEnd_0 != nullptr)
		*IsEscapeEnd_0 = Parms.IsEscapeEnd_0;
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "ReceivePossess");

	Params::BP_MonsterAIController_MarchantPal_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "ReceiveTick");

	Params::BP_MonsterAIController_MarchantPal_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.SetupSpawnedPosition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_MarchantPal_C::SetupSpawnedPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "SetupSpawnedPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.StartEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::StartEscape(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "StartEscape");

	Params::BP_MonsterAIController_MarchantPal_C_StartEscape Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.カスタムイベント
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::________________________(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "カスタムイベント");

	Params::BP_MonsterAIController_MarchantPal_C_________________________ Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.カスタムイベント_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_MarchantPal_C::_________________________1(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "カスタムイベント_1");

	Params::BP_MonsterAIController_MarchantPal_C__________________________1 Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.カスタムイベント_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalVisualEffectBase*             VisualEffect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_MarchantPal_C::_________________________2(class UPalVisualEffectBase* VisualEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_MarchantPal_C", "カスタムイベント_2");

	Params::BP_MonsterAIController_MarchantPal_C__________________________2 Parms{};

	Parms.VisualEffect = VisualEffect;

	UObject::ProcessEvent(Func, &Parms);
}

}

