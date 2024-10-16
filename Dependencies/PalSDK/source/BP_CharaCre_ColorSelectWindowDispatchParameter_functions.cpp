#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_CharaCre_ColorSelectWindowDispatchParameter_classes.hpp"
#include "PalSDK/BP_CharaCre_ColorSelectWindowDispatchParameter_parameters.hpp"


namespace PalSDK
{

// Function BP_CharaCre_ColorSelectWindowDispatchParameter.BP_CharaCre_ColorSelectWindowDispatchParameter_C.OnChangedColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharaCre_ColorSelectWindowDispatchParameter_C::OnChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaCre_ColorSelectWindowDispatchParameter_C", "OnChangedColor__DelegateSignature");

	Params::BP_CharaCre_ColorSelectWindowDispatchParameter_C_OnChangedColor__DelegateSignature Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}

