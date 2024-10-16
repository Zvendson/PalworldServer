#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_WorldSecurity_AreaInvasion_Volume_classes.hpp"
#include "PalSDK/BP_WorldSecurity_AreaInvasion_Volume_parameters.hpp"


namespace PalSDK
{

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldSecurity_AreaInvasion_Volume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "ReceiveTick");

	Params::BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WorldSecurity_AreaInvasion_Volume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WorldSecurity_AreaInvasion_Volume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "ReceiveActorEndOverlap");

	Params::BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WorldSecurity_AreaInvasion_Volume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "ReceiveActorBeginOverlap");

	Params::BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.NotifyHitActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldSecurity_AreaInvasion_Volume_C::NotifyHitActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "NotifyHitActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.IsPlayerOverlap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOverlap                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   OverlapPlayers                                         (Parm, OutParm)

void ABP_WorldSecurity_AreaInvasion_Volume_C::IsPlayerOverlap(bool* IsOverlap, TArray<class AActor*>* OverlapPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "IsPlayerOverlap");

	Params::BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOverlap != nullptr)
		*IsOverlap = Parms.IsOverlap;

	if (OverlapPlayers != nullptr)
		*OverlapPlayers = std::move(Parms.OverlapPlayers);
}


// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldSecurity_AreaInvasion_Volume_C::ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldSecurity_AreaInvasion_Volume_C", "ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume");

	Params::BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

