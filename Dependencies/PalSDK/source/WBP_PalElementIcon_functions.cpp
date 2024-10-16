#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalElementIcon_classes.hpp"
#include "PalSDK/WBP_PalElementIcon_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalElementIcon.WBP_PalElementIcon_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalElementIcon_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalElementIcon_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalElementIcon.WBP_PalElementIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalElementIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalElementIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalElementIcon.WBP_PalElementIcon_C.ExecuteUbergraph_WBP_PalElementIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalElementIcon_C::ExecuteUbergraph_WBP_PalElementIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalElementIcon_C", "ExecuteUbergraph_WBP_PalElementIcon");

	Params::WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalElementIcon.WBP_PalElementIcon_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalElementIcon_C::SetElement(EPalElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalElementIcon_C", "SetElement");

	Params::WBP_PalElementIcon_C_SetElement Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}

}

