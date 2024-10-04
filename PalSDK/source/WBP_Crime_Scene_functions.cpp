#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Crime_Scene_classes.hpp"
#include "PalServer/WBP_Crime_Scene_parameters.hpp"


namespace PalServer
{

// Function WBP_Crime_Scene.WBP_Crime_Scene_C.ExecuteUbergraph_WBP_Crime_Scene
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_Scene_C::ExecuteUbergraph_WBP_Crime_Scene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "ExecuteUbergraph_WBP_Crime_Scene");

	Params::WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crime_Scene_C::Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.Finished_F33B774D46BB4A7E03FF64B35586069D
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crime_Scene_C::Finished_F33B774D46BB4A7E03FF64B35586069D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "Finished_F33B774D46BB4A7E03FF64B35586069D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.SetCrimeSceneEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_Scene_C::SetCrimeSceneEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "SetCrimeSceneEnable");

	Params::WBP_Crime_Scene_C_SetCrimeSceneEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

