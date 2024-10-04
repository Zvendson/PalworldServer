#pragma once

#include "Basic.hpp"

#include "BP_Alpaca_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Alpaca_Normal.BP_Alpaca_Normal_C
// 0x0010 (0x0AC0 - 0x0AB0)
class ABP_Alpaca_Normal_C final : public ABP_Alpaca_C
{
public:
	class UBP_PalRideMarkerSaddle_C*              BP_PalRideMarkerSaddle;                            // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Alpaca_Normal_C">();
	}
	static class ABP_Alpaca_Normal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Alpaca_Normal_C>();
	}
};
static_assert(alignof(ABP_Alpaca_Normal_C) == 0x000010, "Wrong alignment on ABP_Alpaca_Normal_C");
static_assert(sizeof(ABP_Alpaca_Normal_C) == 0x000AC0, "Wrong size on ABP_Alpaca_Normal_C");
static_assert(offsetof(ABP_Alpaca_Normal_C, BP_PalRideMarkerSaddle) == 0x000AB0, "Member 'ABP_Alpaca_Normal_C::BP_PalRideMarkerSaddle' has a wrong offset!");

}

