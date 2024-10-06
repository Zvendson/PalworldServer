#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalPickingGameProcessor.BP_PalPickingGameProcessor_C.GetSettingDataByDifficultyType
// 0x0090 (0x0090 - 0x0000)
struct BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType final
{
public:
	EPalPickingGameDifficultyType                 DifficultyType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPickingGameSettingData             OutSettingData;                                    // 0x0008(0x0020)(Parm, OutParm)
	struct FPalPickingGameSettingData             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value;                           // 0x0050(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPickingGameSettingData             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0068(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType) == 0x000008, "Wrong alignment on BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType");
static_assert(sizeof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType) == 0x000090, "Wrong size on BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, DifficultyType) == 0x000000, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::DifficultyType' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, OutSettingData) == 0x000008, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::OutSettingData' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000048, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_Map_Find_Value) == 0x000050, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000068, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000088, "Member 'BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

}

