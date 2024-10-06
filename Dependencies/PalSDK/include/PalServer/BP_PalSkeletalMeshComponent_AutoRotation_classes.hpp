#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalSkeletalMeshComponent_AutoRotation.BP_PalSkeletalMeshComponent_AutoRotation_C
// 0x0020 (0x12C0 - 0x12A0)
class UBP_PalSkeletalMeshComponent_AutoRotation_C final : public UPalSkeletalMeshComponent
{
public:
	uint8                                         Pad_1298[0x8];                                     // 0x1298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x12A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               RotationPerSecond;                                 // 0x12A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSkeletalMeshComponent_AutoRotation_C">();
	}
	static class UBP_PalSkeletalMeshComponent_AutoRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSkeletalMeshComponent_AutoRotation_C>();
	}
};
static_assert(alignof(UBP_PalSkeletalMeshComponent_AutoRotation_C) == 0x000010, "Wrong alignment on UBP_PalSkeletalMeshComponent_AutoRotation_C");
static_assert(sizeof(UBP_PalSkeletalMeshComponent_AutoRotation_C) == 0x0012C0, "Wrong size on UBP_PalSkeletalMeshComponent_AutoRotation_C");
static_assert(offsetof(UBP_PalSkeletalMeshComponent_AutoRotation_C, UberGraphFrame) == 0x0012A0, "Member 'UBP_PalSkeletalMeshComponent_AutoRotation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalSkeletalMeshComponent_AutoRotation_C, RotationPerSecond) == 0x0012A8, "Member 'UBP_PalSkeletalMeshComponent_AutoRotation_C::RotationPerSecond' has a wrong offset!");

}

