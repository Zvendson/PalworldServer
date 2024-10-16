#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BPI_SpawnPointInfo.BPI_SpawnPointInfo_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_SpawnPointInfo_C final : public IInterface
{
public:
	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_SpawnPointInfo_C">();
	}
	static class IBPI_SpawnPointInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SpawnPointInfo_C>();
	}
};
static_assert(alignof(IBPI_SpawnPointInfo_C) == 0x000008, "Wrong alignment on IBPI_SpawnPointInfo_C");
static_assert(sizeof(IBPI_SpawnPointInfo_C) == 0x000028, "Wrong size on IBPI_SpawnPointInfo_C");

}

