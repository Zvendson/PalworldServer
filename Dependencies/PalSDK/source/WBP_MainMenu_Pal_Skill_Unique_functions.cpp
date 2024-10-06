#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MainMenu_Pal_Skill_Unique_classes.hpp"
#include "PalServer/WBP_MainMenu_Pal_Skill_Unique_parameters.hpp"


namespace PalServer
{

// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupBySaveParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ShowLv                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Unique_C::SetupBySaveParameter(const struct FPalIndividualCharacterSaveParameter& Parameter, bool ShowLv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Unique_C", "SetupBySaveParameter");

	Params::WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter Parms{};

	Parms.Parameter = std::move(Parameter);
	Parms.ShowLv = ShowLv;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Unique_C::SetupFromHandle(class UPalIndividualCharacterHandle* IndividualHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Unique_C", "SetupFromHandle");

	Params::WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle Parms{};

	Parms.IndividualHandle = IndividualHandle;

	UObject::ProcessEvent(Func, &Parms);
}

}

