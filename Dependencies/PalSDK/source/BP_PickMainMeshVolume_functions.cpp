#include "PalServer/Basic.hpp"

#include "PalServer/BP_PickMainMeshVolume_classes.hpp"
#include "PalServer/BP_PickMainMeshVolume_parameters.hpp"


namespace PalServer
{

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.Applied Make Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalSkeletalMeshComponent*        SkeletalMeshComponent                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::Applied_Make_Info(const class UPalSkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "Applied Make Info");

	Params::BP_PickMainMeshVolume_C_Applied_Make_Info Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BeginOverlapMainMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   InMainMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::BeginOverlapMainMesh(class UMeshComponent* InMainMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "BeginOverlapMainMesh");

	Params::BP_PickMainMeshVolume_C_BeginOverlapMainMesh Parms{};

	Parms.InMainMesh = InMainMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BeginOverlapPalLit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    MaterialSrc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "BeginOverlapPalLit");

	Params::BP_PickMainMeshVolume_C_BeginOverlapPalLit Parms{};

	Parms.Material = Material;
	Parms.MaterialSrc = MaterialSrc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PickMainMeshVolume_C::BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.EndOverlapMainMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   OutMainMesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::EndOverlapMainMesh(class UMeshComponent* OutMainMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "EndOverlapMainMesh");

	Params::BP_PickMainMeshVolume_C_EndOverlapMainMesh Parms{};

	Parms.OutMainMesh = OutMainMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.EndOverlapPalLit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::EndOverlapPalLit(class UMaterialInstanceDynamic* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "EndOverlapPalLit");

	Params::BP_PickMainMeshVolume_C_EndOverlapPalLit Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.ExecuteUbergraph_BP_PickMainMeshVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::ExecuteUbergraph_BP_PickMainMeshVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "ExecuteUbergraph_BP_PickMainMeshVolume");

	Params::BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.GetMeshFromActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>           Mesh                                                   (Parm, OutParm, ContainsInstancedReference)

void ABP_PickMainMeshVolume_C::GetMeshFromActor(class AActor* Actor, TArray<class UMeshComponent*>* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "GetMeshFromActor");

	Params::BP_PickMainMeshVolume_C_GetMeshFromActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = std::move(Parms.Mesh);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.IsCelShader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCelShader_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::IsCelShader(class UMaterialInterface* Material, bool* IsCelShader_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "IsCelShader");

	Params::BP_PickMainMeshVolume_C_IsCelShader Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCelShader_0 != nullptr)
		*IsCelShader_0 = Parms.IsCelShader_0;
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.IsPalLit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPalLit_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::IsPalLit(class UMaterialInterface* Material, bool* IsPalLit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "IsPalLit");

	Params::BP_PickMainMeshVolume_C_IsPalLit Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPalLit_0 != nullptr)
		*IsPalLit_0 = Parms.IsPalLit_0;
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickMainMeshVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickMainMeshVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PickMainMeshVolume_C", "ReceiveTick");

	Params::BP_PickMainMeshVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

