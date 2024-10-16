#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_DungeonEntrance_Base_classes.hpp"
#include "PalSDK/BP_DungeonEntrance_Base_parameters.hpp"


namespace PalSDK
{

// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetInteractWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*                   CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_DungeonEntrance_Base_C::GetInteractWidget(class UPalUserWidget** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonEntrance_Base_C", "GetInteractWidget");

	Params::BP_DungeonEntrance_Base_C_GetInteractWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetWarpPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_DungeonEntrance_Base_C::GetWarpPoint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonEntrance_Base_C", "GetWarpPoint");

	Params::BP_DungeonEntrance_Base_C_GetWarpPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

