#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_InventoryListContent.WBP_InventoryListContent_C.AddWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_InventoryListContent_C_AddWidget final
{
public:
	class UWidget*                                InWidgett;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryListContent_C_AddWidget) == 0x000008, "Wrong alignment on WBP_InventoryListContent_C_AddWidget");
static_assert(sizeof(WBP_InventoryListContent_C_AddWidget) == 0x000010, "Wrong size on WBP_InventoryListContent_C_AddWidget");
static_assert(offsetof(WBP_InventoryListContent_C_AddWidget, InWidgett) == 0x000000, "Member 'WBP_InventoryListContent_C_AddWidget::InWidgett' has a wrong offset!");
static_assert(offsetof(WBP_InventoryListContent_C_AddWidget, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000008, "Member 'WBP_InventoryListContent_C_AddWidget::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");

// Function WBP_InventoryListContent.WBP_InventoryListContent_C.GetAllContents
// 0x0020 (0x0020 - 0x0000)
struct WBP_InventoryListContent_C_GetAllContents final
{
public:
	TArray<class UWidget*>                        Contents;                                          // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_InventoryListContent_C_GetAllContents) == 0x000008, "Wrong alignment on WBP_InventoryListContent_C_GetAllContents");
static_assert(sizeof(WBP_InventoryListContent_C_GetAllContents) == 0x000020, "Wrong size on WBP_InventoryListContent_C_GetAllContents");
static_assert(offsetof(WBP_InventoryListContent_C_GetAllContents, Contents) == 0x000000, "Member 'WBP_InventoryListContent_C_GetAllContents::Contents' has a wrong offset!");
static_assert(offsetof(WBP_InventoryListContent_C_GetAllContents, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_InventoryListContent_C_GetAllContents::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");

// Function WBP_InventoryListContent.WBP_InventoryListContent_C.SetCategoryName
// 0x0018 (0x0018 - 0x0000)
struct WBP_InventoryListContent_C_SetCategoryName final
{
public:
	class FText                                   CategoryName;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_InventoryListContent_C_SetCategoryName) == 0x000008, "Wrong alignment on WBP_InventoryListContent_C_SetCategoryName");
static_assert(sizeof(WBP_InventoryListContent_C_SetCategoryName) == 0x000018, "Wrong size on WBP_InventoryListContent_C_SetCategoryName");
static_assert(offsetof(WBP_InventoryListContent_C_SetCategoryName, CategoryName) == 0x000000, "Member 'WBP_InventoryListContent_C_SetCategoryName::CategoryName' has a wrong offset!");

}

