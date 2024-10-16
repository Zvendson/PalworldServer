#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_VisualEffect_Status_Darkness_classes.hpp"
#include "PalSDK/BP_VisualEffect_Status_Darkness_parameters.hpp"


namespace PalSDK
{

// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.ExecuteUbergraph_BP_VisualEffect_Status_Darkness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Darkness_C::ExecuteUbergraph_BP_VisualEffect_Status_Darkness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "ExecuteUbergraph_BP_VisualEffect_Status_Darkness");

	Params::BP_VisualEffect_Status_Darkness_C_ExecuteUbergraph_BP_VisualEffect_Status_Darkness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Darkness_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Darkness_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Darkness_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "TickVisualEffect");

	Params::BP_VisualEffect_Status_Darkness_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

