#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalTextBlock_classes.hpp"
#include "PalSDK/BP_PalTextBlock_parameters.hpp"


namespace PalSDK
{

// Function BP_PalTextBlock.BP_PalTextBlock_C.BP_ReflectText
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalTextBlock_C::BP_ReflectText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalTextBlock_C", "BP_ReflectText");

	Params::BP_PalTextBlock_C_BP_ReflectText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

