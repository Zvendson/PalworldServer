#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_RootAttack_Road_classes.hpp"
#include "PalSDK/BP_Skill_RootAttack_Road_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.End
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_RootAttack_Road_C::End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Road_C", "End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.ExecuteUbergraph_BP_Skill_RootAttack_Road
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_Road_C::ExecuteUbergraph_BP_Skill_RootAttack_Road(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Road_C", "ExecuteUbergraph_BP_Skill_RootAttack_Road");

	Params::BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_Road_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Road_C", "FadeOutEffect");

	Params::BP_Skill_RootAttack_Road_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_RootAttack_Road_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Road_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

