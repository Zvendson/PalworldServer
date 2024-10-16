#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AdditionalCascades_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_WaterfallTool.BP_WaterfallTool_C
// 0x0108 (0x0398 - 0x0290)
class ABP_WaterfallTool_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAmbientSoundLineComponent*          PalAmbientSoundLine;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Mist;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BottomSplash;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TopSplash;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Waterfall_Spline;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Ground_Check;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Easy_Scale;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Water_Color;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Foam_Brightness;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Opacity;                                           // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Opacity_Edge_Fade;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Flow_Speed;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Start_Fade;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAdditionalCascades>            Additional_Waterfalls;                             // 0x0308(0x0010)(Edit, BlueprintVisible)
	TArray<class UParticleSystemComponent*>       Additional_Top_Splash;                             // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       Additional_Bottom_Splash;                          // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       Additional_Mist;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USplineComponent*>               Adds_Waterfall_Spline_Comps;                       // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        End_Fade;                                          // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Edge_Fade;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Object_Detection;                                  // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Object_Detection_Size;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Object_Detection_Strength;                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Object_Detection_Smoothness;                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors_to_Ignore;                                  // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void UserConstructionScript();
	void Setup_Waterfall_Particles();
	void Setup_Waterfall_Particle_Parameters();
	void Setup_Spline_Mesh(class USplineComponent* Spline_Comp, double Scale);
	void Setup_Material_Parameters(class UMaterialInstanceDynamic* Material, int32 Current_Index, class USplineComponent* Spline);
	void Setup_Adds_Waterfall_Particles();
	void Setup_Adds_Waterfall_Particle_Parameters();
	void Set_Waterfall_Particle_Effect_Location();
	void Set_Adds_Waterfall_Particle_Effect_Location(TArray<struct FAdditionalCascades>& Cascade_Splines_Data, TArray<class UParticleSystemComponent*>& Cascade_Top_Splash, TArray<class UParticleSystemComponent*>& Cascade_Bottom_Splash, TArray<class UParticleSystemComponent*>& Cascade_Mist, TArray<class USplineComponent*>& Cascade_Spline_Comps);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WaterfallTool(int32 EntryPoint);
	void Do_Waterfall_Trace(class USplineComponent* Spline_Input, double Scale, TArray<class AActor*>& Actors_to_Ignore_0);
	void CheckIntervalByDistance();
	void Check_Spline_Input_Keys(TArray<struct FAdditionalCascades>& Cascades_In, bool* Passed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WaterfallTool_C">();
	}
	static class ABP_WaterfallTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WaterfallTool_C>();
	}
};
static_assert(alignof(ABP_WaterfallTool_C) == 0x000008, "Wrong alignment on ABP_WaterfallTool_C");
static_assert(sizeof(ABP_WaterfallTool_C) == 0x000398, "Wrong size on ABP_WaterfallTool_C");
static_assert(offsetof(ABP_WaterfallTool_C, UberGraphFrame) == 0x000290, "Member 'ABP_WaterfallTool_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, PalAmbientSoundLine) == 0x000298, "Member 'ABP_WaterfallTool_C::PalAmbientSoundLine' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Mist) == 0x0002A0, "Member 'ABP_WaterfallTool_C::Mist' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, BottomSplash) == 0x0002A8, "Member 'ABP_WaterfallTool_C::BottomSplash' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, TopSplash) == 0x0002B0, "Member 'ABP_WaterfallTool_C::TopSplash' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Waterfall_Spline) == 0x0002B8, "Member 'ABP_WaterfallTool_C::Waterfall_Spline' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Ground_Check) == 0x0002C0, "Member 'ABP_WaterfallTool_C::Ground_Check' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Easy_Scale) == 0x0002C8, "Member 'ABP_WaterfallTool_C::Easy_Scale' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Water_Color) == 0x0002D0, "Member 'ABP_WaterfallTool_C::Water_Color' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Foam_Brightness) == 0x0002E0, "Member 'ABP_WaterfallTool_C::Foam_Brightness' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Opacity) == 0x0002E8, "Member 'ABP_WaterfallTool_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Opacity_Edge_Fade) == 0x0002F0, "Member 'ABP_WaterfallTool_C::Opacity_Edge_Fade' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Flow_Speed) == 0x0002F8, "Member 'ABP_WaterfallTool_C::Flow_Speed' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Start_Fade) == 0x000300, "Member 'ABP_WaterfallTool_C::Start_Fade' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Additional_Waterfalls) == 0x000308, "Member 'ABP_WaterfallTool_C::Additional_Waterfalls' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Additional_Top_Splash) == 0x000318, "Member 'ABP_WaterfallTool_C::Additional_Top_Splash' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Additional_Bottom_Splash) == 0x000328, "Member 'ABP_WaterfallTool_C::Additional_Bottom_Splash' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Additional_Mist) == 0x000338, "Member 'ABP_WaterfallTool_C::Additional_Mist' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Adds_Waterfall_Spline_Comps) == 0x000348, "Member 'ABP_WaterfallTool_C::Adds_Waterfall_Spline_Comps' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, End_Fade) == 0x000358, "Member 'ABP_WaterfallTool_C::End_Fade' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Edge_Fade) == 0x000360, "Member 'ABP_WaterfallTool_C::Edge_Fade' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Object_Detection) == 0x000368, "Member 'ABP_WaterfallTool_C::Object_Detection' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Object_Detection_Size) == 0x000370, "Member 'ABP_WaterfallTool_C::Object_Detection_Size' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Object_Detection_Strength) == 0x000378, "Member 'ABP_WaterfallTool_C::Object_Detection_Strength' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Object_Detection_Smoothness) == 0x000380, "Member 'ABP_WaterfallTool_C::Object_Detection_Smoothness' has a wrong offset!");
static_assert(offsetof(ABP_WaterfallTool_C, Actors_to_Ignore) == 0x000388, "Member 'ABP_WaterfallTool_C::Actors_to_Ignore' has a wrong offset!");

}

