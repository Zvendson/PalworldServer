#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_LevelObject_TowerFastTravelPoint_classes.hpp"
#include "PalSDK/BP_LevelObject_TowerFastTravelPoint_parameters.hpp"


namespace PalSDK
{

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.CheckUnuseFastTravel
// (BlueprintCallable, BlueprintEvent)

void ABP_LevelObject_TowerFastTravelPoint_C::CheckUnuseFastTravel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "CheckUnuseFastTravel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_TowerFastTravelPoint_C::ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint");

	Params::BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.GetUnlockAkAudioEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAkAudioEvent* ABP_LevelObject_TowerFastTravelPoint_C::GetUnlockAkAudioEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "GetUnlockAkAudioEvent");

	Params::BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnChangeWorldSettings
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings          PrevSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalOptionWorldSettings          NewSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_LevelObject_TowerFastTravelPoint_C::OnChangeWorldSettings(const struct FPalOptionWorldSettings& PrevSettings, const struct FPalOptionWorldSettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnChangeWorldSettings");

	Params::BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings Parms{};

	Parms.PrevSettings = std::move(PrevSettings);
	Parms.NewSettings = std::move(NewSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnGetAkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_LevelObject_TowerFastTravelPoint_C::OnGetAkComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnGetAkComponent");

	Params::BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectUnlockableFastTravelPoint*Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_TowerFastTravelPoint_C::OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnUpdateUnlockState");

	Params::BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUnlocked_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSpawnUnlockefFlashEffect                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_TowerFastTravelPoint_C::OnUpdateUnlockState_Internal(bool IsUnlocked_0, bool IsSpawnUnlockefFlashEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnUpdateUnlockState_Internal");

	Params::BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal Parms{};

	Parms.IsUnlocked_0 = IsUnlocked_0;
	Parms.IsSpawnUnlockefFlashEffect = IsSpawnUnlockefFlashEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LevelObject_TowerFastTravelPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

