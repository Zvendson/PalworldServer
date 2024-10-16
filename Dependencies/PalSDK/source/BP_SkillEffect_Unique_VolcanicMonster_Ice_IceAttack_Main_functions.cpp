#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_classes.hpp"
#include "PalSDK/BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main.BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C.GetBullet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C::GetBullet(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C", "GetBullet");

	Params::BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C_GetBullet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

