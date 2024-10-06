#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_PalBox_PalDetail_classes.hpp"
#include "PalServer/WBP_IngameMenu_PalBox_PalDetail_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.BindFromHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "BindFromHandle");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Check Valid Work Suitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalWorkSuitability                     InWorkSuitability                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalWorkSuitability                     OutWorkSuitability                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::Check_Valid_Work_Suitability(EPalWorkSuitability InWorkSuitability, bool* IsValid, EPalWorkSuitability* OutWorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Check Valid Work Suitability");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability Parms{};

	Parms.InWorkSuitability = InWorkSuitability;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWorkSuitability != nullptr)
		*OutWorkSuitability = Parms.OutWorkSuitability;
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Set Work Suitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EPalWorkSuitability, int32>        WorkSuitabilities                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameMenu_PalBox_PalDetail_C::Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Set Work Suitability");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability Parms{};

	Parms.WorkSuitabilities = std::move(WorkSuitabilities);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetDetailMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetDetailMode(bool IsTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetDetailMode");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode Parms{};

	Parms.IsTip = IsTip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetElementType(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetElementType");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetElementType Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FoodAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetFoodAmount(int32 FoodAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetFoodAmount");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount Parms{};

	Parms.FoodAmount = FoodAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenderType                          GenderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetGender(EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetGender");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetGender Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     PassiveSkills                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetPassiveSkill");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill Parms{};

	Parms.PassiveSkills = std::move(PassiveSkills);

	UObject::ProcessEvent(Func, &Parms);

	PassiveSkills = std::move(Parms.PassiveSkills);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetRank");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBoss                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRare                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetRarity(bool IsBoss, bool IsRare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetRarity");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetRarity Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetSoulRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::SetSoulRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "SetSoulRank");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Buff Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::Update_Buff_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Update Buff Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Condition Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::Update_Condition_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Update Condition Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Status Parameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::Update_Status_Parameter(class UPalIndividualCharacterParameter* IndividualParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "Update Status Parameter");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter Parms{};

	Parms.IndividualParam = IndividualParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateActiveSkill_Binded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalWazaID>                      ActiveSkills                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateActiveSkill_Binded(TArray<EPalWazaID>& ActiveSkills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateActiveSkill_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded Parms{};

	Parms.ActiveSkills = std::move(ActiveSkills);

	UObject::ProcessEvent(Func, &Parms);

	ActiveSkills = std::move(Parms.ActiveSkills);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateExp_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   OldExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowExpRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateExp_Binded(int64 AddExp, int64 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateExp_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateFavoriteBinded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateFavoriteBinded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateFavoriteBinded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateHP_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateHP_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateHunger_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxHunger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateHunger_Binded(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateHunger_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateLevel_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateLevel_Binded(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateLevel_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateNickName_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateNickName_Binded(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateNickName_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateSanity_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxSanity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateSanity_Binded(double NowSanity, double NowMaxSanity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateSanity_Binded");

	Params::WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateSoulRank_Binded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateSoulRank_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateSoulRank_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateTalentBinded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PalDetail_C::UpdateTalentBinded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PalDetail_C", "UpdateTalentBinded");

	UObject::ProcessEvent(Func, nullptr);
}

}

