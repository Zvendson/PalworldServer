#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Map_IconPlayer_classes.hpp"
#include "PalSDK/WBP_Map_IconPlayer_parameters.hpp"


namespace PalSDK
{

// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconPlayer_C::BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Map_IconPlayer_C_BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconPlayer_C::BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Map_IconPlayer_C_BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.ExecuteUbergraph_WBP_Map_IconPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconPlayer_C::ExecuteUbergraph_WBP_Map_IconPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "ExecuteUbergraph_WBP_Map_IconPlayer");

	Params::WBP_Map_IconPlayer_C_ExecuteUbergraph_WBP_Map_IconPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.GetLocationPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          LocationPosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconPlayer_C::GetLocationPosition(struct FVector* LocationPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "GetLocationPosition");

	Params::WBP_Map_IconPlayer_C_GetLocationPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocationPosition != nullptr)
		*LocationPosition = std::move(Parms.LocationPosition);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.SetIsLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLocal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconPlayer_C::SetIsLocalPlayer(bool IsLocal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "SetIsLocalPlayer");

	Params::WBP_Map_IconPlayer_C_SetIsLocalPlayer Parms{};

	Parms.IsLocal = IsLocal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.SetPlayerStateMapInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerInfoForMap             MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Map_IconPlayer_C::SetPlayerStateMapInfo(const struct FPalPlayerInfoForMap& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "SetPlayerStateMapInfo");

	Params::WBP_Map_IconPlayer_C_SetPlayerStateMapInfo Parms{};

	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconPlayer.WBP_Map_IconPlayer_C.UpdateMapInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerInfoForMap             MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Map_IconPlayer_C::UpdateMapInfo(const struct FPalPlayerInfoForMap& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconPlayer_C", "UpdateMapInfo");

	Params::WBP_Map_IconPlayer_C_UpdateMapInfo Parms{};

	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

