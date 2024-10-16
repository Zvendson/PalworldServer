#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ExplosiveModifierBase_classes.hpp"
#include "PalSDK/BP_ExplosiveModifierBase_parameters.hpp"


namespace PalSDK
{

// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.ExecuteUbergraph_BP_ExplosiveModifierBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExplosiveModifierBase_C::ExecuteUbergraph_BP_ExplosiveModifierBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "ExecuteUbergraph_BP_ExplosiveModifierBase");

	Params::BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBullet*                       Bullet                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ExplosiveModifierBase_C::Initialize(const class APalBullet* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "Initialize");

	Params::BP_ExplosiveModifierBase_C_Initialize Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.カスタムイベント_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hi                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ExplosiveModifierBase_C::_________________________0(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "カスタムイベント_0");

	Params::BP_ExplosiveModifierBase_C__________________________0 Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherCharacter = OtherCharacter;
	Parms.OtherComp = OtherComp;
	Parms.Hi = std::move(Hi);

	UObject::ProcessEvent(Func, &Parms);
}

}

