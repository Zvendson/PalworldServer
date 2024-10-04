#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalBaseCampWorkerEvent_DodgeWork_Short_classes.hpp"
#include "PalServer/BP_PalBaseCampWorkerEvent_DodgeWork_Short_parameters.hpp"


namespace PalServer
{

// Function BP_PalBaseCampWorkerEvent_DodgeWork_Short.BP_PalBaseCampWorkerEvent_DodgeWork_Short_C.CreateNotifyMessageText
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LocalizedFormatText                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C::CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBaseCampWorkerEvent_DodgeWork_Short_C", "CreateNotifyMessageText");

	Params::BP_PalBaseCampWorkerEvent_DodgeWork_Short_C_CreateNotifyMessageText Parms{};

	Parms.LocalizedFormatText = std::move(LocalizedFormatText);
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

