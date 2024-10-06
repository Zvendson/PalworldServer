#include "PalServer/Basic.hpp"

#include "PalServer/BP_UltimateRiverTool_classes.hpp"
#include "PalServer/BP_UltimateRiverTool_parameters.hpp"


namespace PalServer
{

// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.ExecuteUbergraph_BP_UltimateRiverTool
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::ExecuteUbergraph_BP_UltimateRiverTool(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "ExecuteUbergraph_BP_UltimateRiverTool");

	Params::BP_UltimateRiverTool_C_ExecuteUbergraph_BP_UltimateRiverTool Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.GenerateSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Collision_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CastShadow_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 PathDeform_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  PathDeformDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTriggerVolume                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TranslucentSortPriority_0                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::GenerateSplineMesh(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform_0, double PathDeformDistance, bool IsTriggerVolume, int32 TranslucentSortPriority_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "GenerateSplineMesh");

	Params::BP_UltimateRiverTool_C_GenerateSplineMesh Parms{};

	Parms.Collision_0 = Collision_0;
	Parms.CastShadow_0 = CastShadow_0;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;
	Parms.PathDeform_0 = PathDeform_0;
	Parms.PathDeformDistance = PathDeformDistance;
	Parms.IsTriggerVolume = IsTriggerVolume;
	Parms.TranslucentSortPriority_0 = TranslucentSortPriority_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.GenerateSplineMesh_Cycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Collision_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CastShadow_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::GenerateSplineMesh_Cycle(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "GenerateSplineMesh_Cycle");

	Params::BP_UltimateRiverTool_C_GenerateSplineMesh_Cycle Parms{};

	Parms.Collision_0 = Collision_0;
	Parms.CastShadow_0 = CastShadow_0;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.GenerateSplineMesh_TriggerVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Collision_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CastShadow_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 PathDeform                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  PathDeformDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTriggerVolume                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::GenerateSplineMesh_TriggerVolume(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, double PathDeformDistance, bool IsTriggerVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "GenerateSplineMesh_TriggerVolume");

	Params::BP_UltimateRiverTool_C_GenerateSplineMesh_TriggerVolume Parms{};

	Parms.Collision_0 = Collision_0;
	Parms.CastShadow_0 = CastShadow_0;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;
	Parms.PathDeform = PathDeform;
	Parms.PathDeformDistance = PathDeformDistance;
	Parms.IsTriggerVolume = IsTriggerVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.PathDeform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 Spline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CoorinatesIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          _CoordinatesOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::PathDeform(class USplineComponent* Spline, const struct FVector& CoorinatesIn, double Distance, struct FVector* _CoordinatesOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "PathDeform");

	Params::BP_UltimateRiverTool_C_PathDeform Parms{};

	Parms.Spline = Spline;
	Parms.CoorinatesIn = std::move(CoorinatesIn);
	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (_CoordinatesOut != nullptr)
		*_CoordinatesOut = std::move(Parms._CoordinatesOut);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UltimateRiverTool_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "ReceiveTick");

	Params::BP_UltimateRiverTool_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.SetupCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*             SplineMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::SetupCollision(class USplineMeshComponent* SplineMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "SetupCollision");

	Params::BP_UltimateRiverTool_C_SetupCollision Parms{};

	Parms.SplineMesh = SplineMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UltimateRiverTool_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.WaterBeginOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_UltimateRiverTool_C::WaterBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "WaterBeginOverlap");

	Params::BP_UltimateRiverTool_C_WaterBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.WaterEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::WaterEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UltimateRiverTool_C", "WaterEndOverlap");

	Params::BP_UltimateRiverTool_C_WaterEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

