#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalStaticMeshImposterWorldSubsystem.BP_PalStaticMeshImposterWorldSubsystem_C
// 0x0000 (0x0108 - 0x0108)
class UBP_PalStaticMeshImposterWorldSubsystem_C final : public UPalStaticMeshImposterSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalStaticMeshImposterWorldSubsystem_C">();
	}
	static class UBP_PalStaticMeshImposterWorldSubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalStaticMeshImposterWorldSubsystem_C>();
	}
};
static_assert(alignof(UBP_PalStaticMeshImposterWorldSubsystem_C) == 0x000008, "Wrong alignment on UBP_PalStaticMeshImposterWorldSubsystem_C");
static_assert(sizeof(UBP_PalStaticMeshImposterWorldSubsystem_C) == 0x000108, "Wrong size on UBP_PalStaticMeshImposterWorldSubsystem_C");

}

