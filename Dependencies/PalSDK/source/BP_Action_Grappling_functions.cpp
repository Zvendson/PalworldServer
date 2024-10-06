#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_Grappling_classes.hpp"
#include "PalServer/BP_Action_Grappling_parameters.hpp"


namespace PalServer
{

// Function BP_Action_Grappling.BP_Action_Grappling_C.DisableShooter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::DisableShooter(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "DisableShooter");

	Params::BP_Action_Grappling_C_DisableShooter Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.ExecuteUbergraph_BP_Action_Grappling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "ExecuteUbergraph_BP_Action_Grappling");

	Params::BP_Action_Grappling_C_ExecuteUbergraph_BP_Action_Grappling Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.GetOffRide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Grappling_C::GetOffRide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "GetOffRide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.NotifyFinishToWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Grappling_C::NotifyFinishToWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "NotifyFinishToWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.NotifyStartToWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CoolTimeRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::NotifyStartToWeapon(const struct FVector& HitLocation, double CoolTimeRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "NotifyStartToWeapon");

	Params::BP_Action_Grappling_C_NotifyStartToWeapon Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.CoolTimeRate = CoolTimeRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Grappling_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnBlendOut_6CB4C09840328B4E3D8F4680A0904209
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::OnBlendOut_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnBlendOut_6CB4C09840328B4E3D8F4680A0904209");

	Params::BP_Action_Grappling_C_OnBlendOut_6CB4C09840328B4E3D8F4680A0904209 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Grappling_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnCompleted_6CB4C09840328B4E3D8F4680A0904209
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::OnCompleted_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnCompleted_6CB4C09840328B4E3D8F4680A0904209");

	Params::BP_Action_Grappling_C_OnCompleted_6CB4C09840328B4E3D8F4680A0904209 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Grappling_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnInterrupted_6CB4C09840328B4E3D8F4680A0904209
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::OnInterrupted_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnInterrupted_6CB4C09840328B4E3D8F4680A0904209");

	Params::BP_Action_Grappling_C_OnInterrupted_6CB4C09840328B4E3D8F4680A0904209 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnNotifyBegin_6CB4C09840328B4E3D8F4680A0904209
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::OnNotifyBegin_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnNotifyBegin_6CB4C09840328B4E3D8F4680A0904209");

	Params::BP_Action_Grappling_C_OnNotifyBegin_6CB4C09840328B4E3D8F4680A0904209 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.OnNotifyEnd_6CB4C09840328B4E3D8F4680A0904209
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::OnNotifyEnd_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "OnNotifyEnd_6CB4C09840328B4E3D8F4680A0904209");

	Params::BP_Action_Grappling_C_OnNotifyEnd_6CB4C09840328B4E3D8F4680A0904209 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.SetPlayerVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::SetPlayerVelocity(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "SetPlayerVelocity");

	Params::BP_Action_Grappling_C_SetPlayerVelocity Parms{};

	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "TickAction");

	Params::BP_Action_Grappling_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.TryClimb
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Grappling_C::TryClimb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "TryClimb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grappling.BP_Action_Grappling_C.UpdateMeshRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grappling_C::UpdateMeshRotation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grappling_C", "UpdateMeshRotation");

	Params::BP_Action_Grappling_C_UpdateMeshRotation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

