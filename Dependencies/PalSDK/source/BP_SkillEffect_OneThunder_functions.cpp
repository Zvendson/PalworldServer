#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_OneThunder_classes.hpp"
#include "PalSDK/BP_SkillEffect_OneThunder_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_OneThunder.BP_SkillEffect_OneThunder_C.SpawnBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_OneThunder_C::SpawnBullet(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_OneThunder_C", "SpawnBullet");

	Params::BP_SkillEffect_OneThunder_C_SpawnBullet Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}

