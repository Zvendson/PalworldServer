#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_WeaponFactoryBase_classes.hpp"
#include "PalServer/BP_BuildObject_WeaponFactoryBase_parameters.hpp"


namespace PalServer
{

// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactoryBase_C::ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase");

	Params::BP_BuildObject_WeaponFactoryBase_C_ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_WeaponFactoryBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.WeaponLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactoryBase_C::WeaponLoop(class USceneComponent* Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "WeaponLoop");

	Params::BP_BuildObject_WeaponFactoryBase_C_WeaponLoop Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);
}

}

