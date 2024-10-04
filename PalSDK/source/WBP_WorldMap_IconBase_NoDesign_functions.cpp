#include "PalServer/Basic.hpp"

#include "PalServer/WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "PalServer/WBP_WorldMap_IconBase_NoDesign_parameters.hpp"


namespace PalServer
{

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ClickEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldMap_IconBase_NoDesign_C::ClickEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "ClickEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldMap_IconBase_NoDesign_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign");

	Params::WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetIsHiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Hiding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::GetIsHiding(bool* Hiding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetIsHiding");

	Params::WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hiding != nullptr)
		*Hiding = Parms.Hiding;
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalLocationPoint*                LocationPoint                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::GetLocationPoint(class UPalLocationPoint** LocationPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetLocationPoint");

	Params::WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocationPoint != nullptr)
		*LocationPoint = Parms.LocationPoint;
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          LocationPosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::GetLocationPosition(struct FVector* LocationPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetLocationPosition");

	Params::WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocationPosition != nullptr)
		*LocationPosition = std::move(Parms.LocationPosition);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void UWBP_WorldMap_IconBase_NoDesign_C::GetText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetText");

	Params::WBP_WorldMap_IconBase_NoDesign_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.IsIgnoreMask
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsIgnore                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::IsIgnoreMask(bool* IsIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "IsIgnoreMask");

	Params::WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsIgnore != nullptr)
		*IsIgnore = Parms.IsIgnore;
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnClicked__DelegateSignature");

	Params::WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldMap_IconBase_NoDesign_C::OnClicked_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnClicked_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnHovered__DelegateSignature");

	Params::WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnUnhovered__DelegateSignature");

	Params::WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "SetEnable");

	Params::WBP_WorldMap_IconBase_NoDesign_C_SetEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetIgnoreMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsIgnore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::SetIgnoreMask(bool IsIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "SetIgnoreMask");

	Params::WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask Parms{};

	Parms.IsIgnore = IsIgnore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetIsHiding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hiding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::SetIsHiding(bool Hiding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "SetIsHiding");

	Params::WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding Parms{};

	Parms.Hiding = Hiding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*                LocationPoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            LocationId_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::Setup(class UPalLocationPoint* LocationPoint, const struct FGuid& LocationId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Setup");

	Params::WBP_WorldMap_IconBase_NoDesign_C_Setup Parms{};

	Parms.LocationPoint = LocationPoint;
	Parms.LocationId_0 = std::move(LocationId_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup_Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*                LocationPoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::Setup_Internal(class UPalLocationPoint* LocationPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Setup_Internal");

	Params::WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal Parms{};

	Parms.LocationPoint = LocationPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

