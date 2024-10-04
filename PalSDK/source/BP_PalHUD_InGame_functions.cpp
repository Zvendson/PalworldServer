#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalHUD_InGame_classes.hpp"
#include "PalServer/BP_PalHUD_InGame_parameters.hpp"


namespace PalServer
{

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.AsyncLoadAndCreateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             WidgetClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::AsyncLoadAndCreateWidget(TSoftClassPtr<class UClass> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "AsyncLoadAndCreateWidget");

	Params::BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget Parms{};

	Parms.WidgetClass = WidgetClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.AsyncSetupHUDEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::AsyncSetupHUDEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "AsyncSetupHUDEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.BindGameOverUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::BindGameOverUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "BindGameOverUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDyingEndInfo                 DyingEndInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PalHUD_InGame_C::CREATEDELEGATE_PROXYFUNCTION_0(class APalPlayerCharacter* PlayerCharacter, const struct FPalDyingEndInfo& DyingEndInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.DyingEndInfo = std::move(DyingEndInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.DisplayHUD_Respawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::DisplayHUD_Respawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "DisplayHUD_Respawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ExecuteUbergraph_BP_PalHUD_InGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::ExecuteUbergraph_BP_PalHUD_InGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "ExecuteUbergraph_BP_PalHUD_InGame");

	Params::BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideHUD_ForDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::HideHUD_ForDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "HideHUD_ForDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideLiftItemDisplay
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::HideLiftItemDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "HideLiftItemDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.Initialize
// (Event, Public, BlueprintEvent)

void ABP_PalHUD_InGame_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnDyingEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDyingEndInfo                 DyingEndInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalHUD_InGame_C::OnDyingEnd(class APalPlayerCharacter* PlayerCharacter, const struct FPalDyingEndInfo& DyingEndInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnDyingEnd");

	Params::BP_PalHUD_InGame_C_OnDyingEnd Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.DyingEndInfo = std::move(DyingEndInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_01D7FBF3483366434C8293A197BFD965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::OnLoaded_01D7FBF3483366434C8293A197BFD965(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnLoaded_01D7FBF3483366434C8293A197BFD965");

	Params::BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_39EEADC54AE57646EA72A79D911211B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::OnLoaded_39EEADC54AE57646EA72A79D911211B6(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnLoaded_39EEADC54AE57646EA72A79D911211B6");

	Params::BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_EF35A3894C280426B58FA0A0D5280930
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::OnLoaded_EF35A3894C280426B58FA0A0D5280930(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnLoaded_EF35A3894C280426B58FA0A0D5280930");

	Params::BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnRespawnPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::OnRespawnPlayer(class APalPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnRespawnPlayer");

	Params::BP_PalHUD_InGame_C_OnRespawnPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnUpdateLiftSlot
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::OnUpdateLiftSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "OnUpdateLiftSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "ReceiveDrawHUD");

	Params::BP_PalHUD_InGame_C_ReceiveDrawHUD Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "ReceiveEndPlay");

	Params::BP_PalHUD_InGame_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUD_InGame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "ReceiveTick");

	Params::BP_PalHUD_InGame_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.Setup Lift Item Event
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::Setup_Lift_Item_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "Setup Lift Item Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.SetupHUD_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::SetupHUD_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "SetupHUD_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ShowLiftItemDisplay
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::ShowLiftItemDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "ShowLiftItemDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.UpdateWorldHUDs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalHUD_InGame_C::UpdateWorldHUDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalHUD_InGame_C", "UpdateWorldHUDs");

	UObject::ProcessEvent(Func, nullptr);
}

}

