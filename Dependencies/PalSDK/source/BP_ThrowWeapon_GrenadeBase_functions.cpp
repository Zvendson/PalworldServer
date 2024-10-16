#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ThrowWeapon_GrenadeBase_classes.hpp"
#include "PalSDK/BP_ThrowWeapon_GrenadeBase_parameters.hpp"


namespace PalSDK
{

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.ComsumeItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowWeapon_GrenadeBase_C::ComsumeItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "ComsumeItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetBulletShootRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         BulletRotate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThrowWeapon_GrenadeBase_C::GetBulletShootRotation(struct FRotator* BulletRotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetBulletShootRotation");

	Params::BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BulletRotate != nullptr)
		*BulletRotate = std::move(Parms.BulletRotate);
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_ThrowWeapon_GrenadeBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetEquipSocketName");

	Params::BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetShootPitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Pitch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_GrenadeBase_C::GetShootPitch(double* Pitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetShootPitch");

	Params::BP_ThrowWeapon_GrenadeBase_C_GetShootPitch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ThrowObject                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_GrenadeBase_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetThrowObjectClass");

	Params::BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.On Throw
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowWeapon_GrenadeBase_C::On_Throw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "On Throw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetRemainBulletCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_ThrowWeapon_GrenadeBase_C::GetRemainBulletCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetRemainBulletCount");

	Params::BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.IsEnableAutoAim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowWeapon_GrenadeBase_C::IsEnableAutoAim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "IsEnableAutoAim");

	Params::BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

