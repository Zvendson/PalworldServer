#include "PalServer/Basic.hpp"

#include "PalServer/BP_DungeonFixedEntrance_classes.hpp"
#include "PalServer/BP_DungeonFixedEntrance_parameters.hpp"


namespace PalServer
{

// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetInteractWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*                   CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_DungeonFixedEntrance_C::GetInteractWidget(class UPalUserWidget** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonFixedEntrance_C", "GetInteractWidget");

	Params::BP_DungeonFixedEntrance_C_GetInteractWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetDeadItemDropPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_DungeonFixedEntrance_C::GetDeadItemDropPoint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonFixedEntrance_C", "GetDeadItemDropPoint");

	Params::BP_DungeonFixedEntrance_C_GetDeadItemDropPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetWarpPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_DungeonFixedEntrance_C::GetWarpPoint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonFixedEntrance_C", "GetWarpPoint");

	Params::BP_DungeonFixedEntrance_C_GetWarpPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

