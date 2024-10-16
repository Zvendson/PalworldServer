#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BulletRain_classes.hpp"
#include "PalSDK/BP_BulletRain_parameters.hpp"


namespace PalSDK
{

// Function BP_BulletRain.BP_BulletRain_C.ExecuteUbergraph_BP_BulletRain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletRain_C::ExecuteUbergraph_BP_BulletRain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletRain_C", "ExecuteUbergraph_BP_BulletRain");

	Params::BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BulletRain.BP_BulletRain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BulletRain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletRain_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BulletRain.BP_BulletRain_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletRain_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletRain_C", "ReceiveTick");

	Params::BP_BulletRain_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BulletRain.BP_BulletRain_C.SpawnBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletRain_C::SpawnBullet(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletRain_C", "SpawnBullet");

	Params::BP_BulletRain_C_SpawnBullet Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BulletRain.BP_BulletRain_C.UpdateThunderSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletRain_C::UpdateThunderSpawn(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletRain_C", "UpdateThunderSpawn");

	Params::BP_BulletRain_C_UpdateThunderSpawn Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

