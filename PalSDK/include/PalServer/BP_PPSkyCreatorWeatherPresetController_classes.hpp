#pragma once

#include "Basic.hpp"

#include "S_PPSkyCreatorTimePreset_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C
// 0x0050 (0x02E0 - 0x0290)
class ABP_PPSkyCreatorWeatherPresetController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                          SkyCreatorTarget;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PPSkyCreatorTimePreset>      Weather_Presets;                                   // 0x02A8(0x0010)(Edit, BlueprintVisible)
	double                                        Interpolation_Duration;                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time;                                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Alpha;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             Preset;                                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             Next_preset;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint);
	void GetPrePreset(int32 Index_0, class UPPSkyCreatorWeatherPreset** Pre);
	void GetPresets(double Time_0, class UPPSkyCreatorWeatherPreset** CurrentPreset, class UPPSkyCreatorWeatherPreset** NextPreset, double* Alpha_0, int32* PresetIndex);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetBrightness();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PPSkyCreatorWeatherPresetController_C">();
	}
	static class ABP_PPSkyCreatorWeatherPresetController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PPSkyCreatorWeatherPresetController_C>();
	}
};
static_assert(alignof(ABP_PPSkyCreatorWeatherPresetController_C) == 0x000008, "Wrong alignment on ABP_PPSkyCreatorWeatherPresetController_C");
static_assert(sizeof(ABP_PPSkyCreatorWeatherPresetController_C) == 0x0002E0, "Wrong size on ABP_PPSkyCreatorWeatherPresetController_C");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, UberGraphFrame) == 0x000290, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, SkyCreatorTarget) == 0x0002A0, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::SkyCreatorTarget' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Weather_Presets) == 0x0002A8, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Weather_Presets' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Interpolation_Duration) == 0x0002B8, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Interpolation_Duration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Time) == 0x0002C0, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Alpha) == 0x0002C8, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Alpha' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Preset) == 0x0002D0, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Preset' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreatorWeatherPresetController_C, Next_preset) == 0x0002D8, "Member 'ABP_PPSkyCreatorWeatherPresetController_C::Next_preset' has a wrong offset!");

}

