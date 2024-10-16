#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ThunderStrikeBase_classes.hpp"
#include "PalSDK/BP_ThunderStrikeBase_parameters.hpp"


namespace PalSDK
{

// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ActivateOmen
// (BlueprintCallable, BlueprintEvent)

void ABP_ThunderStrikeBase_C::ActivateOmen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "ActivateOmen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ActivateThunder
// (BlueprintCallable, BlueprintEvent)

void ABP_ThunderStrikeBase_C::ActivateThunder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "ActivateThunder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ThunderStrikeBase_C::BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_ThunderStrikeBase_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ExecuteUbergraph_BP_ThunderStrikeBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThunderStrikeBase_C::ExecuteUbergraph_BP_ThunderStrikeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "ExecuteUbergraph_BP_ThunderStrikeBase");

	Params::BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.OnHitDelegate_01
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyHitComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherHitActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherHitComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           FoliageIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThunderStrikeBase_C::OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "OnHitDelegate_01");

	Params::BP_ThunderStrikeBase_C_OnHitDelegate_01 Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = std::move(FoliageIndex);
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ThunderStrikeBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.SetThuderSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ThunderStrikeBase_C::SetThuderSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "SetThuderSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ShootThunder
// (BlueprintCallable, BlueprintEvent)

void ABP_ThunderStrikeBase_C::ShootThunder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThunderStrikeBase_C", "ShootThunder");

	UObject::ProcessEvent(Func, nullptr);
}

}

