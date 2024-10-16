#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_SeedMachinegun_classes.hpp"
#include "PalSDK/BP_SkillEffect_SeedMachinegun_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SeedMachinegun_C::BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");

	Params::BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.CalcCapsuleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SeedMachinegun_C::CalcCapsuleLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "CalcCapsuleLocation");

	Params::BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SeedMachinegun_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SeedMachinegun_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.ExecuteUbergraph_BP_SkillEffect_SeedMachinegun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SeedMachinegun_C::ExecuteUbergraph_BP_SkillEffect_SeedMachinegun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "ExecuteUbergraph_BP_SkillEffect_SeedMachinegun");

	Params::BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_SeedMachinegun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SeedMachinegun_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SeedMachinegun_C", "ReceiveTick");

	Params::BP_SkillEffect_SeedMachinegun_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

