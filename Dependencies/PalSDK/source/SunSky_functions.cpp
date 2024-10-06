#include "PalServer/Basic.hpp"

#include "PalServer/SunSky_classes.hpp"
#include "PalServer/SunSky_parameters.hpp"


namespace PalServer
{

// Function SunSky.SunSky_C.ExecuteUbergraph_SunSky
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunSky_C::ExecuteUbergraph_SunSky(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "ExecuteUbergraph_SunSky");

	Params::SunSky_C_ExecuteUbergraph_SunSky Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SunSky.SunSky_C.GetHMSFromSolarTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  SolarTime_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hour                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Second                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunSky_C::GetHMSFromSolarTime(double SolarTime_0, int32* Hour, int32* Minute, int32* Second)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "GetHMSFromSolarTime");

	Params::SunSky_C_GetHMSFromSolarTime Parms{};

	Parms.SolarTime_0 = SolarTime_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Hour != nullptr)
		*Hour = Parms.Hour;

	if (Minute != nullptr)
		*Minute = Parms.Minute;

	if (Second != nullptr)
		*Second = Parms.Second;
}


// Function SunSky.SunSky_C.IsDST
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    DSTEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DSTStartMonth_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DSTStartDay_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DSTEndMonth_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DSTEndDay_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DSTSwitchHour_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDST_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunSky_C::IsDST(bool DSTEnable, int32 DSTStartMonth_0, int32 DSTStartDay_0, int32 DSTEndMonth_0, int32 DSTEndDay_0, int32 DSTSwitchHour_0, bool* IsDST_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "IsDST");

	Params::SunSky_C_IsDST Parms{};

	Parms.DSTEnable = DSTEnable;
	Parms.DSTStartMonth_0 = DSTStartMonth_0;
	Parms.DSTStartDay_0 = DSTStartDay_0;
	Parms.DSTEndMonth_0 = DSTEndMonth_0;
	Parms.DSTEndDay_0 = DSTEndDay_0;
	Parms.DSTSwitchHour_0 = DSTSwitchHour_0;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDST_0 != nullptr)
		*IsDST_0 = Parms.IsDST_0;
}


// Function SunSky.SunSky_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunSky_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "ReceiveTick");

	Params::SunSky_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SunSky.SunSky_C.UpdateSun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASunSky_C::UpdateSun()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "UpdateSun");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SunSky.SunSky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASunSky_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunSky_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

