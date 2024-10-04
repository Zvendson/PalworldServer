#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Map_Base_classes.hpp"
#include "PalServer/WBP_Map_Base_parameters.hpp"


namespace PalServer
{

// Function WBP_Map_Base.WBP_Map_Base_C.AddBossIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIBossSpawnerLoactionData    SpawnerData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Map_Base_C::AddBossIcon(const struct FPalUIBossSpawnerLoactionData& SpawnerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "AddBossIcon");

	Params::WBP_Map_Base_C_AddBossIcon Parms{};

	Parms.SpawnerData = std::move(SpawnerData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.AddCustomIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCustomMarkerSaveData         MarkerData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Map_Base_C::AddCustomIcon(const struct FGuid& LocationId, const struct FPalCustomMarkerSaveData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "AddCustomIcon");

	Params::WBP_Map_Base_C_AddCustomIcon Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.MarkerData = std::move(MarkerData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ChangeCustomIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ChangeCustomIcon");

	Params::WBP_Map_Base_C_ChangeCustomIcon Parms{};

	Parms.Icon = Icon;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ChangeFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        FilterMap                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ChangeFilter(EPalLocationType FilterMap, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ChangeFilter");

	Params::WBP_Map_Base_C_ChangeFilter Parms{};

	Parms.FilterMap = FilterMap;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.CloseMap
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::CloseMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "CloseMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            MarkerId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::CREATEDELEGATE_PROXYFUNCTION_0(const struct FGuid& MarkerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.MarkerId = std::move(MarkerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Enable Custom Mark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::Enable_Custom_Mark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Enable Custom Mark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ExecuteUbergraph_WBP_Map_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ExecuteUbergraph_WBP_Map_Base");

	Params::WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.On Custom Mark Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            Guid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::On_Custom_Mark_Changed(const struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "On Custom Mark Changed");

	Params::WBP_Map_Base_C_On_Custom_Mark_Changed Parms{};

	Parms.Guid = std::move(Guid);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.On Icon Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::On_Icon_Clicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "On Icon Clicked");

	Params::WBP_Map_Base_C_On_Icon_Clicked Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnCloseAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnCloseAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnCloseAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Map_Base_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnInputMethodChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnInputMethodChanged");

	Params::WBP_Map_Base_C_OnInputMethodChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Base_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnKeyDown");

	Params::WBP_Map_Base_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Base_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnMouseButtonDown");

	Params::WBP_Map_Base_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRemovedLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnRemovedLocation(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRemovedLocation");

	Params::WBP_Map_Base_C_OnRemovedLocation Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRepliedDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOK                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnRepliedDialog(bool bOK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRepliedDialog");

	Params::WBP_Map_Base_C_OnRepliedDialog Parms{};

	Parms.bOK = bOK;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRequestCampDismantal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnRequestCampDismantal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRequestCampDismantal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.RefreshDeathMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGuid, class UPalLocationBase*>LocationMap                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Map_Base_C::RefreshDeathMark(const TMap<struct FGuid, class UPalLocationBase*>& LocationMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "RefreshDeathMark");

	Params::WBP_Map_Base_C_RefreshDeathMark Parms{};

	Parms.LocationMap = std::move(LocationMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.RefreshIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint*                LocationPoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::RefreshIconState(EPalLocationType Type, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "RefreshIconState");

	Params::WBP_Map_Base_C_RefreshIconState Parms{};

	Parms.Type = Type;
	Parms.LocationPoint = LocationPoint;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.RemoveCustomIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "RemoveCustomIcon");

	Params::WBP_Map_Base_C_RemoveCustomIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetFilter
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::SetFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Setup Boss Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::Setup_Boss_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Setup Boss Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Setup Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint*                LocationPoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::Setup_Icon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C** Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Setup Icon");

	Params::WBP_Map_Base_C_Setup_Icon Parms{};

	Parms.LocationType = LocationType;
	Parms.LocationPoint = LocationPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function WBP_Map_Base.WBP_Map_Base_C.Setup Location Point Icon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::Setup_Location_Point_Icon(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Setup Location Point Icon");

	Params::WBP_Map_Base_C_Setup_Location_Point_Icon Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetupCustomIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::SetupCustomIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetupCustomIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetupLocationIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::SetupLocationIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetupLocationIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Tick");

	Params::WBP_Map_Base_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.UpdateBossCheckState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::UpdateBossCheckState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "UpdateBossCheckState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Map_Base_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Map_Base_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

