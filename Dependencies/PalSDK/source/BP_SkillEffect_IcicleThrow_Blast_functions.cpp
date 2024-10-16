#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_IcicleThrow_Blast_classes.hpp"
#include "PalSDK/BP_SkillEffect_IcicleThrow_Blast_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.AttachOrEnableAttackCollisionToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::AttachOrEnableAttackCollisionToTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "AttachOrEnableAttackCollisionToTarget");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_AttachOrEnableAttackCollisionToTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.CheckAttackTriggers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::CheckAttackTriggers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "CheckAttackTriggers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.DestroyAllAttachedAttackCollisions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::DestroyAllAttachedAttackCollisions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "DestroyAllAttachedAttackCollisions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.DisableAttachedAttackCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::DisableAttachedAttackCollision(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "DisableAttachedAttackCollision");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_DisableAttachedAttackCollision Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.DrawDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::DrawDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "DrawDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.EndBlast
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::EndBlast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "EndBlast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.ExpandAttackTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::ExpandAttackTrigger(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "ExpandAttackTrigger");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_ExpandAttackTrigger Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "FadeOutEffect");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "ReceiveTick");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IcicleThrow_Blast_C::UpdateTimer(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "UpdateTimer");

	Params::BP_SkillEffect_IcicleThrow_Blast_C_UpdateTimer Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IcicleThrow_Blast_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IcicleThrow_Blast_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

