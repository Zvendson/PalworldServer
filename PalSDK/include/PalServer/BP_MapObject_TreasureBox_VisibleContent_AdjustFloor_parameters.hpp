#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor
// 0x0130 (0x0130 - 0x0000)
struct BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor");
static_assert(sizeof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor) == 0x000130, "Wrong size on BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, EntryPoint) == 0x000000, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, CallFunc_Add_VectorVector_ReturnValue) == 0x000020, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000038, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000120, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000128, "Member 'BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");

}

