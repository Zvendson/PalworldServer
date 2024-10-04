#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameSmesTop_classes.hpp"
#include "PalServer/WBP_IngameSmesTop_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.AnmEvent_Levelup
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::AnmEvent_Levelup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "AnmEvent_Levelup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.AnmEvent_UpdateTechnologyPoint
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::AnmEvent_UpdateTechnologyPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "AnmEvent_UpdateTechnologyPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.ExecuteUbergraph_WBP_IngameSmesTop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameSmesTop_C::ExecuteUbergraph_WBP_IngameSmesTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "ExecuteUbergraph_WBP_IngameSmesTop");

	Params::WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Finished_1CC36CF5434F95CC47067C9022BCAAAA
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::Finished_1CC36CF5434F95CC47067C9022BCAAAA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "Finished_1CC36CF5434F95CC47067C9022BCAAAA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Finished_5BC595C649AA650883AA559F46C6DEC4
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::Finished_5BC595C649AA650883AA559F46C6DEC4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "Finished_5BC595C649AA650883AA559F46C6DEC4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Finished_619BCE1746569C3505CAB3B66FD0832F
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::Finished_619BCE1746569C3505CAB3B66FD0832F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "Finished_619BCE1746569C3505CAB3B66FD0832F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Finished_A1B7BD03455E913C4335A7BF7BD61956
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::Finished_A1B7BD03455E913C4335A7BF7BD61956()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "Finished_A1B7BD03455E913C4335A7BF7BD61956");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameSmesTop_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.OnPlayerLevelUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DisplayLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameSmesTop_C::OnPlayerLevelUp(int32 DisplayLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "OnPlayerLevelUp");

	Params::WBP_IngameSmesTop_C_OnPlayerLevelUp Parms{};

	Parms.DisplayLevel = DisplayLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.OnUpdateTechnologyPoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TechnologyPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameSmesTop_C::OnUpdateTechnologyPoint(int32 TechnologyPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "OnUpdateTechnologyPoint");

	Params::WBP_IngameSmesTop_C_OnUpdateTechnologyPoint Parms{};

	Parms.TechnologyPoint = TechnologyPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.PlayUnlockedMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RegionId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameSmesTop_C::PlayUnlockedMap(class FName RegionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "PlayUnlockedMap");

	Params::WBP_IngameSmesTop_C_PlayUnlockedMap Parms{};

	Parms.RegionId = RegionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameSmesTop_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameSmesTop_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}

