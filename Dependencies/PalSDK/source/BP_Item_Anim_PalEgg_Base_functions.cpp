#include "PalServer/Basic.hpp"

#include "PalServer/BP_Item_Anim_PalEgg_Base_classes.hpp"
#include "PalServer/BP_Item_Anim_PalEgg_Base_parameters.hpp"


namespace PalServer
{

// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.ExecuteUbergraph_BP_Item_Anim_PalEgg_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Anim_PalEgg_Base_C::ExecuteUbergraph_BP_Item_Anim_PalEgg_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "ExecuteUbergraph_BP_Item_Anim_PalEgg_Base");

	Params::BP_Item_Anim_PalEgg_Base_C_ExecuteUbergraph_BP_Item_Anim_PalEgg_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.GetHatchingTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temperature                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Anim_PalEgg_Base_C::GetHatchingTemperature(int32* Temperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "GetHatchingTemperature");

	Params::BP_Item_Anim_PalEgg_Base_C_GetHatchingTemperature Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Temperature != nullptr)
		*Temperature = Parms.Temperature;
}


// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Item_Anim_PalEgg_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.SetAnimPlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Anim_PalEgg_Base_C::SetAnimPlayState(bool IsPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "SetAnimPlayState");

	Params::BP_Item_Anim_PalEgg_Base_C_SetAnimPlayState Parms{};

	Parms.IsPlay = IsPlay;

	UObject::ProcessEvent(Func, &Parms);
}

}

