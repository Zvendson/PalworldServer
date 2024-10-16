#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_OilRigCannonBase_classes.hpp"
#include "PalSDK/BP_OilRigCannonBase_parameters.hpp"


namespace PalSDK
{

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Stop Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannonBase_C::Stop_Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "Stop Animation");

	Params::BP_OilRigCannonBase_C_Stop_Animation Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Start Animation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannonBase_C::Start_Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "Start Animation");

	Params::BP_OilRigCannonBase_C_Start_Animation Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannonBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "ReceiveTick");

	Params::BP_OilRigCannonBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OilRigCannonBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.OnDestroyedWeapon_ForBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_OilRigCannonBase_C::OnDestroyedWeapon_ForBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "OnDestroyedWeapon_ForBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Interact Completed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannonBase_C::Interact_Completed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "Interact Completed");

	Params::BP_OilRigCannonBase_C_Interact_Completed Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ExecuteUbergraph_BP_OilRigCannonBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilRigCannonBase_C::ExecuteUbergraph_BP_OilRigCannonBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "ExecuteUbergraph_BP_OilRigCannonBase");

	Params::BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ChangeDefaultVisual_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilRigCannonBase_C::ChangeDefaultVisual_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "ChangeDefaultVisual_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.GetIndicatorType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EPalInteractiveObjectIndicatorType      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EPalInteractiveObjectIndicatorType ABP_OilRigCannonBase_C::GetIndicatorType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilRigCannonBase_C", "GetIndicatorType");

	Params::BP_OilRigCannonBase_C_GetIndicatorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

