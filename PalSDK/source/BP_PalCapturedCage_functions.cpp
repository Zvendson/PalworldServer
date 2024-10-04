#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalCapturedCage_classes.hpp"
#include "PalServer/BP_PalCapturedCage_parameters.hpp"


namespace PalServer
{

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.CaptureStartFromServerPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::CaptureStartFromServerPlayer(class APalPlayerCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "CaptureStartFromServerPlayer");

	Params::BP_PalCapturedCage_C_CaptureStartFromServerPlayer Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Disable Lock Mesh Outline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::Disable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "Disable Lock Mesh Outline");

	Params::BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline Parms{};

	Parms.Other = Other;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.DoorOpenAnimeLoop
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCapturedCage_C::DoorOpenAnimeLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "DoorOpenAnimeLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Enable Lock Mesh Outline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::Enable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "Enable Lock Mesh Outline");

	Params::BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline Parms{};

	Parms.Other = Other;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.ExecuteUbergraph_BP_PalCapturedCage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "ExecuteUbergraph_BP_PalCapturedCage");

	Params::BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OnCaptured__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PalCapturedCage_C::OnCaptured__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "OnCaptured__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OnFinishRescue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::OnFinishRescue(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "OnFinishRescue");

	Params::BP_PalCapturedCage_C_OnFinishRescue Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OpenDoor
// (BlueprintCallable, BlueprintEvent)

void ABP_PalCapturedCage_C::OpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "OpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.PlayDoorOpenAnime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCapturedCage_C::PlayDoorOpenAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "PlayDoorOpenAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalCapturedCage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.SetupSpawnPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCapturedCage_C::SetupSpawnPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "SetupSpawnPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StartPlayerAnime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::StartPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "StartPlayerAnime");

	Params::BP_PalCapturedCage_C_StartPlayerAnime Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StopPlayerAnime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::StopPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "StopPlayerAnime");

	Params::BP_PalCapturedCage_C_StopPlayerAnime Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetCampSpawnerName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_PalCapturedCage_C::GetCampSpawnerName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "GetCampSpawnerName");

	Params::BP_PalCapturedCage_C_GetCampSpawnerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetIndicatorType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EPalInteractiveObjectIndicatorType      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EPalInteractiveObjectIndicatorType ABP_PalCapturedCage_C::GetIndicatorType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "GetIndicatorType");

	Params::BP_PalCapturedCage_C_GetIndicatorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

