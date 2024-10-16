#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_VisualEffect_Status_Mud_classes.hpp"
#include "PalSDK/BP_VisualEffect_Status_Mud_parameters.hpp"


namespace PalSDK
{

// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.ExecuteUbergraph_BP_VisualEffect_Status_Mud
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Mud_C::ExecuteUbergraph_BP_VisualEffect_Status_Mud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Mud_C", "ExecuteUbergraph_BP_VisualEffect_Status_Mud");

	Params::BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Mud_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Mud_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Mud_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Mud_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.TerminatingTickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Mud_C::TerminatingTickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Mud_C", "TerminatingTickVisualEffect");

	Params::BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

