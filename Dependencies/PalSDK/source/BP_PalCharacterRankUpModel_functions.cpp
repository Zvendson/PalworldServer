#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalCharacterRankUpModel_classes.hpp"
#include "PalSDK/BP_PalCharacterRankUpModel_parameters.hpp"


namespace PalSDK
{

// Function BP_PalCharacterRankUpModel.BP_PalCharacterRankUpModel_C.IsSelectableSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalCharacterRankUpModel_C::IsSelectableSlot(const class UPalIndividualCharacterSlot* Slot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterRankUpModel_C", "IsSelectableSlot");

	Params::BP_PalCharacterRankUpModel_C_IsSelectableSlot Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

