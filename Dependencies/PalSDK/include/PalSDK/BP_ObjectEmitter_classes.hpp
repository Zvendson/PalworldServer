#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ObjectEmitter.BP_ObjectEmitter_C
// 0x0038 (0x00D8 - 0x00A0)
class UBP_ObjectEmitter_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ULightComponent*>                LightComponents;                                   // 0x00A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCurveFloat*                            Light_Intensity_Curve;                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 Emission_Targets;                                  // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCurveFloat*                            Emission_Intensity_Curve;                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Update_Lights();
	void Update_Emissions();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ObjectEmitter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjectEmitter_C">();
	}
	static class UBP_ObjectEmitter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ObjectEmitter_C>();
	}
};
static_assert(alignof(UBP_ObjectEmitter_C) == 0x000008, "Wrong alignment on UBP_ObjectEmitter_C");
static_assert(sizeof(UBP_ObjectEmitter_C) == 0x0000D8, "Wrong size on UBP_ObjectEmitter_C");
static_assert(offsetof(UBP_ObjectEmitter_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_ObjectEmitter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ObjectEmitter_C, LightComponents) == 0x0000A8, "Member 'UBP_ObjectEmitter_C::LightComponents' has a wrong offset!");
static_assert(offsetof(UBP_ObjectEmitter_C, Light_Intensity_Curve) == 0x0000B8, "Member 'UBP_ObjectEmitter_C::Light_Intensity_Curve' has a wrong offset!");
static_assert(offsetof(UBP_ObjectEmitter_C, Emission_Targets) == 0x0000C0, "Member 'UBP_ObjectEmitter_C::Emission_Targets' has a wrong offset!");
static_assert(offsetof(UBP_ObjectEmitter_C, Emission_Intensity_Curve) == 0x0000D0, "Member 'UBP_ObjectEmitter_C::Emission_Intensity_Curve' has a wrong offset!");

}

