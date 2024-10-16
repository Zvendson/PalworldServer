#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalAmbientSoundArea_Sakura.BP_PalAmbientSoundArea_Sakura_C
// 0x0010 (0x02D0 - 0x02C0)
class ABP_PalAmbientSoundArea_Sakura_C final : public APalAmbientSoundAreaBase
{
public:
	class UBoxComponent*                          Box;                                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class UPrimitiveComponent* GetAreaCollision() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAmbientSoundArea_Sakura_C">();
	}
	static class ABP_PalAmbientSoundArea_Sakura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalAmbientSoundArea_Sakura_C>();
	}
};
static_assert(alignof(ABP_PalAmbientSoundArea_Sakura_C) == 0x000008, "Wrong alignment on ABP_PalAmbientSoundArea_Sakura_C");
static_assert(sizeof(ABP_PalAmbientSoundArea_Sakura_C) == 0x0002D0, "Wrong size on ABP_PalAmbientSoundArea_Sakura_C");
static_assert(offsetof(ABP_PalAmbientSoundArea_Sakura_C, Box) == 0x0002C0, "Member 'ABP_PalAmbientSoundArea_Sakura_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PalAmbientSoundArea_Sakura_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_PalAmbientSoundArea_Sakura_C::DefaultSceneRoot' has a wrong offset!");

}

