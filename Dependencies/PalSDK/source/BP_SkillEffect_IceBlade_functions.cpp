#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_IceBlade_classes.hpp"
#include "PalSDK/BP_SkillEffect_IceBlade_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_IceBlade_C::BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SkillEffect_IceBlade_C_BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.EffectTimeout
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceBlade_C::EffectTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "EffectTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.ExecuteUbergraph_BP_SkillEffect_IceBlade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceBlade_C::ExecuteUbergraph_BP_SkillEffect_IceBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "ExecuteUbergraph_BP_SkillEffect_IceBlade");

	Params::BP_SkillEffect_IceBlade_C_ExecuteUbergraph_BP_SkillEffect_IceBlade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceBlade_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "FadeOutEffect");

	Params::BP_SkillEffect_IceBlade_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.OnHitGround
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceBlade_C::OnHitGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "OnHitGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_IceBlade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceBlade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceBlade_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

