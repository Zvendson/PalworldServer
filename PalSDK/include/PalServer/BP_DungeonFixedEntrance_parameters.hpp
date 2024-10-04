#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetInteractWidget
// 0x0020 (0x0020 - 0x0000)
struct BP_DungeonFixedEntrance_C_GetInteractWidget final
{
public:
	class UPalUserWidget*                         CreatedWidget;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStageModelDungeon*                  CallFunc_GetStageModel_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DungeonInfo_FixedDungeon_C*        CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonFixedEntrance_C_GetInteractWidget) == 0x000008, "Wrong alignment on BP_DungeonFixedEntrance_C_GetInteractWidget");
static_assert(sizeof(BP_DungeonFixedEntrance_C_GetInteractWidget) == 0x000020, "Wrong size on BP_DungeonFixedEntrance_C_GetInteractWidget");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetInteractWidget, CreatedWidget) == 0x000000, "Member 'BP_DungeonFixedEntrance_C_GetInteractWidget::CreatedWidget' has a wrong offset!");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetInteractWidget, CallFunc_GetStageModel_ReturnValue) == 0x000008, "Member 'BP_DungeonFixedEntrance_C_GetInteractWidget::CallFunc_GetStageModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetInteractWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'BP_DungeonFixedEntrance_C_GetInteractWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetInteractWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_DungeonFixedEntrance_C_GetInteractWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetDeadItemDropPoint
// 0x00C0 (0x00C0 - 0x0000)
struct BP_DungeonFixedEntrance_C_GetDeadItemDropPoint final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonFixedEntrance_C_GetDeadItemDropPoint) == 0x000010, "Wrong alignment on BP_DungeonFixedEntrance_C_GetDeadItemDropPoint");
static_assert(sizeof(BP_DungeonFixedEntrance_C_GetDeadItemDropPoint) == 0x0000C0, "Wrong size on BP_DungeonFixedEntrance_C_GetDeadItemDropPoint");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetDeadItemDropPoint, ReturnValue) == 0x000000, "Member 'BP_DungeonFixedEntrance_C_GetDeadItemDropPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetDeadItemDropPoint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_DungeonFixedEntrance_C_GetDeadItemDropPoint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C.GetWarpPoint
// 0x00C0 (0x00C0 - 0x0000)
struct BP_DungeonFixedEntrance_C_GetWarpPoint final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonFixedEntrance_C_GetWarpPoint) == 0x000010, "Wrong alignment on BP_DungeonFixedEntrance_C_GetWarpPoint");
static_assert(sizeof(BP_DungeonFixedEntrance_C_GetWarpPoint) == 0x0000C0, "Wrong size on BP_DungeonFixedEntrance_C_GetWarpPoint");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetWarpPoint, ReturnValue) == 0x000000, "Member 'BP_DungeonFixedEntrance_C_GetWarpPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFixedEntrance_C_GetWarpPoint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_DungeonFixedEntrance_C_GetWarpPoint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}

