#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_ThunderSword_Blast_classes.hpp"
#include "PalSDK/BP_SkillEffect_ThunderSword_Blast_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThunderSword_Blast_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThunderSword_Blast_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.EffectTimeout
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThunderSword_Blast_C::EffectTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThunderSword_Blast_C", "EffectTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThunderSword_Blast_C::ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThunderSword_Blast_C", "ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast");

	Params::BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_ThunderSword_Blast_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThunderSword_Blast_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.SetLifeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThunderSword_Blast_C::SetLifeTime(double Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThunderSword_Blast_C", "SetLifeTime");

	Params::BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}

}

