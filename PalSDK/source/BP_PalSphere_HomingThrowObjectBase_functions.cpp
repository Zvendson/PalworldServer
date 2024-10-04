#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSphere_HomingThrowObjectBase_classes.hpp"
#include "PalServer/BP_PalSphere_HomingThrowObjectBase_parameters.hpp"


namespace PalServer
{

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	Params::BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase");

	Params::BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.GetBodyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           bodyClass                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::GetBodyClass(class UClass** bodyClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "GetBodyClass");

	Params::BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bodyClass != nullptr)
		*bodyClass = Parms.bodyClass;
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.Rotate Self
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::Rotate_Self(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "Rotate Self");

	Params::BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::SetAttackTarget(class APalCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "SetAttackTarget");

	Params::BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetCaptureLevelType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCaptureSphereLevelType              LevelType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::SetCaptureLevelType(EPalCaptureSphereLevelType LevelType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "SetCaptureLevelType");

	Params::BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType Parms{};

	Parms.LevelType = LevelType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetMaterialByType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCaptureSphereLevelType              CaptureLevelType_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::SetMaterialByType(EPalCaptureSphereLevelType CaptureLevelType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "SetMaterialByType");

	Params::BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType Parms{};

	Parms.CaptureLevelType_0 = CaptureLevelType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_HomingThrowObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_HomingThrowObjectBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_HomingThrowObjectBase_C", "ReceiveTick");

	Params::BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

