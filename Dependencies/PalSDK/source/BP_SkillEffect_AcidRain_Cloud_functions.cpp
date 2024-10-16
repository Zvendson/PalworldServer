#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_AcidRain_Cloud_classes.hpp"
#include "PalSDK/BP_SkillEffect_AcidRain_Cloud_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.EndSkill
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_AcidRain_Cloud_C::EndSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "EndSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_AcidRain_Cloud_C::ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud");

	Params::BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_AcidRain_Cloud_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "FadeOutEffect");

	Params::BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.FindNearestTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_AcidRain_Cloud_C::FindNearestTarget(bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "FindNearestTarget");

	Params::BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.GetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_AcidRain_Cloud_C::GetTargetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "GetTargetLocation");

	Params::BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.OnDamageSkill
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SkillEffect_AcidRain_Cloud_C::OnDamageSkill(const struct FPalDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "OnDamageSkill");

	Params::BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill Parms{};

	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_AcidRain_Cloud_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_AcidRain_Cloud_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "ReceiveTick");

	Params::BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.SpawnRainBullet
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_AcidRain_Cloud_C::SpawnRainBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_AcidRain_Cloud_C", "SpawnRainBullet");

	UObject::ProcessEvent(Func, nullptr);
}

}

