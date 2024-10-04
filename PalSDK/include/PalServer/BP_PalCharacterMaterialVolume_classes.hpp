#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PickMainMeshVolume_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C
// 0x00A8 (0x0358 - 0x02B0)
class ABP_PalCharacterMaterialVolume_C final : public ABP_PickMainMeshVolume_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalCharacterMaterialVolume_C;    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Base_Emissive_Intensity;                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Base_Color_Intensity;                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Intensity;                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Min;                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Max;                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TSet<class UMaterialInstanceDynamic*>         Material_Map;                                      // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Base_Emissive_Intensity_0;                         // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Base_Color_Intensity_0;                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Intensity_0;                 // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Min_0;                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Max_0;                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalCharacterMaterialVolume(int32 EntryPoint);
	void Force_Init();
	void Force_Off();
	void Force_On();
	void Force_Update();
	void ForceInit();
	void ForceOff();
	void ForceOn();
	void ForceUpdate();
	void SetParameters(class UMaterialInstanceDynamic* Material, double Light_Affect_Emissive_Intensity_0, double Light_Affect_Emissive_Min_0, double Light_Affect_Emissive_Max_0, double Base_Emissive_Intensity_0, double Base_Color_Intensity_0);
	void UpdateParameters();
	void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc);
	void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCharacterMaterialVolume_C">();
	}
	static class ABP_PalCharacterMaterialVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalCharacterMaterialVolume_C>();
	}
};
static_assert(alignof(ABP_PalCharacterMaterialVolume_C) == 0x000008, "Wrong alignment on ABP_PalCharacterMaterialVolume_C");
static_assert(sizeof(ABP_PalCharacterMaterialVolume_C) == 0x000358, "Wrong size on ABP_PalCharacterMaterialVolume_C");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, UberGraphFrame_BP_PalCharacterMaterialVolume_C) == 0x0002B0, "Member 'ABP_PalCharacterMaterialVolume_C::UberGraphFrame_BP_PalCharacterMaterialVolume_C' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Base_Emissive_Intensity) == 0x0002B8, "Member 'ABP_PalCharacterMaterialVolume_C::Base_Emissive_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Base_Color_Intensity) == 0x0002C0, "Member 'ABP_PalCharacterMaterialVolume_C::Base_Color_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Intensity) == 0x0002C8, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Min) == 0x0002D0, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Min' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Max) == 0x0002D8, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Max' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Material_Map) == 0x0002E0, "Member 'ABP_PalCharacterMaterialVolume_C::Material_Map' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Base_Emissive_Intensity_0) == 0x000330, "Member 'ABP_PalCharacterMaterialVolume_C::Base_Emissive_Intensity_0' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Base_Color_Intensity_0) == 0x000338, "Member 'ABP_PalCharacterMaterialVolume_C::Base_Color_Intensity_0' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Intensity_0) == 0x000340, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Intensity_0' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Min_0) == 0x000348, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Min_0' has a wrong offset!");
static_assert(offsetof(ABP_PalCharacterMaterialVolume_C, Light_Affect_Emissive_Max_0) == 0x000350, "Member 'ABP_PalCharacterMaterialVolume_C::Light_Affect_Emissive_Max_0' has a wrong offset!");

}

