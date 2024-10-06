#include "PalServer/Basic.hpp"

#include "PalServer/BP_ThrowPalWeapon_classes.hpp"
#include "PalServer/BP_ThrowPalWeapon_parameters.hpp"


namespace PalServer
{

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.ExecuteUbergraph_BP_ThrowPalWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "ExecuteUbergraph_BP_ThrowPalWeapon");

	Params::BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_ThrowPalWeapon_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "GetEquipSocketName");

	Params::BP_ThrowPalWeapon_C_GetEquipSocketName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ThrowObject                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "GetThrowObjectClass");

	Params::BP_ThrowPalWeapon_C_GetThrowObjectClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsNotEmptyOtomo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NotEmpty                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::IsNotEmptyOtomo(bool* NotEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "IsNotEmptyOtomo");

	Params::BP_ThrowPalWeapon_C_IsNotEmptyOtomo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NotEmpty != nullptr)
		*NotEmpty = Parms.NotEmpty;
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.On Throw
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowPalWeapon_C::On_Throw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "On Throw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "OnAttachWeapon");

	Params::BP_ThrowPalWeapon_C_OnAttachWeapon Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DetachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "OnDetachWeapon");

	Params::BP_ThrowPalWeapon_C_OnDetachWeapon Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.Set Flags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::Set_Flags(bool Disable, double Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "Set Flags");

	Params::BP_ThrowPalWeapon_C_Set_Flags Parms{};

	Parms.Disable = Disable;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsEmptyMagazine
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowPalWeapon_C::IsEmptyMagazine() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "IsEmptyMagazine");

	Params::BP_ThrowPalWeapon_C_IsEmptyMagazine Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

