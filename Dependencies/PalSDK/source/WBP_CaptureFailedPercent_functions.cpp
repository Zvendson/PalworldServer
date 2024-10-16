#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CaptureFailedPercent_classes.hpp"
#include "PalSDK/WBP_CaptureFailedPercent_parameters.hpp"


namespace PalSDK
{

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CaptureFailedPercent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.ExecuteUbergraph_WBP_CaptureFailedPercent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::ExecuteUbergraph_WBP_CaptureFailedPercent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "ExecuteUbergraph_WBP_CaptureFailedPercent");

	Params::WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.NotifyClearSelf
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureFailedPercent_C::NotifyClearSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "NotifyClearSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.OnOverClearTimer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CaptureFailedPercent_C*      SelfWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::OnOverClearTimer__DelegateSignature(class UWBP_CaptureFailedPercent_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "OnOverClearTimer__DelegateSignature");

	Params::WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Set Percent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::Set_Percent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Set Percent");

	Params::WBP_CaptureFailedPercent_C_Set_Percent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DisplayPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::Setup(double DisplayPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Setup");

	Params::WBP_CaptureFailedPercent_C_Setup Parms{};

	Parms.DisplayPercent = DisplayPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.UpdatePercent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureFailedPercent_C::UpdatePercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "UpdatePercent");

	UObject::ProcessEvent(Func, nullptr);
}

}

