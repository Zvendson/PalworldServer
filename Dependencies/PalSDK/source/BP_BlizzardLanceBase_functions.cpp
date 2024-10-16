#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BlizzardLanceBase_classes.hpp"
#include "PalSDK/BP_BlizzardLanceBase_parameters.hpp"


namespace PalSDK
{

// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BlizzardLanceBase_C::BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.ChangeCollisionProfile
// (BlueprintCallable, BlueprintEvent)

void ABP_BlizzardLanceBase_C::ChangeCollisionProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "ChangeCollisionProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.ExecuteUbergraph_BP_BlizzardLanceBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BlizzardLanceBase_C::ExecuteUbergraph_BP_BlizzardLanceBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "ExecuteUbergraph_BP_BlizzardLanceBase");

	Params::BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.OnHitDelegate_01
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyHitComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherHitActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherHitComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           FoliageIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BlizzardLanceBase_C::OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "OnHitDelegate_01");

	Params::BP_BlizzardLanceBase_C_OnHitDelegate_01 Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = std::move(FoliageIndex);
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BlizzardLanceBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.ShootThunder
// (BlueprintCallable, BlueprintEvent)

void ABP_BlizzardLanceBase_C::ShootThunder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "ShootThunder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void ABP_BlizzardLanceBase_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.カスタムイベント_1
// (BlueprintCallable, BlueprintEvent)

void ABP_BlizzardLanceBase_C::_________________________1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "カスタムイベント_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.カスタムイベント_2
// (BlueprintCallable, BlueprintEvent)

void ABP_BlizzardLanceBase_C::_________________________2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlizzardLanceBase_C", "カスタムイベント_2");

	UObject::ProcessEvent(Func, nullptr);
}

}

