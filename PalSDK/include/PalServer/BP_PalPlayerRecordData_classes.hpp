#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalPlayerRecordData.BP_PalPlayerRecordData_C
// 0x0000 (0x1410 - 0x1410)
class UBP_PalPlayerRecordData_C final : public UPalPlayerRecordData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerRecordData_C">();
	}
	static class UBP_PalPlayerRecordData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalPlayerRecordData_C>();
	}
};
static_assert(alignof(UBP_PalPlayerRecordData_C) == 0x000008, "Wrong alignment on UBP_PalPlayerRecordData_C");
static_assert(sizeof(UBP_PalPlayerRecordData_C) == 0x001410, "Wrong size on UBP_PalPlayerRecordData_C");

}

