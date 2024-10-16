#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCapturingLoupeCanvas_classes.hpp"
#include "PalSDK/WBP_PalCapturingLoupeCanvas_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CheckWidgetEnded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalCapturingLoupeCanvas_C::CheckWidgetEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "CheckWidgetEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CreateLoupeWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalCaptureBodyBase_C*         TargetCaptureBody                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CapturingPalLoupe_C*         CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::CreateLoupeWidget(class UPalIndividualCharacterHandle* TargetHandle, class ABP_PalCaptureBodyBase_C* TargetCaptureBody, class UWBP_CapturingPalLoupe_C** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "CreateLoupeWidget");

	Params::WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.TargetCaptureBody = TargetCaptureBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.ExecuteUbergraph_WBP_PalCapturingLoupeCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::ExecuteUbergraph_WBP_PalCapturingLoupeCanvas(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "ExecuteUbergraph_WBP_PalCapturingLoupeCanvas");

	Params::WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnChangedWeaponEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnChangedWeaponEvent(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnChangedWeaponEvent");

	Params::WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCapturingLoupeCanvas_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnSetup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnStartedCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CreatedBodyActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnStartedCapture");

	Params::WBP_PalCapturingLoupeCanvas_C_OnStartedCapture Parms{};

	Parms.CreatedBodyActor = CreatedBodyActor;
	Parms.TargetHandle = TargetHandle;
	Parms.IsBonus = IsBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnThrowCaptureWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnThrowCaptureWeapon(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnThrowCaptureWeapon");

	Params::WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.RegisterWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePrism_C*               CaptureWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::RegisterWeaponEvent(class ABP_CapturePrism_C* CaptureWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "RegisterWeaponEvent");

	Params::WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent Parms{};

	Parms.CaptureWeapon = CaptureWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "Tick");

	Params::WBP_PalCapturingLoupeCanvas_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.UnregisterWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCapturingLoupeCanvas_C::UnregisterWeaponEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "UnregisterWeaponEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

