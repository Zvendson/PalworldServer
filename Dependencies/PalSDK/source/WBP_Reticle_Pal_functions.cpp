#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Reticle_Pal_classes.hpp"
#include "PalSDK/WBP_Reticle_Pal_parameters.hpp"


namespace PalSDK
{

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Pal_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Pal_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.ExecuteUbergraph_WBP_Reticle_Pal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Pal_C::ExecuteUbergraph_WBP_Reticle_Pal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "ExecuteUbergraph_WBP_Reticle_Pal");

	Params::WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Reticle_Pal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetAssignableDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIAimReticleMapObjectAssignableDataAssignableData                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Reticle_Pal_C::SetAssignableDetail(const struct FPalUIAimReticleMapObjectAssignableData& AssignableData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "SetAssignableDetail");

	Params::WBP_Reticle_Pal_C_SetAssignableDetail Parms{};

	Parms.AssignableData = std::move(AssignableData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetOtomoDeadDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* TargetIndividualParameter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Pal_C::SetOtomoDeadDetail(class UPalIndividualCharacterParameter* TargetIndividualParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "SetOtomoDeadDetail");

	Params::WBP_Reticle_Pal_C_SetOtomoDeadDetail Parms{};

	Parms.TargetIndividualParameter = TargetIndividualParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetThrowableableDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIAimReticleMapObjectThrowableDataThrowableData                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Reticle_Pal_C::SetThrowableableDetail(const struct FPalUIAimReticleMapObjectThrowableData& ThrowableData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "SetThrowableableDetail");

	Params::WBP_Reticle_Pal_C_SetThrowableableDetail Parms{};

	Parms.ThrowableData = std::move(ThrowableData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetVisibilityAssignableDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Pal_C::SetVisibilityAssignableDetail(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Pal_C", "SetVisibilityAssignableDetail");

	Params::WBP_Reticle_Pal_C_SetVisibilityAssignableDetail Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

