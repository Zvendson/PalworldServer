#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalSkill_KeyGuide_classes.hpp"
#include "PalServer/WBP_PalSkill_KeyGuide_parameters.hpp"


namespace PalServer
{

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.EndAim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::EndAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "EndAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.ExecuteUbergraph_WBP_PalSkill_KeyGuide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkill_KeyGuide_C::ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "ExecuteUbergraph_WBP_PalSkill_KeyGuide");

	Params::WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.GetRideCharacterParameter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParameter                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkill_KeyGuide_C::GetRideCharacterParameter(class UPalIndividualCharacterParameter** IndividualParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "GetRideCharacterParameter");

	Params::WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IndividualParameter != nullptr)
		*IndividualParameter = Parms.IndividualParameter;
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnGetOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkill_KeyGuide_C::OnGetOff(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "OnGetOff");

	Params::WBP_PalSkill_KeyGuide_C_OnGetOff Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnRide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkill_KeyGuide_C::OnRide(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "OnRide");

	Params::WBP_PalSkill_KeyGuide_C_OnRide Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnUpdateEquipWaza
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParameter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkill_KeyGuide_C::OnUpdateEquipWaza(class UPalIndividualCharacterParameter* IndividualParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "OnUpdateEquipWaza");

	Params::WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza Parms{};

	Parms.IndividualParameter = IndividualParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.StartAim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::StartAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "StartAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.UpdateSkillInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalSkill_KeyGuide_C::UpdateSkillInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkill_KeyGuide_C", "UpdateSkillInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}

