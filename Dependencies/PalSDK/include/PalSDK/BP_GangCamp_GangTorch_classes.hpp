#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_GangCamp_GangTorch.BP_GangCamp_GangTorch_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_GangCamp_GangTorch_C final : public AActor
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_TorchFire;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GangCamp_GangTorch_C">();
	}
	static class ABP_GangCamp_GangTorch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GangCamp_GangTorch_C>();
	}
};
static_assert(alignof(ABP_GangCamp_GangTorch_C) == 0x000008, "Wrong alignment on ABP_GangCamp_GangTorch_C");
static_assert(sizeof(ABP_GangCamp_GangTorch_C) == 0x0002B0, "Wrong size on ABP_GangCamp_GangTorch_C");
static_assert(offsetof(ABP_GangCamp_GangTorch_C, PointLight) == 0x000290, "Member 'ABP_GangCamp_GangTorch_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_GangCamp_GangTorch_C, NS_TorchFire) == 0x000298, "Member 'ABP_GangCamp_GangTorch_C::NS_TorchFire' has a wrong offset!");
static_assert(offsetof(ABP_GangCamp_GangTorch_C, StaticMesh) == 0x0002A0, "Member 'ABP_GangCamp_GangTorch_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_GangCamp_GangTorch_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_GangCamp_GangTorch_C::DefaultSceneRoot' has a wrong offset!");

}

