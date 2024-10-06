#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_BubbleShot_classes.hpp"
#include "PalServer/BP_Action_BubbleShot_parameters.hpp"


namespace PalServer
{

// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.ExecuteUbergraph_BP_Action_BubbleShot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::ExecuteUbergraph_BP_Action_BubbleShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "ExecuteUbergraph_BP_Action_BubbleShot");

	Params::BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_BubbleShot_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "OnSpawnEffect");

	Params::BP_Action_BubbleShot_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "TickAction");

	Params::BP_Action_BubbleShot_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

