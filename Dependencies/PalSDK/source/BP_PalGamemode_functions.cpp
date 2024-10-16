#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalGamemode_classes.hpp"
#include "PalSDK/BP_PalGamemode_parameters.hpp"


namespace PalSDK
{

// Function BP_PalGamemode.BP_PalGamemode_C.BindFunction_InvaderManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(const struct FTransform& Transform)>Spawn_Dummy_Nav_Invoker_Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalGamemode_C::BindFunction_InvaderManager(TDelegate<void(const struct FTransform& Transform)> Spawn_Dummy_Nav_Invoker_Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "BindFunction_InvaderManager");

	Params::BP_PalGamemode_C_BindFunction_InvaderManager Parms{};

	Parms.Spawn_Dummy_Nav_Invoker_Delegate = Spawn_Dummy_Nav_Invoker_Delegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGamemode.BP_PalGamemode_C.ChoosePlayerStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_PalGamemode_C::ChoosePlayerStart(class AController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "ChoosePlayerStart");

	Params::BP_PalGamemode_C_ChoosePlayerStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalGamemode.BP_PalGamemode_C.ExecuteUbergraph_BP_PalGamemode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalGamemode_C::ExecuteUbergraph_BP_PalGamemode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "ExecuteUbergraph_BP_PalGamemode");

	Params::BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGamemode.BP_PalGamemode_C.InpActEvt_DebugWindow_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalGamemode_C::InpActEvt_DebugWindow_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "InpActEvt_DebugWindow_K2Node_InputActionEvent_0");

	Params::BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGamemode.BP_PalGamemode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalGamemode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGamemode.BP_PalGamemode_C.SpawmDummyNavInvoker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_PalGamemode_C::SpawmDummyNavInvoker(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "SpawmDummyNavInvoker");

	Params::BP_PalGamemode_C_SpawmDummyNavInvoker Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalGamemode.BP_PalGamemode_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SoundRadius                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EmitLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Emitter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalGamemode_C::_________________________0(int32 SoundRadius, const struct FVector& EmitLocation, class AActor* Emitter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGamemode_C", "カスタムイベント_0");

	Params::BP_PalGamemode_C__________________________0 Parms{};

	Parms.SoundRadius = SoundRadius;
	Parms.EmitLocation = std::move(EmitLocation);
	Parms.Emitter = Emitter;

	UObject::ProcessEvent(Func, &Parms);
}

}

