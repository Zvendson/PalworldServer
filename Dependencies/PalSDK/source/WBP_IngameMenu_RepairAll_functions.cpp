#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenu_RepairAll_classes.hpp"
#include "PalSDK/WBP_IngameMenu_RepairAll_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_RepairAll_C::BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_RepairAll_C::BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_RepairAll_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.ExecuteUbergraph_WBP_IngameMenu_RepairAll
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_RepairAll_C::ExecuteUbergraph_WBP_IngameMenu_RepairAll(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "ExecuteUbergraph_WBP_IngameMenu_RepairAll");

	Params::WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          FocusTarget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_RepairAll_C::GetFocusTarget(class UWidget** FocusTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "GetFocusTarget");

	Params::WBP_IngameMenu_RepairAll_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FocusTarget != nullptr)
		*FocusTarget = Parms.FocusTarget;
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsYes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_RepairAll_C::OnClickedButton__DelegateSignature(bool IsYes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "OnClickedButton__DelegateSignature");

	Params::WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature Parms{};

	Parms.IsYes = IsYes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalItemSlot*>             TargetItemSlots                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FPalStaticItemIdAndNum>   RequireMaterials                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_RepairAll_C::Setup(TArray<class UPalItemSlot*>& TargetItemSlots, TArray<struct FPalStaticItemIdAndNum>& RequireMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_RepairAll_C", "Setup");

	Params::WBP_IngameMenu_RepairAll_C_Setup Parms{};

	Parms.TargetItemSlots = std::move(TargetItemSlots);
	Parms.RequireMaterials = std::move(RequireMaterials);

	UObject::ProcessEvent(Func, &Parms);

	TargetItemSlots = std::move(Parms.TargetItemSlots);
	RequireMaterials = std::move(Parms.RequireMaterials);
}

}

