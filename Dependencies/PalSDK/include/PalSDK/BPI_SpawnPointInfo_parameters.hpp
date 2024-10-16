#pragma once

#include "Basic.hpp"

#include "F_NPCOnePointSpawnInfo_structs.hpp"


namespace PalSDK::Params
{

// Function BPI_SpawnPointInfo.BPI_SpawnPointInfo_C.GetOneSpawnInfo
// 0x00A0 (0x00A0 - 0x0000)
struct BPI_SpawnPointInfo_C_GetOneSpawnInfo final
{
public:
	struct FF_NPCOnePointSpawnInfo                Info;                                              // 0x0000(0x00A0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SpawnPointInfo_C_GetOneSpawnInfo) == 0x000010, "Wrong alignment on BPI_SpawnPointInfo_C_GetOneSpawnInfo");
static_assert(sizeof(BPI_SpawnPointInfo_C_GetOneSpawnInfo) == 0x0000A0, "Wrong size on BPI_SpawnPointInfo_C_GetOneSpawnInfo");
static_assert(offsetof(BPI_SpawnPointInfo_C_GetOneSpawnInfo, Info) == 0x000000, "Member 'BPI_SpawnPointInfo_C_GetOneSpawnInfo::Info' has a wrong offset!");

}

