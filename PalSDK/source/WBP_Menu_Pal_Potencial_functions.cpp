#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Menu_Pal_Potencial_classes.hpp"
#include "PalServer/WBP_Menu_Pal_Potencial_parameters.hpp"


namespace PalServer
{

// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.GetRankText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TalentValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RankText                                               (Parm, OutParm)

void UWBP_Menu_Pal_Potencial_C::GetRankText(int32 TalentValue, class FText* RankText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "GetRankText");

	Params::WBP_Menu_Pal_Potencial_C_GetRankText Parms{};

	Parms.TalentValue = TalentValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RankText != nullptr)
		*RankText = std::move(Parms.RankText);
}


// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Talent_HP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Talent_Attack                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Talent_Defense                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Pal_Potencial_C::SetupByNum(int32 Talent_HP, int32 Talent_Attack, int32 Talent_Defense)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "SetupByNum");

	Params::WBP_Menu_Pal_Potencial_C_SetupByNum Parms{};

	Parms.Talent_HP = Talent_HP;
	Parms.Talent_Attack = Talent_Attack;
	Parms.Talent_Defense = Talent_Defense;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* TargetParameter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Pal_Potencial_C::SetupByParameter(class UPalIndividualCharacterParameter* TargetParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "SetupByParameter");

	Params::WBP_Menu_Pal_Potencial_C_SetupByParameter Parms{};

	Parms.TargetParameter = TargetParameter;

	UObject::ProcessEvent(Func, &Parms);
}

}

