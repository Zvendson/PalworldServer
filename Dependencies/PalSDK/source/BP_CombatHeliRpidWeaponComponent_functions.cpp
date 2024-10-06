#include "PalServer/Basic.hpp"

#include "PalServer/BP_CombatHeliRpidWeaponComponent_classes.hpp"
#include "PalServer/BP_CombatHeliRpidWeaponComponent_parameters.hpp"


namespace PalServer
{

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_C::ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent");

	Params::BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.GetMuzzleTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       MzlTF                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_C::GetMuzzleTransform(struct FTransform* MzlTF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "GetMuzzleTransform");

	Params::BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MzlTF != nullptr)
		*MzlTF = std::move(Parms.MzlTF);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.GunAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_C::GunAim(double DeltaTime, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "GunAim");

	Params::BP_CombatHeliRpidWeaponComponent_C_GunAim Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.PullTrigger
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_CombatHeliRpidWeaponComponent_C::PullTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "PullTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.ReleaseTrigger
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_CombatHeliRpidWeaponComponent_C::ReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "ReleaseTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.SetGunMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             GunMesh_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_C::SetGunMesh(class UStaticMeshComponent* GunMesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "SetGunMesh");

	Params::BP_CombatHeliRpidWeaponComponent_C_SetGunMesh Parms{};

	Parms.GunMesh_0 = GunMesh_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.ShootBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CombatHeliRpidWeaponComponent_C::ShootBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_C", "ShootBullet");

	UObject::ProcessEvent(Func, nullptr);
}

}

