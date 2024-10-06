#include "PalServer/Basic.hpp"

#include "PalServer/BP_PPSkyCreator_Controller_classes.hpp"
#include "PalServer/BP_PPSkyCreator_Controller_parameters.hpp"


namespace PalServer
{

// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.ExecuteUbergraph_BP_PPSkyCreator_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreator_Controller_C::ExecuteUbergraph_BP_PPSkyCreator_Controller(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "ExecuteUbergraph_BP_PPSkyCreator_Controller");

	Params::BP_PPSkyCreator_Controller_C_ExecuteUbergraph_BP_PPSkyCreator_Controller Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_PuddlesAccumulation
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_PuddlesAccumulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_PuddlesAccumulation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_PuddlesDry
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_PuddlesDry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_PuddlesDry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_SnowAccumulate
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_SnowAccumulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_SnowAccumulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_SnowDry
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_SnowDry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_SnowDry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_WeatherChangeInterval
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_WeatherChangeInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_WeatherChangeInterval");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_WeatherInterpolation
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_WeatherInterpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_WeatherInterpolation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_WetnessAccumulation
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_WetnessAccumulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_WetnessAccumulation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Finish_WetnessDry
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Finish_WetnessDry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Finish_WetnessDry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.LightningStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LightningPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreator_Controller_C::LightningStrike(const struct FVector& LightningPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "LightningStrike");

	Params::BP_PPSkyCreator_Controller_C_LightningStrike Parms{};

	Parms.LightningPosition = std::move(LightningPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreator_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "ReceiveTick");

	Params::BP_PPSkyCreator_Controller_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.SetRainVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::SetRainVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "SetRainVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_PuddlesAccumulate
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_PuddlesAccumulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_PuddlesAccumulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_PuddlesDry
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_PuddlesDry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_PuddlesDry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_SnowAccumulate
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_SnowAccumulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_SnowAccumulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_SnowMelt
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_SnowMelt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_SnowMelt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_WeatherChangeInterval
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_WeatherChangeInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_WeatherChangeInterval");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_WeatherInterpolation
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_WeatherInterpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_WeatherInterpolation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_WetnessAccumulate
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_WetnessAccumulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_WetnessAccumulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.Start_WetnessDry
// (BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::Start_WetnessDry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "Start_WetnessDry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C.WeatherMaterialFX_Interpolation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PPSkyCreator_Controller_C::WeatherMaterialFX_Interpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PPSkyCreator_Controller_C", "WeatherMaterialFX_Interpolation");

	UObject::ProcessEvent(Func, nullptr);
}

}

