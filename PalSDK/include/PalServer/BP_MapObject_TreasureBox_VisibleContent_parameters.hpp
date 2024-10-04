#pragma once

#include "Basic.hpp"

#include "EPalTreasureBoxVisualType_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent
// 0x0080 (0x0080 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_BlueprintClassSoft;             // 0x0030(0x0030)(HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent) == 0x000080, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, EntryPoint) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, Temp_class_Variable) == 0x000018, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_ClassDynamicCast_AsActor) == 0x000020, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, CallFunc_IsValidClass_ReturnValue) == 0x000029, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_CustomEvent_BlueprintClassSoft) == 0x000030, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_CustomEvent_BlueprintClassSoft' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_CustomEvent_Loaded) == 0x000060, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_Event_ConcreteModel) == 0x000068, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.LoadVisualActor
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor final
{
public:
	TSoftClassPtr<class UClass>                   BlueprintClassSoft;                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor) == 0x000030, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor, BlueprintClassSoft) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor::BlueprintClassSoft' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B) == 0x000008, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B, Loaded) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B::Loaded' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnReadyItemContainerModule
// 0x0010 (0x0010 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   Module;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule) == 0x000010, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule, Model) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule::Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule, Module) == 0x000008, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule::Module' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupEventToItemContainer
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer final
{
public:
	class UPalItemContainer*                      ItemContainer;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer) == 0x000008, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer, ItemContainer) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer::ItemContainer' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupVisual
// 0x0160 (0x0160 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 StaticItemData;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*    ConcreteModel_0;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalTreasureBoxVisualType                     VisualType;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      ItemIDManager;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*    K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetVisualStaticItemId_ReturnValue;        // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetVisualBlueprintClass_ReturnValue;      // 0x0130(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual) == 0x000160, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, ConcreteModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, StaticItemData) == 0x000008, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::StaticItemData' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, ConcreteModel_0) == 0x000010, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::ConcreteModel_0' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, VisualType) == 0x000018, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::VisualType' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, ItemIDManager) == 0x000020, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::ItemIDManager' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model) == 0x000028, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_HasAuthority_ReturnValue) == 0x000031, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_GetVisualStaticItemId_ReturnValue) == 0x000034, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_GetVisualStaticItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_NotEqual_NameName_ReturnValue) == 0x00003C, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_Conv_NameToText_ReturnValue) == 0x000040, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, K2Node_MakeArray_Array) == 0x0000A8, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, K2Node_MakeArray_Array_1) == 0x0000B8, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_Format_ReturnValue_1) == 0x0000E0, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000108, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_HasAuthority_ReturnValue_1) == 0x000118, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_IsValid_ReturnValue) == 0x000119, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_GetItemIDManager_ReturnValue) == 0x000120, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_GetStaticItemData_ReturnValue) == 0x000128, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual, CallFunc_GetVisualBlueprintClass_ReturnValue) == 0x000130, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_SetupVisual::CallFunc_GetVisualBlueprintClass_ReturnValue' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.TryGetStaticItemId
// 0x0018 (0x0018 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId final
{
public:
	class UPalMapObjectPickupItemOnLevelModel*    PickupItemModel;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   StaticItemId;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*    ConcreteModel;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId) == 0x000018, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId, PickupItemModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId::PickupItemModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId, StaticItemId) == 0x000008, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId::StaticItemId' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId, ConcreteModel) == 0x000010, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId::ConcreteModel' has a wrong offset!");

// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.IsShowOutlineInReticleTargetting
// 0x0001 (0x0001 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting) == 0x000001, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting) == 0x000001, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting, ReturnValue) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting::ReturnValue' has a wrong offset!");

}

