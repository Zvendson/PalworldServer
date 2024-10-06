#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Ingame_Compass_classes.hpp"
#include "PalServer/WBP_Ingame_Compass_parameters.hpp"


namespace PalServer
{

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.AddCustomMarker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLocationUIData               PalLocationUIData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalCustomMarkerSaveData         PalCustomMarkerSaveData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FGuid                            LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::AddCustomMarker(const struct FPalLocationUIData& PalLocationUIData, const struct FPalCustomMarkerSaveData& PalCustomMarkerSaveData, const struct FGuid& LocationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "AddCustomMarker");

	Params::WBP_Ingame_Compass_C_AddCustomMarker Parms{};

	Parms.PalLocationUIData = std::move(PalLocationUIData);
	Parms.PalCustomMarkerSaveData = std::move(PalCustomMarkerSaveData);
	Parms.LocationId = std::move(LocationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            MarkerId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::CREATEDELEGATE_PROXYFUNCTION_0(const struct FGuid& MarkerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.MarkerId = std::move(MarkerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.ExecuteUbergraph_WBP_Ingame_Compass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "ExecuteUbergraph_WBP_Ingame_Compass");

	Params::WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.GetVisibleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Compass_C::GetVisibleIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "GetVisibleIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.On Added Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::On_Added_Location(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "On Added Location");

	Params::WBP_Ingame_Compass_C_On_Added_Location Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.OnCustomMarkerChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            MarkerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::OnCustomMarkerChanged(const struct FGuid& MarkerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "OnCustomMarkerChanged");

	Params::WBP_Ingame_Compass_C_OnCustomMarkerChanged Parms{};

	Parms.MarkerId = std::move(MarkerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Compass_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.OnRemovedLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::OnRemovedLocation(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "OnRemovedLocation");

	Params::WBP_Ingame_Compass_C_OnRemovedLocation Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Refresh Death Mark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGuid, class UPalLocationBase*>LocationMap                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Ingame_Compass_C::Refresh_Death_Mark(const TMap<struct FGuid, class UPalLocationBase*>& LocationMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "Refresh Death Mark");

	Params::WBP_Ingame_Compass_C_Refresh_Death_Mark Parms{};

	Parms.LocationMap = std::move(LocationMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Setup Created Icon Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CompassIconBase_C*           CreatedWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalLocationUIData               LocationUIData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Ingame_Compass_C::Setup_Created_Icon_Widget(class UWBP_CompassIconBase_C* CreatedWidget, const struct FGuid& LocationId, const struct FPalLocationUIData& LocationUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "Setup Created Icon Widget");

	Params::WBP_Ingame_Compass_C_Setup_Created_Icon_Widget Parms{};

	Parms.CreatedWidget = CreatedWidget;
	Parms.LocationId = std::move(LocationId);
	Parms.LocationUIData = std::move(LocationUIData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.SetupCustomMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Compass_C::SetupCustomMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "SetupCustomMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "Tick");

	Params::WBP_Ingame_Compass_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Compass_C::Update_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "Update Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Update Rotation From Pawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            TargetPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Compass_C::Update_Rotation_From_Pawn(class APawn* TargetPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Compass_C", "Update Rotation From Pawn");

	Params::WBP_Ingame_Compass_C_Update_Rotation_From_Pawn Parms{};

	Parms.TargetPawn = TargetPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

