#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PPSkyCreatorWeatherPresetController_classes.hpp"
#include "PalSDK/BP_PPSkyCreatorWeatherPresetController_parameters.hpp"


namespace PalSDK
{

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController");

	Params::BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPrePreset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*       Pre                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::GetPrePreset(int32 Index_0, class UPPSkyCreatorWeatherPreset** Pre)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "GetPrePreset");

	Params::BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Pre != nullptr)
		*Pre = Parms.Pre;
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*       CurrentPreset                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*       NextPreset                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Alpha_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PresetIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::GetPresets(double Time_0, class UPPSkyCreatorWeatherPreset** CurrentPreset, class UPPSkyCreatorWeatherPreset** NextPreset, double* Alpha_0, int32* PresetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "GetPresets");

	Params::BP_PPSkyCreatorWeatherPresetController_C_GetPresets Parms{};

	Parms.Time_0 = Time_0;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPreset != nullptr)
		*CurrentPreset = Parms.CurrentPreset;

	if (NextPreset != nullptr)
		*NextPreset = Parms.NextPreset;

	if (Alpha_0 != nullptr)
		*Alpha_0 = Parms.Alpha_0;

	if (PresetIndex != nullptr)
		*PresetIndex = Parms.PresetIndex;
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PPSkyCreatorWeatherPresetController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ReceiveTick");

	Params::BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.SetBrightness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreatorWeatherPresetController_C::SetBrightness()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "SetBrightness");

	UObject::ProcessEvent(Func, nullptr);
}

}

