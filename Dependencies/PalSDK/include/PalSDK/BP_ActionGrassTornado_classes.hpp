#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionGrassTornado.BP_ActionGrassTornado_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionGrassTornado_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	void OnStartProcessAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionGrassTornado_C">();
	}
	static class UBP_ActionGrassTornado_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionGrassTornado_C>();
	}
};
static_assert(alignof(UBP_ActionGrassTornado_C) == 0x000010, "Wrong alignment on UBP_ActionGrassTornado_C");
static_assert(sizeof(UBP_ActionGrassTornado_C) == 0x0002C0, "Wrong size on UBP_ActionGrassTornado_C");

}

