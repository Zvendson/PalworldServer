#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCommonItemSlot_classes.hpp"
#include "PalSDK/WBP_PalCommonItemSlot_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.ExecuteUbergraph_WBP_PalCommonItemSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlot_C::ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "ExecuteUbergraph_WBP_PalCommonItemSlot");

	Params::WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnAfterSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlot_C::OnAfterSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnAfterSetEmpty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnAfterUpdateSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlot_C::OnAfterUpdateSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnAfterUpdateSlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonItemSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnSetEmpty_Binded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlot_C::OnSetEmpty_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnSetEmpty_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnSetValidSlot_Binded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlot_C::OnSetValidSlot_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnSetValidSlot_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnUpdateSlot_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     TargetSlot_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlot_C::OnUpdateSlot_Binded(class UPalItemSlot* TargetSlot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnUpdateSlot_Binded");

	Params::WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded Parms{};

	Parms.TargetSlot_0 = TargetSlot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*           IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlot_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "RegisterItemIconWidget");

	Params::WBP_PalCommonItemSlot_C_RegisterItemIconWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}

}

