#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_RootAttack_classes.hpp"
#include "PalSDK/BP_Skill_RootAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.Attack
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_RootAttack_C::Attack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "Attack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.ExecuteUbergraph_BP_Skill_RootAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_C::ExecuteUbergraph_BP_Skill_RootAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "ExecuteUbergraph_BP_Skill_RootAttack");

	Params::BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_RootAttack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.ReceiveTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "ReceiveTick");

	Params::BP_Skill_RootAttack_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.SetInitVector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_C::SetInitVector(const struct FVector& Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "SetInitVector");

	Params::BP_Skill_RootAttack_C_SetInitVector Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.SetUseRideTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideTarget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_C::SetUseRideTarget(class AActor* RideTarget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "SetUseRideTarget");

	Params::BP_Skill_RootAttack_C_SetUseRideTarget Parms{};

	Parms.RideTarget_0 = RideTarget_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.SpawnRoad
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_RootAttack_C::SpawnRoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_C", "SpawnRoad");

	UObject::ProcessEvent(Func, nullptr);
}

}

