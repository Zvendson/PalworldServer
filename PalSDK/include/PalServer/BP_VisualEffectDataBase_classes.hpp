#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_VisualEffectDataBase.BP_VisualEffectDataBase_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_VisualEffectDataBase_C final : public UPalVisualEffectDataBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffectDataBase_C">();
	}
	static class UBP_VisualEffectDataBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffectDataBase_C>();
	}
};
static_assert(alignof(UBP_VisualEffectDataBase_C) == 0x000008, "Wrong alignment on UBP_VisualEffectDataBase_C");
static_assert(sizeof(UBP_VisualEffectDataBase_C) == 0x0000D8, "Wrong size on UBP_VisualEffectDataBase_C");

}

