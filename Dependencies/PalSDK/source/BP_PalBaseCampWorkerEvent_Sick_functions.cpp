#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalBaseCampWorkerEvent_Sick_classes.hpp"
#include "PalSDK/BP_PalBaseCampWorkerEvent_Sick_parameters.hpp"


namespace PalSDK
{

// Function BP_PalBaseCampWorkerEvent_Sick.BP_PalBaseCampWorkerEvent_Sick_C.CreateNotifyMessageText
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LocalizedFormatText                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_PalBaseCampWorkerEvent_Sick_C::CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBaseCampWorkerEvent_Sick_C", "CreateNotifyMessageText");

	Params::BP_PalBaseCampWorkerEvent_Sick_C_CreateNotifyMessageText Parms{};

	Parms.LocalizedFormatText = std::move(LocalizedFormatText);
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

