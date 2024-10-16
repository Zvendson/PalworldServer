#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ThrowObjectBase_classes.hpp"
#include "PalSDK/BP_ThrowObjectBase_parameters.hpp"


namespace PalSDK
{

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ExecuteUbergraph_BP_ThrowObjectBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ExecuteUbergraph_BP_ThrowObjectBase");

	Params::BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetAkOwnerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_ThrowObjectBase_C::GetAkOwnerComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "GetAkOwnerComponent");

	Params::BP_ThrowObjectBase_C_GetAkOwnerComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetMaxBoundCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::GetMaxBoundCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "GetMaxBoundCount");

	Params::BP_ThrowObjectBase_C_GetMaxBoundCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IncrementBoundCountAndCheckDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowObjectBase_C::IncrementBoundCountAndCheckDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IncrementBoundCountAndCheckDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsCountDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDestroy_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::IsCountDestroy(bool* IsDestroy_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IsCountDestroy");

	Params::BP_ThrowObjectBase_C_IsCountDestroy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDestroy_0 != nullptr)
		*IsDestroy_0 = Parms.IsDestroy_0;
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsDestroy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowObjectBase_C::IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IsDestroy");

	Params::BP_ThrowObjectBase_C_IsDestroy Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherCharacter = OtherCharacter;
	Parms.OtherComp = OtherComp;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.OnBlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThrowObjectBase_C::OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "OnBlock");

	Params::BP_ThrowObjectBase_C_OnBlock Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.OnEnableGravity
// (BlueprintCallable, BlueprintEvent)

void ABP_ThrowObjectBase_C::OnEnableGravity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "OnEnableGravity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.Play Throw Sound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ThrowObjectBase_C::Play_Throw_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "Play Throw Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundID     ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::PlaySound(const struct FPalDataTableRowName_SoundID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "PlaySound");

	Params::BP_ThrowObjectBase_C_PlaySound Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySoundWithMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundID     ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        PhysicalMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::PlaySoundWithMaterial(const struct FPalDataTableRowName_SoundID& ID, EPhysicalSurface PhysicalMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "PlaySoundWithMaterial");

	Params::BP_ThrowObjectBase_C_PlaySoundWithMaterial Parms{};

	Parms.ID = std::move(ID);
	Parms.PhysicalMaterial = PhysicalMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ReceiveActorBeginOverlap");

	Params::BP_ThrowObjectBase_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ThrowObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

