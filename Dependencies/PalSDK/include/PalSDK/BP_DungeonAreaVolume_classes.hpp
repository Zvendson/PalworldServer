#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_DungeonAreaVolume.BP_DungeonAreaVolume_C
// 0x0010 (0x02A8 - 0x0298)
class ABP_DungeonAreaVolume_C final : public APalDungeonAreaVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Develop_SetupSize(const struct FVector& Extent);
	void ExecuteUbergraph_BP_DungeonAreaVolume(int32 EntryPoint);

	struct FBox GetBoundingBox() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonAreaVolume_C">();
	}
	static class ABP_DungeonAreaVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonAreaVolume_C>();
	}
};
static_assert(alignof(ABP_DungeonAreaVolume_C) == 0x000008, "Wrong alignment on ABP_DungeonAreaVolume_C");
static_assert(sizeof(ABP_DungeonAreaVolume_C) == 0x0002A8, "Wrong size on ABP_DungeonAreaVolume_C");
static_assert(offsetof(ABP_DungeonAreaVolume_C, UberGraphFrame) == 0x000298, "Member 'ABP_DungeonAreaVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DungeonAreaVolume_C, Box) == 0x0002A0, "Member 'ABP_DungeonAreaVolume_C::Box' has a wrong offset!");

}

