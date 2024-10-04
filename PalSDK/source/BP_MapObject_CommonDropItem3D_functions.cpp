#include "PalServer/Basic.hpp"

#include "PalServer/BP_MapObject_CommonDropItem3D_classes.hpp"
#include "PalServer/BP_MapObject_CommonDropItem3D_parameters.hpp"


namespace PalServer
{

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MapObject_CommonDropItem3D_C::BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "BP_OnSetConcreteModel");

	Params::BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ExecuteUbergraph_BP_MapObject_CommonDropItem3D
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ExecuteUbergraph_BP_MapObject_CommonDropItem3D(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ExecuteUbergraph_BP_MapObject_CommonDropItem3D");

	Params::BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnLoaded_857256B349A5E9E377896489F9AD883E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::OnLoaded_857256B349A5E9E377896489F9AD883E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnLoaded_857256B349A5E9E377896489F9AD883E");

	Params::BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnRep_VisualActorClass
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapObject_CommonDropItem3D_C::OnRep_VisualActorClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnRep_VisualActorClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnSetConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnSetConcreteModel");

	Params::BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_CommonDropItem3D_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReceiveTick");

	Params::BP_MapObject_CommonDropItem3D_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReleaseObject
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ReleaseObject(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReleaseObject");

	Params::BP_MapObject_CommonDropItem3D_C_ReleaseObject Parms{};

	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetItemModelInServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             VisualModel                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetItemModelInServer(TSoftClassPtr<class UClass> VisualModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetItemModelInServer");

	Params::BP_MapObject_CommonDropItem3D_C_SetItemModelInServer Parms{};

	Parms.VisualModel = VisualModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupStaticMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      InStaticMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CenterOfMass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetupStaticMesh(class UStaticMesh* InStaticMesh, const struct FVector& CenterOfMass, class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetupStaticMesh");

	Params::BP_MapObject_CommonDropItem3D_C_SetupStaticMesh Parms{};

	Parms.InStaticMesh = InStaticMesh;
	Parms.CenterOfMass = std::move(CenterOfMass);
	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupVisualInServer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetupVisualInServer(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetupVisualInServer");

	Params::BP_MapObject_CommonDropItem3D_C_SetupVisualInServer Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}

}

