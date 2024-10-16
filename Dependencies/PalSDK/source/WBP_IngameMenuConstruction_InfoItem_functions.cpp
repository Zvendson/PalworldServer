#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenuConstruction_InfoItem_classes.hpp"
#include "PalSDK/WBP_IngameMenuConstruction_InfoItem_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenuConstruction_InfoItem.WBP_IngameMenuConstruction_InfoItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NeedNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HasNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_InfoItem_C::Setup(class FName ID, int32 NeedNum, int32 HasNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_InfoItem_C", "Setup");

	Params::WBP_IngameMenuConstruction_InfoItem_C_Setup Parms{};

	Parms.ID = ID;
	Parms.NeedNum = NeedNum;
	Parms.HasNum = HasNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

