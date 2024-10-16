#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalPlayerController_classes.hpp"
#include "PalSDK/BP_PalPlayerController_parameters.hpp"


namespace PalSDK
{

// Function BP_PalPlayerController.BP_PalPlayerController_C.ActivateCurrentOtomoNearThePlayer
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::ActivateCurrentOtomoNearThePlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ActivateCurrentOtomoNearThePlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ActivateCurrentOtomoNearThePlayer_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::ActivateCurrentOtomoNearThePlayer_ToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ActivateCurrentOtomoNearThePlayer_ToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.BndEvt__BP_PalPlayerController_BP_OtomoPalHolderComponent_K2Node_ComponentBoundEvent_0_OnCreatedCharacterContainer__DelegateSignature
// (BlueprintEvent)

void ABP_PalPlayerController_C::BndEvt__BP_PalPlayerController_BP_OtomoPalHolderComponent_K2Node_ComponentBoundEvent_0_OnCreatedCharacterContainer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "BndEvt__BP_PalPlayerController_BP_OtomoPalHolderComponent_K2Node_ComponentBoundEvent_0_OnCreatedCharacterContainer__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CanRideSupportPal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanRide                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::CanRideSupportPal(bool* CanRide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CanRideSupportPal");

	Params::BP_PalPlayerController_C_CanRideSupportPal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRide != nullptr)
		*CanRide = Parms.CanRide;
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeMoveRate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ChangeMoveRate(double Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ChangeMoveRate");

	Params::BP_PalPlayerController_C_ChangeMoveRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeMoveSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::ChangeMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ChangeMoveSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeTargetPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddPlayerIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ChangeTargetPlayer(int32 AddPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ChangeTargetPlayer");

	Params::BP_PalPlayerController_C_ChangeTargetPlayer Parms{};

	Parms.AddPlayerIndex = AddPlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CreatedOtomoIndividualHandleCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::CreatedOtomoIndividualHandleCallback(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CreatedOtomoIndividualHandleCallback");

	Params::BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsClientPlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::CreateOtomo(bool IsClientPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CreateOtomo");

	Params::BP_PalPlayerController_C_CreateOtomo Parms{};

	Parms.IsClientPlayer = IsClientPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoByNameList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalDebugOtomoPalInfo>    OtomoInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PalPlayerController_C::CreateOtomoByNameList(TArray<struct FPalDebugOtomoPalInfo>& OtomoInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CreateOtomoByNameList");

	Params::BP_PalPlayerController_C_CreateOtomoByNameList Parms{};

	Parms.OtomoInfo = std::move(OtomoInfo);

	UObject::ProcessEvent(Func, &Parms);

	OtomoInfo = std::move(Parms.OtomoInfo);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoByNameListToServer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalDebugOtomoPalInfo>    OtomoInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PalPlayerController_C::CreateOtomoByNameListToServer(const TArray<struct FPalDebugOtomoPalInfo>& OtomoInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CreateOtomoByNameListToServer");

	Params::BP_PalPlayerController_C_CreateOtomoByNameListToServer Parms{};

	Parms.OtomoInfo = std::move(OtomoInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsClientServer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::CreateOtomoToServer(bool IsClientServer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "CreateOtomoToServer");

	Params::BP_PalPlayerController_C_CreateOtomoToServer Parms{};

	Parms.IsClientServer = IsClientServer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.DecrementSelectOtomo_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::DecrementSelectOtomo_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "DecrementSelectOtomo_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.DoStep
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPalStepAxisType                        Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        StepDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::DoStep(EPalStepAxisType Axis, const struct FVector2D& StepDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "DoStep");

	Params::BP_PalPlayerController_C_DoStep Parms{};

	Parms.Axis = Axis;
	Parms.StepDirection = std::move(StepDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.EndCoopRequestToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::EndCoopRequestToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "EndCoopRequestToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ExecuteUbergraph_BP_PalPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ExecuteUbergraph_BP_PalPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ExecuteUbergraph_BP_PalPlayerController");

	Params::BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.GetOffSupportPal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::GetOffSupportPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "GetOffSupportPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.GetSpectator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSpectatorMode                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::GetSpectator(bool* bSpectatorMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "GetSpectator");

	Params::BP_PalPlayerController_C_GetSpectator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSpectatorMode != nullptr)
		*bSpectatorMode = Parms.bSpectatorMode;
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.GetTimerGaugeWidgetClass
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalUserWidgetTimerGaugeBase>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UPalUserWidgetTimerGaugeBase> ABP_PalPlayerController_C::GetTimerGaugeWidgetClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "GetTimerGaugeWidgetClass");

	Params::BP_PalPlayerController_C_GetTimerGaugeWidgetClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InactiveOtomo
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::InactiveOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InactiveOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InactiveOtomoToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::InactiveOtomoToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InactiveOtomoToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.IncrementSelectOtomo_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::IncrementSelectOtomo_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "IncrementSelectOtomo_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_End_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_End_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_End_K2Node_InputKeyEvent_5");

	Params::BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Left_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_Left_K2Node_InputKeyEvent_4");

	Params::BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_LeftControl_K2Node_InputKeyEvent_6");

	Params::BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_LeftShift_K2Node_InputKeyEvent_7");

	Params::BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_PageDown_K2Node_InputKeyEvent_1");

	Params::BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_PageUp_K2Node_InputKeyEvent_2");

	Params::BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Right_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_Right_K2Node_InputKeyEvent_3");

	Params::BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_RightControl_K2Node_InputKeyEvent_9");

	Params::BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_RightShift_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_RightShift_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_RightShift_K2Node_InputKeyEvent_8");

	Params::BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Up_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::InpActEvt_Up_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "InpActEvt_Up_K2Node_InputKeyEvent_0");

	Params::BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.LoadAndSpawnEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>    EffectPath                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::LoadAndSpawnEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "LoadAndSpawnEffect");

	Params::BP_PalPlayerController_C_LoadAndSpawnEffect Parms{};

	Parms.EffectPath = EffectPath;
	Parms.SpawnTransform = std::move(SpawnTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.NotifyChangeTargetPlayerForClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TargetPlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   MaxPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::NotifyChangeTargetPlayerForClient(const class FString& TargetPlayerName, int32 MaxPlayer, int32 SelectPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "NotifyChangeTargetPlayerForClient");

	Params::BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient Parms{};

	Parms.TargetPlayerName = std::move(TargetPlayerName);
	Parms.MaxPlayer = MaxPlayer;
	Parms.SelectPlayer = SelectPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.NotifyTracking
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::NotifyTracking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "NotifyTracking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnCompleteSpawnSupportPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalPlayerController_C::OnCompleteSpawnSupportPal(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnCompleteSpawnSupportPal");

	Params::BP_PalPlayerController_C_OnCompleteSpawnSupportPal Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnDamagePlayerToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_PalPlayerController_C::OnDamagePlayerToPlayer(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnDamagePlayerToPlayer");

	Params::BP_PalPlayerController_C_OnDamagePlayerToPlayer Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnDecrementedOtomo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnDecrementedOtomo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnDecrementedOtomo__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnEndCoopRequest
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnEndCoopRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnEndCoopRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnFlyRideTakeOff
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnFlyRideTakeOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnFlyRideTakeOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnGetOffAndDespawnSupportPal
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnGetOffAndDespawnSupportPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnGetOffAndDespawnSupportPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnIncrementedOtomo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnIncrementedOtomo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnIncrementedOtomo__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnInitializeLocalPlayer_BP
// (Event, Public, BlueprintEvent)

void ABP_PalPlayerController_C::OnInitializeLocalPlayer_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnInitializeLocalPlayer_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnLoaded_A1A0202B475755BD73ED5998057E907E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::OnLoaded_A1A0202B475755BD73ED5998057E907E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnLoaded_A1A0202B475755BD73ED5998057E907E");

	Params::BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnLoaded_A49E2184416F26810394CD8D2FEDE763
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::OnLoaded_A49E2184416F26810394CD8D2FEDE763(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnLoaded_A49E2184416F26810394CD8D2FEDE763");

	Params::BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnOtomoChangeDecrement
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnOtomoChangeDecrement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnOtomoChangeDecrement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnOtomoChangeDecrementToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnOtomoChangeDecrementToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnOtomoChangeDecrementToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnOtomoChangeIncrement
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnOtomoChangeIncrement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnOtomoChangeIncrement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnOtomoChangeIncrementToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnOtomoChangeIncrementToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnOtomoChangeIncrementToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnRep_SpectatorSpeedRate
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnRep_SpectatorSpeedRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnRep_SpectatorSpeedRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnSpawnAndRideSupportPal
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnSpawnAndRideSupportPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnSpawnAndRideSupportPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnStartCoopRequest
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnStartCoopRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnStartCoopRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnSwitchOtomoSpawn
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::OnSwitchOtomoSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnSwitchOtomoSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.OnSwitchOtomoSpawnToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::OnSwitchOtomoSpawnToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "OnSwitchOtomoSpawnToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.PlayStepAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalStepAxisType                        Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::PlayStepAction(EPalStepAxisType Axis, const struct FVector2D& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "PlayStepAction");

	Params::BP_PalPlayerController_C_PlayStepAction Parms{};

	Parms.Axis = Axis;
	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ReceiveEndPlay");

	Params::BP_PalPlayerController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ReceivePossess");

	Params::BP_PalPlayerController_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ReceiveTick");

	Params::BP_PalPlayerController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.Regene_CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::Regene_CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "Regene_CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.RequestCaptureCagePal_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCapturedCage_C*            Cage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::RequestCaptureCagePal_ToServer(class ABP_PalCapturedCage_C* Cage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "RequestCaptureCagePal_ToServer");

	Params::BP_PalPlayerController_C_RequestCaptureCagePal_ToServer Parms{};

	Parms.Cage = Cage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.ResetMoveRate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::ResetMoveRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "ResetMoveRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.RideSupportPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::RideSupportPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "RideSupportPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SetOtomoSlot
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   SlotID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::SetOtomoSlot(int32 SlotID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SetOtomoSlot");

	Params::BP_PalPlayerController_C_SetOtomoSlot Parms{};

	Parms.SlotID = SlotID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SetSlotID_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::SetSlotID_ToServer(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SetSlotID_ToServer");

	Params::BP_PalPlayerController_C_SetSlotID_ToServer Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SetupDamageReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::SetupDamageReaction(class APawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SetupDamageReaction");

	Params::BP_PalPlayerController_C_SetupDamageReaction Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SetupSupportPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            PossessPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::SetupSupportPal(class APawn* PossessPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SetupSupportPal");

	Params::BP_PalPlayerController_C_SetupSupportPal Parms{};

	Parms.PossessPawn = PossessPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SpawnSupportPal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::SpawnSupportPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SpawnSupportPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.StartCoopRequestToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::StartCoopRequestToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "StartCoopRequestToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.SwitchTracking
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PalPlayerController_C::SwitchTracking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "SwitchTracking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalPlayerController.BP_PalPlayerController_C.Warp Spectator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Move                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerController_C::Warp_Spectator(const struct FVector& Move)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerController_C", "Warp Spectator");

	Params::BP_PalPlayerController_C_Warp_Spectator Parms{};

	Parms.Move = std::move(Move);

	UObject::ProcessEvent(Func, &Parms);
}

}

