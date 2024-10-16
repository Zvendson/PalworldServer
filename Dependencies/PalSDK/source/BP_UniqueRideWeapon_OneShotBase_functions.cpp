#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_UniqueRideWeapon_OneShotBase_classes.hpp"
#include "PalSDK/BP_UniqueRideWeapon_OneShotBase_parameters.hpp"


namespace PalSDK
{

// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.ShootBulletBP
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_UniqueRideWeapon_OneShotBase_C::ShootBulletBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_OneShotBase_C", "ShootBulletBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UniqueRideWeapon_OneShotBase_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_OneShotBase_C", "OnPullTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.GetShootInterval
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UniqueRideWeapon_OneShotBase_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_OneShotBase_C", "GetShootInterval");

	Params::BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UniqueRideWeapon_OneShotBase_C::ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_OneShotBase_C", "ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase");

	Params::BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

