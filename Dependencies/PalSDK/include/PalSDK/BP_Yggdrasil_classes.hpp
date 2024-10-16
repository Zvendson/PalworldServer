#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Yggdrasil.BP_Yggdrasil_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_Yggdrasil_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Yaggdrasil;                                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Yggdrasil_C">();
	}
	static class ABP_Yggdrasil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Yggdrasil_C>();
	}
};
static_assert(alignof(ABP_Yggdrasil_C) == 0x000008, "Wrong alignment on ABP_Yggdrasil_C");
static_assert(sizeof(ABP_Yggdrasil_C) == 0x0002A0, "Wrong size on ABP_Yggdrasil_C");
static_assert(offsetof(ABP_Yggdrasil_C, StaticMesh) == 0x000290, "Member 'ABP_Yggdrasil_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Yggdrasil_C, SM_Yaggdrasil) == 0x000298, "Member 'ABP_Yggdrasil_C::SM_Yaggdrasil' has a wrong offset!");

}

