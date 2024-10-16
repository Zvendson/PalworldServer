#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Unique_ThunderSword_classes.hpp"
#include "PalSDK/BP_SkillEffect_Unique_ThunderSword_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_Unique_ThunderSword_C::BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_C::ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword");

	Params::BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "FadeOutEffect");

	Params::BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.Launch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_C::Launch(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "Launch");

	Params::BP_SkillEffect_Unique_ThunderSword_C_Launch Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.LaunchByVector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_C::LaunchByVector(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "LaunchByVector");

	Params::BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector Parms{};

	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_Unique_ThunderSword_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

