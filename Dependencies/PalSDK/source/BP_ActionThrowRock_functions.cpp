#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionThrowRock_classes.hpp"
#include "PalSDK/BP_ActionThrowRock_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionThrowRock.BP_ActionThrowRock_C.ExecuteUbergraph_BP_ActionThrowRock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThrowRock_C::ExecuteUbergraph_BP_ActionThrowRock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "ExecuteUbergraph_BP_ActionThrowRock");

	Params::BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.MoveRock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThrowRock_C::MoveRock(double ElapsedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "MoveRock");

	Params::BP_ActionThrowRock_C_MoveRock Parms{};

	Parms.ElapsedTime = ElapsedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionThrowRock_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThrowRock_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "OnSpawnEffect");

	Params::BP_ActionThrowRock_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionThrowRock_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionThrowRock_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionThrowRock.BP_ActionThrowRock_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThrowRock_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThrowRock_C", "TickAction");

	Params::BP_ActionThrowRock_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

