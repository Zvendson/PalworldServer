#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSphere_ThrowObject_classes.hpp"
#include "PalServer/BP_PalSphere_ThrowObject_parameters.hpp"


namespace PalServer
{

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalSphere_ThrowObject_C::BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	Params::BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.Capture Start Process After Delay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCaptureBodyBase_C*         Body                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    SneakAttack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::Capture_Start_Process_After_Delay(class ABP_PalCaptureBodyBase_C* Body, class APalCharacter* TargetActor, bool SneakAttack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "Capture Start Process After Delay");

	Params::BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay Parms{};

	Parms.Body = Body;
	Parms.TargetActor = TargetActor;
	Parms.SneakAttack = SneakAttack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.CaptureStartProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_ThrowObject_C::CaptureStartProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "CaptureStartProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.DelayCaptureBodyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCaptureBodyBase_C*         BodyActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SneakAttack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::DelayCaptureBodyStart(class ABP_PalCaptureBodyBase_C* BodyActor, class APalCharacter* Target, double Delay, bool SneakAttack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "DelayCaptureBodyStart");

	Params::BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart Parms{};

	Parms.BodyActor = BodyActor;
	Parms.Target = Target;
	Parms.Delay = Delay;
	Parms.SneakAttack = SneakAttack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.ExecuteUbergraph_BP_PalSphere_ThrowObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::ExecuteUbergraph_BP_PalSphere_ThrowObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "ExecuteUbergraph_BP_PalSphere_ThrowObject");

	Params::BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetBodyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           bodyClass                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::GetBodyClass(class UClass** bodyClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "GetBodyClass");

	Params::BP_PalSphere_ThrowObject_C_GetBodyClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bodyClass != nullptr)
		*bodyClass = Parms.bodyClass;
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetMaxBoundCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::GetMaxBoundCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "GetMaxBoundCount");

	Params::BP_PalSphere_ThrowObject_C_GetMaxBoundCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsCaptureablePal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Captureable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    TargetPalCharacter                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::IsCaptureablePal(class AActor* TargetActor, bool* Captureable, class APalCharacter** TargetPalCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "IsCaptureablePal");

	Params::BP_PalSphere_ThrowObject_C_IsCaptureablePal Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Captureable != nullptr)
		*Captureable = Parms.Captureable;

	if (TargetPalCharacter != nullptr)
		*TargetPalCharacter = Parms.TargetPalCharacter;
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsCountDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsDestroy_0                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::IsCountDestroy(bool* Param_IsDestroy_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "IsCountDestroy");

	Params::BP_PalSphere_ThrowObject_C_IsCountDestroy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsDestroy_0 != nullptr)
		*Param_IsDestroy_0 = Parms.Param_IsDestroy_0;
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.OnSpawnJudgeBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            SpawnGUID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           SpawnActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::OnSpawnJudgeBall(const struct FGuid& SpawnGUID, class AActor* SpawnActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "OnSpawnJudgeBall");

	Params::BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall Parms{};

	Parms.SpawnGUID = std::move(SpawnGUID);
	Parms.SpawnActor = SpawnActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.Play Sound Bounce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalSphere_ThrowObject_C::Play_Sound_Bounce(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "Play Sound Bounce");

	Params::BP_PalSphere_ThrowObject_C_Play_Sound_Bounce Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_ThrowObject_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "ReceiveTick");

	Params::BP_PalSphere_ThrowObject_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.SetProjectileMovement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::SetProjectileMovement(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "SetProjectileMovement");

	Params::BP_PalSphere_ThrowObject_C_SetProjectileMovement Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.UpdateRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::UpdateRotator(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "UpdateRotator");

	Params::BP_PalSphere_ThrowObject_C_UpdateRotator Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_ThrowObject_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetOwnerCharacterOrRidingCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           RidingCharacter                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::GetOwnerCharacterOrRidingCharacter(class AActor** RidingCharacter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "GetOwnerCharacterOrRidingCharacter");

	Params::BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RidingCharacter != nullptr)
		*RidingCharacter = Parms.RidingCharacter;
}


// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsOwnerLocalControlActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsLocalControlActor                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_C::IsOwnerLocalControlActor(bool* IsLocalControlActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_C", "IsOwnerLocalControlActor");

	Params::BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocalControlActor != nullptr)
		*IsLocalControlActor = Parms.IsLocalControlActor;
}

}

