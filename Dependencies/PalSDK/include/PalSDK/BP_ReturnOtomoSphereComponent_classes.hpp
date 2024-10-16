#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ReturnOtomoSphereComponent.BP_ReturnOtomoSphereComponent_C
// 0x0000 (0x0F80 - 0x0F80)
class UBP_ReturnOtomoSphereComponent_C final : public USkeletalMeshComponent
{
public:
	void DeleteSelf();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ReturnOtomoSphereComponent_C">();
	}
	static class UBP_ReturnOtomoSphereComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ReturnOtomoSphereComponent_C>();
	}
};
static_assert(alignof(UBP_ReturnOtomoSphereComponent_C) == 0x000010, "Wrong alignment on UBP_ReturnOtomoSphereComponent_C");
static_assert(sizeof(UBP_ReturnOtomoSphereComponent_C) == 0x000F80, "Wrong size on UBP_ReturnOtomoSphereComponent_C");

}

