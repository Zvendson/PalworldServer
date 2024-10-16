#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_WaterGun_Muzzle_classes.hpp"
#include "PalSDK/BP_SkillEffect_WaterGun_Muzzle_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_WaterGun_Muzzle.BP_SkillEffect_WaterGun_Muzzle_C.ExecuteUbergraph_BP_SkillEffect_WaterGun_Muzzle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WaterGun_Muzzle_C::ExecuteUbergraph_BP_SkillEffect_WaterGun_Muzzle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WaterGun_Muzzle_C", "ExecuteUbergraph_BP_SkillEffect_WaterGun_Muzzle");

	Params::BP_SkillEffect_WaterGun_Muzzle_C_ExecuteUbergraph_BP_SkillEffect_WaterGun_Muzzle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WaterGun_Muzzle.BP_SkillEffect_WaterGun_Muzzle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_WaterGun_Muzzle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WaterGun_Muzzle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

