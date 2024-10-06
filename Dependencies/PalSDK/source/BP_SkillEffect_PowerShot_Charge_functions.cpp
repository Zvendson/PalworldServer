#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_PowerShot_Charge_classes.hpp"
#include "PalServer/BP_SkillEffect_PowerShot_Charge_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_PowerShot_Charge_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "CancelShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge");

	Params::BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "FadeOutEffect");

	Params::BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_PowerShot_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ShootBullet");

	Params::BP_SkillEffect_PowerShot_Charge_C_ShootBullet Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

