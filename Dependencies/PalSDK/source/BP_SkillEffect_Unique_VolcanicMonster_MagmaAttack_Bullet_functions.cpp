#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_classes.hpp"
#include "PalSDK/BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet.BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C.ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C", "ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet");

	Params::BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C_ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet.BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

