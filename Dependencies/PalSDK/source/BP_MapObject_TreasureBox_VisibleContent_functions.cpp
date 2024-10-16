#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MapObject_TreasureBox_VisibleContent_classes.hpp"
#include "PalSDK/BP_MapObject_TreasureBox_VisibleContent_parameters.hpp"


namespace PalSDK
{

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "BP_OnSetConcreteModel");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.LoadVisualActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             BlueprintClassSoft                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::LoadVisualActor(TSoftClassPtr<class UClass> BlueprintClassSoft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "LoadVisualActor");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor Parms{};

	Parms.BlueprintClassSoft = BlueprintClassSoft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnReadyItemContainerModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "OnReadyItemContainerModule");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupEventToItemContainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::SetupEventToItemContainer(class UPalItemContainer* ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "SetupEventToItemContainer");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer Parms{};

	Parms.ItemContainer = ItemContainer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupVisual
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "SetupVisual");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.TryGetStaticItemId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectPickupItemOnLevelModel*PickupItemModel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             StaticItemId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::TryGetStaticItemId(class UPalMapObjectPickupItemOnLevelModel* PickupItemModel, class FName* StaticItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "TryGetStaticItemId");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId Parms{};

	Parms.PickupItemModel = PickupItemModel;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticItemId != nullptr)
		*StaticItemId = Parms.StaticItemId;
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_TreasureBox_VisibleContent_C::IsShowOutlineInReticleTargetting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "IsShowOutlineInReticleTargetting");

	Params::BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

