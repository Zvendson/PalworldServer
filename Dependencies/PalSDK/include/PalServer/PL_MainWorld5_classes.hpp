#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass PL_MainWorld5.PL_MainWorld5_C
// 0x0008 (0x02A0 - 0x0298)
class APL_MainWorld5_C final : public ALevelScriptActor
{
public:
	struct FActorDataLayer                        In_Data_Layer;                                     // 0x0298(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PL_MainWorld5_C">();
	}
	static class APL_MainWorld5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APL_MainWorld5_C>();
	}
};
static_assert(alignof(APL_MainWorld5_C) == 0x000008, "Wrong alignment on APL_MainWorld5_C");
static_assert(sizeof(APL_MainWorld5_C) == 0x0002A0, "Wrong size on APL_MainWorld5_C");
static_assert(offsetof(APL_MainWorld5_C, In_Data_Layer) == 0x000298, "Member 'APL_MainWorld5_C::In_Data_Layer' has a wrong offset!");

}

