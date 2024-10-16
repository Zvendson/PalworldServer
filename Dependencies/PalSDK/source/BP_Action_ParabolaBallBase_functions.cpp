#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_ParabolaBallBase_classes.hpp"
#include "PalSDK/BP_Action_ParabolaBallBase_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.ExecuteUbergraph_BP_Action_ParabolaBallBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_ParabolaBallBase_C::ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "ExecuteUbergraph_BP_Action_ParabolaBallBase");

	Params::BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.GetTaegetLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Pos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_ParabolaBallBase_C::GetTaegetLocation(struct FVector* Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "GetTaegetLocation");

	Params::BP_Action_ParabolaBallBase_C_GetTaegetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);
}


// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_ParabolaBallBase_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

