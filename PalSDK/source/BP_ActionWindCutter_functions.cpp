#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionWindCutter_classes.hpp"
#include "PalServer/BP_ActionWindCutter_parameters.hpp"


namespace PalServer
{

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.ExecuteUbergraph_BP_ActionWindCutter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWindCutter_C::ExecuteUbergraph_BP_ActionWindCutter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "ExecuteUbergraph_BP_ActionWindCutter");

	Params::BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWindCutter.BP_ActionWindCutter_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionWindCutter_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionWindCutter.BP_ActionWindCutter_C.OnSpawnBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWindCutter_C::OnSpawnBullet(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "OnSpawnBullet");

	Params::BP_ActionWindCutter_C_OnSpawnBullet Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWindCutter.BP_ActionWindCutter_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWindCutter_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "OnSpawnEffect");

	Params::BP_ActionWindCutter_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWindCutter.BP_ActionWindCutter_C.Test
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWindCutter_C::Test(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "Test");

	Params::BP_ActionWindCutter_C_Test Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWindCutter.BP_ActionWindCutter_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWindCutter_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWindCutter_C", "TickAction");

	Params::BP_ActionWindCutter_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

