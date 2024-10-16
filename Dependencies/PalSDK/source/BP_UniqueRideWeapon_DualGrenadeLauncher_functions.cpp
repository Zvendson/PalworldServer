#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_UniqueRideWeapon_DualGrenadeLauncher_classes.hpp"
#include "PalSDK/BP_UniqueRideWeapon_DualGrenadeLauncher_parameters.hpp"


namespace PalSDK
{

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.ShootBulletBP
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UniqueRideWeapon_DualGrenadeLauncher_C::ShootBulletBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "ShootBulletBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_UniqueRideWeapon_DualGrenadeLauncher_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "OnAttachWeapon");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetUseWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetUseWeaponMesh(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetUseWeaponMesh");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleRotation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetMuzzleRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetMuzzleRotation");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetMuzzleLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetMuzzleLocation");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleEffect
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UNiagaraSystem* ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetMuzzleEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetMuzzleEffect");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetBulletClass
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class APalBullet>           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class APalBullet> ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetBulletClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetBulletClass");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetAllMeshComponent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>           OutMesh                                                (Parm, OutParm, ContainsInstancedReference)

void ABP_UniqueRideWeapon_DualGrenadeLauncher_C::GetAllMeshComponent(TArray<class UMeshComponent*>* OutMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "GetAllMeshComponent");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMesh != nullptr)
		*OutMesh = std::move(Parms.OutMesh);
}


// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UniqueRideWeapon_DualGrenadeLauncher_C::ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueRideWeapon_DualGrenadeLauncher_C", "ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher");

	Params::BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

