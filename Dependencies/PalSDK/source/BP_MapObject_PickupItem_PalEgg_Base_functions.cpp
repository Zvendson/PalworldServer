#include "PalServer/Basic.hpp"

#include "PalServer/BP_MapObject_PickupItem_PalEgg_Base_classes.hpp"
#include "PalServer/BP_MapObject_PickupItem_PalEgg_Base_parameters.hpp"


namespace PalServer
{

// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_PickupItem_PalEgg_Base_C::ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_PalEgg_Base_C", "ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base");

	Params::BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.GetPalEggScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   PalRarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  PalEggScale                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_PickupItem_PalEgg_Base_C::GetPalEggScale(int32 PalRarity, double* PalEggScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_PalEgg_Base_C", "GetPalEggScale");

	Params::BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale Parms{};

	Parms.PalRarity = PalRarity;

	UObject::ProcessEvent(Func, &Parms);

	if (PalEggScale != nullptr)
		*PalEggScale = Parms.PalEggScale;
}


// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.OnRep_Scale
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapObject_PickupItem_PalEgg_Base_C::OnRep_Scale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_PalEgg_Base_C", "OnRep_Scale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_PickupItem_PalEgg_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_PalEgg_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.SetupPalEggScale
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapObject_PickupItem_PalEgg_Base_C::SetupPalEggScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_PalEgg_Base_C", "SetupPalEggScale");

	UObject::ProcessEvent(Func, nullptr);
}

}

