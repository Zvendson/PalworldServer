#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C.GetInteractWidget
// 0x0008 (0x0008 - 0x0000)
struct BI_PalInteractHUDInterface_C_GetInteractWidget final
{
public:
	class UPalUserWidget*                         CreatedWidget;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_PalInteractHUDInterface_C_GetInteractWidget) == 0x000008, "Wrong alignment on BI_PalInteractHUDInterface_C_GetInteractWidget");
static_assert(sizeof(BI_PalInteractHUDInterface_C_GetInteractWidget) == 0x000008, "Wrong size on BI_PalInteractHUDInterface_C_GetInteractWidget");
static_assert(offsetof(BI_PalInteractHUDInterface_C_GetInteractWidget, CreatedWidget) == 0x000000, "Member 'BI_PalInteractHUDInterface_C_GetInteractWidget::CreatedWidget' has a wrong offset!");

}

