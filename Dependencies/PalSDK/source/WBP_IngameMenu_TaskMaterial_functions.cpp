#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_TaskMaterial_classes.hpp"
#include "PalServer/WBP_IngameMenu_TaskMaterial_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetHIdeWhenZeroFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHideWhenZero                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetHIdeWhenZeroFlag(bool IsHideWhenZero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetHIdeWhenZeroFlag");

	Params::WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag Parms{};

	Parms.IsHideWhenZero = IsHideWhenZero;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   ItemNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   GaugeMaxBorderNum                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetItemNum(int64 ItemNum, int64 GaugeMaxBorderNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetItemNum");

	Params::WBP_IngameMenu_TaskMaterial_C_SetItemNum Parms{};

	Parms.ItemNum = ItemNum;
	Parms.GaugeMaxBorderNum = GaugeMaxBorderNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StaticItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetupTexture(class FName StaticItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetupTexture");

	Params::WBP_IngameMenu_TaskMaterial_C_SetupTexture Parms{};

	Parms.StaticItemId = StaticItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}

