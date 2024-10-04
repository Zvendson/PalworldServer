#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_MissionLevelEffect_classes.hpp"
#include "PalServer/WBP_IngameMenu_MissionLevelEffect_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_MissionLevelEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionLevelEffect_C::ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect");

	Params::WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.SetEffectInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AftCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanLevelup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionLevelEffect_C::SetEffectInfo(int32 PreCount, int32 AftCount, bool IsMax, bool CanLevelup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "SetEffectInfo");

	Params::WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo Parms{};

	Parms.PreCount = PreCount;
	Parms.AftCount = AftCount;
	Parms.IsMax = IsMax;
	Parms.CanLevelup = CanLevelup;

	UObject::ProcessEvent(Func, &Parms);
}

}

