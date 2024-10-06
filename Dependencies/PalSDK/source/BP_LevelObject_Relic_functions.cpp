#include "PalServer/Basic.hpp"

#include "PalServer/BP_LevelObject_Relic_classes.hpp"
#include "PalServer/BP_LevelObject_Relic_parameters.hpp"


namespace PalServer
{

// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.ExecuteUbergraph_BP_LevelObject_Relic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::ExecuteUbergraph_BP_LevelObject_Relic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "ExecuteUbergraph_BP_LevelObject_Relic");

	Params::BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.OnUpdatePickupStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectObtainable*        LevelObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "OnUpdatePickupStatus");

	Params::BP_LevelObject_Relic_C_OnUpdatePickupStatus Parms{};

	Parms.LevelObject = LevelObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LevelObject_Relic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.SetActiveSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectObtainable*        LevelObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::SetActiveSelf(class APalLevelObjectObtainable* LevelObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "SetActiveSelf");

	Params::BP_LevelObject_Relic_C_SetActiveSelf Parms{};

	Parms.LevelObject = LevelObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.GetObtainFXLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_LevelObject_Relic_C::GetObtainFXLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "GetObtainFXLocation");

	Params::BP_LevelObject_Relic_C_GetObtainFXLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

