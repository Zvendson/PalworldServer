#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_SolarBeam_Charge_classes.hpp"
#include "PalSDK/BP_SkillEffect_SolarBeam_Charge_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_SolarBeam_Charge.BP_SkillEffect_SolarBeam_Charge_C.ExecuteUbergraph_BP_SkillEffect_SolarBeam_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SolarBeam_Charge_C::ExecuteUbergraph_BP_SkillEffect_SolarBeam_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_Charge_C", "ExecuteUbergraph_BP_SkillEffect_SolarBeam_Charge");

	Params::BP_SkillEffect_SolarBeam_Charge_C_ExecuteUbergraph_BP_SkillEffect_SolarBeam_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SolarBeam_Charge.BP_SkillEffect_SolarBeam_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_SolarBeam_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_Charge_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

