#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_ThunderFunnel_classes.hpp"
#include "PalSDK/BP_Skill_ThunderFunnel_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.Create Skill Effect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffectBase_C*            SkillEffect                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_C::Create_Skill_Effect(const struct FTransform& SpawnTransform, class AActor* Owner_0, int32 Index_0, class ABP_SkillEffectBase_C** SkillEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "Create Skill Effect");

	Params::BP_Skill_ThunderFunnel_C_Create_Skill_Effect Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillEffect != nullptr)
		*SkillEffect = Parms.SkillEffect;
}


// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.ExecuteUbergraph_BP_Skill_ThunderFunnel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_C::ExecuteUbergraph_BP_Skill_ThunderFunnel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "ExecuteUbergraph_BP_Skill_ThunderFunnel");

	Params::BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_ThunderFunnel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.SetIsReady
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_ThunderFunnel_C::SetIsReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "SetIsReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.SpawnSkillEffect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffectBase_C*            SkillEffect                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_C::SpawnSkillEffect(const struct FTransform& SpawTransform, class AActor* Owner_0, int32 Index_0, class ABP_SkillEffectBase_C** SkillEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "SpawnSkillEffect");

	Params::BP_Skill_ThunderFunnel_C_SpawnSkillEffect Parms{};

	Parms.SpawTransform = std::move(SpawTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillEffect != nullptr)
		*SkillEffect = Parms.SkillEffect;
}


// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.UpdateMaxDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_C::UpdateMaxDuration(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_C", "UpdateMaxDuration");

	Params::BP_Skill_ThunderFunnel_C_UpdateMaxDuration Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

