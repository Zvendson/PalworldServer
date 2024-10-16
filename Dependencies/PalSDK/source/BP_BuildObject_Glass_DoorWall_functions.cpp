#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Glass_DoorWall_classes.hpp"
#include "PalSDK/BP_BuildObject_Glass_DoorWall_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Glass_DoorWall_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "BP_OnSetConcreteModel");

	Params::BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.CloseDoorAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_Glass_DoorWall_C::CloseDoorAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "CloseDoorAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.ExecuteUbergraph_BP_BuildObject_Glass_DoorWall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Glass_DoorWall_C::ExecuteUbergraph_BP_BuildObject_Glass_DoorWall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "ExecuteUbergraph_BP_BuildObject_Glass_DoorWall");

	Params::BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.OnReadySwitchModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Glass_DoorWall_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "OnReadySwitchModule");

	Params::BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.OnUpdateSwitchState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*        Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Glass_DoorWall_C::OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "OnUpdateSwitchState");

	Params::BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState Parms{};

	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.OpenDoorAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_Glass_DoorWall_C::OpenDoorAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "OpenDoorAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.SetRotateDoor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  RotateAngle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Glass_DoorWall_C::SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "SetRotateDoor");

	Params::BP_BuildObject_Glass_DoorWall_C_SetRotateDoor Parms{};

	Parms.Mesh = Mesh;
	Parms.RotateAngle = RotateAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.タイムライン__FinishedFunc
// (BlueprintEvent)

void ABP_BuildObject_Glass_DoorWall_C::____________________FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "タイムライン__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.タイムライン__UpdateFunc
// (BlueprintEvent)

void ABP_BuildObject_Glass_DoorWall_C::____________________UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "タイムライン__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.GetStaticMeshComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UStaticMeshComponent*>     OutComponents                                          (Parm, OutParm, ContainsInstancedReference)

void ABP_BuildObject_Glass_DoorWall_C::GetStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutComponents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "GetStaticMeshComponents");

	Params::BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponents != nullptr)
		*OutComponents = std::move(Parms.OutComponents);
}


// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.GetStaticMeshInfos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FPalStaticMeshImposterStaticMeshInfo>OutStaticMeshInfo                                      (Parm, OutParm)

void ABP_BuildObject_Glass_DoorWall_C::GetStaticMeshInfos(TArray<struct FPalStaticMeshImposterStaticMeshInfo>* OutStaticMeshInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_DoorWall_C", "GetStaticMeshInfos");

	Params::BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutStaticMeshInfo != nullptr)
		*OutStaticMeshInfo = std::move(Parms.OutStaticMeshInfo);
}

}

