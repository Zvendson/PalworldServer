#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SnapModeFX.BP_SnapModeFX_C
// 0x0068 (0x02F8 - 0x0290)
class ABP_SnapModeFX_C final : public APalSnapModeFX
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Laser;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LaserRoot;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BoxEffect;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        BoxDefaultSize;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LaserDefaultSize;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CenterSnapEffectOffsetZ;                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginLineWorldScale;                              // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultLineScaleXY;                                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSnapMode;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SnapModeFX(int32 EntryPoint);
	void Hide();
	void ReceiveBeginPlay();
	void ShowCenterSnap(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& BoxExtent, const struct FVector& SnapStart, const struct FVector& SnapEnd, bool IsAttachWall);
	void ShowSnap(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& BoxExtent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SnapModeFX_C">();
	}
	static class ABP_SnapModeFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SnapModeFX_C>();
	}
};
static_assert(alignof(ABP_SnapModeFX_C) == 0x000008, "Wrong alignment on ABP_SnapModeFX_C");
static_assert(sizeof(ABP_SnapModeFX_C) == 0x0002F8, "Wrong size on ABP_SnapModeFX_C");
static_assert(offsetof(ABP_SnapModeFX_C, UberGraphFrame) == 0x000290, "Member 'ABP_SnapModeFX_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, SM_Laser) == 0x000298, "Member 'ABP_SnapModeFX_C::SM_Laser' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, LaserRoot) == 0x0002A0, "Member 'ABP_SnapModeFX_C::LaserRoot' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, BoxEffect) == 0x0002A8, "Member 'ABP_SnapModeFX_C::BoxEffect' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_SnapModeFX_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, BoxDefaultSize) == 0x0002B8, "Member 'ABP_SnapModeFX_C::BoxDefaultSize' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, LaserDefaultSize) == 0x0002C0, "Member 'ABP_SnapModeFX_C::LaserDefaultSize' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, CenterSnapEffectOffsetZ) == 0x0002C8, "Member 'ABP_SnapModeFX_C::CenterSnapEffectOffsetZ' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, OriginLineWorldScale) == 0x0002D0, "Member 'ABP_SnapModeFX_C::OriginLineWorldScale' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, DefaultLineScaleXY) == 0x0002E8, "Member 'ABP_SnapModeFX_C::DefaultLineScaleXY' has a wrong offset!");
static_assert(offsetof(ABP_SnapModeFX_C, IsSnapMode) == 0x0002F0, "Member 'ABP_SnapModeFX_C::IsSnapMode' has a wrong offset!");

}

