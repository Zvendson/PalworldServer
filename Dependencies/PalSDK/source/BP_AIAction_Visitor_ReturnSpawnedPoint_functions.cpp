#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_Visitor_ReturnSpawnedPoint_classes.hpp"
#include "PalServer/BP_AIAction_Visitor_ReturnSpawnedPoint_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_ReturnSpawnedPoint_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_ReturnSpawnedPoint_C", "ActionStart");

	Params::BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_ReturnSpawnedPoint_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_ReturnSpawnedPoint_C", "ActionTick");

	Params::BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_ReturnSpawnedPoint_C::ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_ReturnSpawnedPoint_C", "ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint");

	Params::BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.カスタムイベント
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalVisualEffectBase*             VisualEffect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_ReturnSpawnedPoint_C::________________________(class UPalVisualEffectBase* VisualEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_ReturnSpawnedPoint_C", "カスタムイベント");

	Params::BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________ Parms{};

	Parms.VisualEffect = VisualEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AIAction_Visitor_ReturnSpawnedPoint_C::_________________________0(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_ReturnSpawnedPoint_C", "カスタムイベント_0");

	Params::BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0 Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}

}

