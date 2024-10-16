#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalPickingGameProcessor.BP_PalPickingGameProcessor_C
// 0x0050 (0x0160 - 0x0110)
class UBP_PalPickingGameProcessor_C final : public UPalPickingGameProcessor
{
public:
	TMap<EPalPickingGameDifficultyType, struct FDataTableRowHandle> SettingDataRowNameMap;                             // 0x0110(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, struct FPalPickingGameSettingData* OutSettingData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPickingGameProcessor_C">();
	}
	static class UBP_PalPickingGameProcessor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalPickingGameProcessor_C>();
	}
};
static_assert(alignof(UBP_PalPickingGameProcessor_C) == 0x000008, "Wrong alignment on UBP_PalPickingGameProcessor_C");
static_assert(sizeof(UBP_PalPickingGameProcessor_C) == 0x000160, "Wrong size on UBP_PalPickingGameProcessor_C");
static_assert(offsetof(UBP_PalPickingGameProcessor_C, SettingDataRowNameMap) == 0x000110, "Member 'UBP_PalPickingGameProcessor_C::SettingDataRowNameMap' has a wrong offset!");

}

