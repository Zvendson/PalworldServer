#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_CampLevelUp_classes.hpp"
#include "PalServer/WBP_IngameMenu_CampLevelUp_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ExecuteUbergraph_WBP_IngameMenu_CampLevelUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_CampLevelUp_C::ExecuteUbergraph_WBP_IngameMenu_CampLevelUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "ExecuteUbergraph_WBP_IngameMenu_CampLevelUp");

	Params::WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.Finished_CFA6A904409DD4F86430DFBC13F511B5
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_CampLevelUp_C::Finished_CFA6A904409DD4F86430DFBC13F511B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "Finished_CFA6A904409DD4F86430DFBC13F511B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ShowLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_CampLevelUp_C::ShowLevelUp(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "ShowLevelUp");

	Params::WBP_IngameMenu_CampLevelUp_C_ShowLevelUp Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

