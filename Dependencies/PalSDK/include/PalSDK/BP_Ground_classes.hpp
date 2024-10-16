#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Ground.BP_Ground_C
// 0x0040 (0x02E0 - 0x02A0)
class ABP_Ground_C final : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                   BottomLayer;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Mode;                                              // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      UnlitOpaque;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LitOpaque;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      UnlitTranslucent;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LitTranlucent;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LitMasked;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      UnlitMasked;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeMode(int32 NewMode);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ground_C">();
	}
	static class ABP_Ground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ground_C>();
	}
};
static_assert(alignof(ABP_Ground_C) == 0x000008, "Wrong alignment on ABP_Ground_C");
static_assert(sizeof(ABP_Ground_C) == 0x0002E0, "Wrong size on ABP_Ground_C");
static_assert(offsetof(ABP_Ground_C, BottomLayer) == 0x0002A0, "Member 'ABP_Ground_C::BottomLayer' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, Mode) == 0x0002A8, "Member 'ABP_Ground_C::Mode' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, UnlitOpaque) == 0x0002B0, "Member 'ABP_Ground_C::UnlitOpaque' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, LitOpaque) == 0x0002B8, "Member 'ABP_Ground_C::LitOpaque' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, UnlitTranslucent) == 0x0002C0, "Member 'ABP_Ground_C::UnlitTranslucent' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, LitTranlucent) == 0x0002C8, "Member 'ABP_Ground_C::LitTranlucent' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, LitMasked) == 0x0002D0, "Member 'ABP_Ground_C::LitMasked' has a wrong offset!");
static_assert(offsetof(ABP_Ground_C, UnlitMasked) == 0x0002D8, "Member 'ABP_Ground_C::UnlitMasked' has a wrong offset!");

}

