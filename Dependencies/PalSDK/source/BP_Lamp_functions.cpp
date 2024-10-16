#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Lamp_classes.hpp"
#include "PalSDK/BP_Lamp_parameters.hpp"


namespace PalSDK
{

// Function BP_Lamp.BP_Lamp_C.CheckLightEnable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lamp_C::CheckLightEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "CheckLightEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lamp.BP_Lamp_C.ExecuteUbergraph_BP_Lamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lamp_C::ExecuteUbergraph_BP_Lamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "ExecuteUbergraph_BP_Lamp");

	Params::BP_Lamp_C_ExecuteUbergraph_BP_Lamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lamp.BP_Lamp_C.OnChangeCrouchDelegate_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*   Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInCrouch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lamp_C::OnChangeCrouchDelegate______________0(class UPalCharacterMovementComponent* Component, bool IsInCrouch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "OnChangeCrouchDelegate_イベント_0");

	Params::BP_Lamp_C_OnChangeCrouchDelegate______________0 Parms{};

	Parms.Component = Component;
	Parms.IsInCrouch = IsInCrouch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lamp.BP_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lamp.BP_Lamp_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lamp_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "ReceiveEndPlay");

	Params::BP_Lamp_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lamp.BP_Lamp_C.SetLightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lamp_C::SetLightEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lamp_C", "SetLightEnable");

	Params::BP_Lamp_C_SetLightEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

