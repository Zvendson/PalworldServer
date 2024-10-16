#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_RootAttack_Attack_classes.hpp"
#include "PalSDK/BP_Skill_RootAttack_Attack_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_RootAttack_Attack_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Attack_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.ExecuteUbergraph_BP_Skill_RootAttack_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_Attack_C::ExecuteUbergraph_BP_Skill_RootAttack_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Attack_C", "ExecuteUbergraph_BP_Skill_RootAttack_Attack");

	Params::BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_RootAttack_Attack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_RootAttack_Attack_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

