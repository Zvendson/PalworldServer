#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_SelfDestruct_classes.hpp"
#include "PalServer/BP_Action_SelfDestruct_parameters.hpp"


namespace PalServer
{

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.BlowAndKillSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Action_SelfDestruct_C::BlowAndKillSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "BlowAndKillSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.ExecuteUbergraph_BP_Action_SelfDestruct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SelfDestruct_C::ExecuteUbergraph_BP_Action_SelfDestruct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "ExecuteUbergraph_BP_Action_SelfDestruct");

	Params::BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.MakeVisualEffectParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalVisualEffectDynamicParameter PalVisualEffectDynamicParameter                        (Parm, OutParm)

void UBP_Action_SelfDestruct_C::MakeVisualEffectParameter(struct FPalVisualEffectDynamicParameter* PalVisualEffectDynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "MakeVisualEffectParameter");

	Params::BP_Action_SelfDestruct_C_MakeVisualEffectParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalVisualEffectDynamicParameter != nullptr)
		*PalVisualEffectDynamicParameter = std::move(Parms.PalVisualEffectDynamicParameter);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_SelfDestruct_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_SelfDestruct_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SelfDestruct_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "TickAction");

	Params::BP_Action_SelfDestruct_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.UpdateVelocity
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SelfDestruct_C::UpdateVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "UpdateVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.UpdateYaw
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SelfDestruct_C::UpdateYaw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SelfDestruct_C", "UpdateYaw");

	UObject::ProcessEvent(Func, nullptr);
}

}

