#include "PalServer/Basic.hpp"

#include "PalServer/BP_OilRigCannon_LaserTower_classes.hpp"
#include "PalServer/BP_OilRigCannon_LaserTower_parameters.hpp"


namespace PalServer
{

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.SetActiveHeadMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannon_LaserTower_C::SetActiveHeadMesh(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "SetActiveHeadMesh");

	Params::BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannon_LaserTower_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "ReceiveTick");

	Params::BP_OilRigCannon_LaserTower_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.PullTrigger_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::PullTrigger_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "PullTrigger_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.OnDestroyedWeapon_ForBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::OnDestroyedWeapon_ForBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "OnDestroyedWeapon_ForBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ExecuteUbergraph_BP_OilRigCannon_LaserTower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannon_LaserTower_C::ExecuteUbergraph_BP_OilRigCannon_LaserTower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "ExecuteUbergraph_BP_OilRigCannon_LaserTower");

	Params::BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.Damage Ray Cast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::Damage_Ray_Cast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "Damage Ray Cast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ChangeDefaultVisual_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::ChangeDefaultVisual_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "ChangeDefaultVisual_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ChangeDefaultMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OilRigCannon_LaserTower_C::ChangeDefaultMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "ChangeDefaultMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannon_LaserTower_C::BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_OilRigCannon_LaserTower_C::BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.GetYawMesh
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_OilRigCannon_LaserTower_C::GetYawMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "GetYawMesh");

	Params::BP_OilRigCannon_LaserTower_C_GetYawMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.GetPitchMesh
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_OilRigCannon_LaserTower_C::GetPitchMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannon_LaserTower_C", "GetPitchMesh");

	Params::BP_OilRigCannon_LaserTower_C_GetPitchMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

