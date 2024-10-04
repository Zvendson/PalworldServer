#include "PalServer/Basic.hpp"

#include "PalServer/BP_ThrowPal_ThrowObject_classes.hpp"
#include "PalServer/BP_ThrowPal_ThrowObject_parameters.hpp"


namespace PalServer
{

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.CollectTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::CollectTarget(class AActor** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "CollectTarget");

	Params::BP_ThrowPal_ThrowObject_C_CollectTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.ExecuteUbergraph_BP_ThrowPal_ThrowObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "ExecuteUbergraph_BP_ThrowPal_ThrowObject");

	Params::BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.FindNearEnemy
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    OwnerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    OutputPin                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "FindNearEnemy");

	Params::BP_ThrowPal_ThrowObject_C_FindNearEnemy Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.OnHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThrowPal_ThrowObject_C::OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "OnHit");

	Params::BP_ThrowPal_ThrowObject_C_OnHit Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.PostProcessSpawnOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::PostProcessSpawnOtomo(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "PostProcessSpawnOtomo");

	Params::BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "ReceiveTick");

	Params::BP_ThrowPal_ThrowObject_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.SpawnOtomo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SpawnOtomo_0                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::SpawnOtomo(class APalCharacter** SpawnOtomo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "SpawnOtomo");

	Params::BP_ThrowPal_ThrowObject_C_SpawnOtomo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnOtomo_0 != nullptr)
		*SpawnOtomo_0 = Parms.SpawnOtomo_0;
}


// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.UpdateRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPal_ThrowObject_C::UpdateRotator(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowPal_ThrowObject_C", "UpdateRotator");

	Params::BP_ThrowPal_ThrowObject_C_UpdateRotator Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

