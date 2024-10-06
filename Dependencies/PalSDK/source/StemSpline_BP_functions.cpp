#include "PalServer/Basic.hpp"

#include "PalServer/StemSpline_BP_classes.hpp"
#include "PalServer/StemSpline_BP_parameters.hpp"


namespace PalServer
{

// Function StemSpline_BP.StemSpline_BP_C.(Bridge)_TraceTowardsDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RelativeNormal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HitSomething                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LastLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TraceDirection                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::_Bridge__TraceTowardsDirection(const struct FVector& StartLocation, const struct FVector& RelativeNormal, const struct FVector& Direction_0, bool* HitSomething, struct FVector* LastLocation, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* TraceDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "(Bridge)_TraceTowardsDirection");

	Params::StemSpline_BP_C__Bridge__TraceTowardsDirection Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.RelativeNormal = std::move(RelativeNormal);
	Parms.Direction_0 = std::move(Direction_0);

	UObject::ProcessEvent(Func, &Parms);

	if (HitSomething != nullptr)
		*HitSomething = Parms.HitSomething;

	if (LastLocation != nullptr)
		*LastLocation = std::move(Parms.LastLocation);

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (TraceDirection != nullptr)
		*TraceDirection = std::move(Parms.TraceDirection);
}


// Function StemSpline_BP.StemSpline_BP_C.[SubStem]-DoCheckSegment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RelativeNormal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentSubLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::_SubStem_MinusDoCheckSegment(const struct FVector& StartLocation, const struct FVector& RelativeNormal, int32 CurrentSubLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "[SubStem]-DoCheckSegment");

	Params::StemSpline_BP_C__SubStem_MinusDoCheckSegment Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.RelativeNormal = std::move(RelativeNormal);
	Parms.CurrentSubLevel = CurrentSubLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.AddMeshesAlongSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 SplineComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::AddMeshesAlongSpline(class USplineComponent* SplineComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "AddMeshesAlongSpline");

	Params::StemSpline_BP_C_AddMeshesAlongSpline Parms{};

	Parms.SplineComp = SplineComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.AddSkelMeshesAlongSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 SplineComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::AddSkelMeshesAlongSpline(class USplineComponent* SplineComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "AddSkelMeshesAlongSpline");

	Params::StemSpline_BP_C_AddSkelMeshesAlongSpline Parms{};

	Parms.SplineComp = SplineComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.AddSplineMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 SplineComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::AddSplineMeshes(class USplineComponent* SplineComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "AddSplineMeshes");

	Params::StemSpline_BP_C_AddSplineMeshes Parms{};

	Parms.SplineComponent = SplineComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.AddSplinePoints
// (Public, BlueprintCallable, BlueprintEvent)

void AStemSpline_BP_C::AddSplinePoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "AddSplinePoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StemSpline_BP.StemSpline_BP_C.AddSubStem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLoc                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartNormal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentSubLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::AddSubStem(const struct FVector& StartLoc, const struct FVector& StartNormal, int32 CurrentSubLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "AddSubStem");

	Params::StemSpline_BP_C_AddSubStem Parms{};

	Parms.StartLoc = std::move(StartLoc);
	Parms.StartNormal = std::move(StartNormal);
	Parms.CurrentSubLevel = CurrentSubLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.CheckIfContainsValueInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                                  Range__Min                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Range__Max                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Contains_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::CheckIfContainsValueInRange(TArray<double>& Array, double Range__Min, double Range__Max, bool* Contains_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "CheckIfContainsValueInRange");

	Params::StemSpline_BP_C_CheckIfContainsValueInRange Parms{};

	Parms.Array = std::move(Array);
	Parms.Range__Min = Range__Min;
	Parms.Range__Max = Range__Max;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Contains_ != nullptr)
		*Contains_ = Parms.Contains_;
}


// Function StemSpline_BP.StemSpline_BP_C.CheckIfContainsVectorInDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                                  InDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Contains_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::CheckIfContainsVectorInDistance(TArray<struct FVector>& Array, double InDistance, const struct FVector& Vector, bool* Contains_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "CheckIfContainsVectorInDistance");

	Params::StemSpline_BP_C_CheckIfContainsVectorInDistance Parms{};

	Parms.Array = std::move(Array);
	Parms.InDistance = InDistance;
	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Contains_ != nullptr)
		*Contains_ = Parms.Contains_;
}


// Function StemSpline_BP.StemSpline_BP_C.ConstructionLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStemSpline_BP_C::ConstructionLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "ConstructionLogic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StemSpline_BP.StemSpline_BP_C.DoCheckSegment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RelativeNormal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::DoCheckSegment(const struct FVector& StartLocation, const struct FVector& RelativeNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "DoCheckSegment");

	Params::StemSpline_BP_C_DoCheckSegment Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.RelativeNormal = std::move(RelativeNormal);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StemSpline_BP.StemSpline_BP_C.FindBridgeEdge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaxSegmentChecks                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FromWhere                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartNormal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EdgeLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EdgeNormal                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::FindBridgeEdge(int32 MaxSegmentChecks, const struct FVector& FromWhere, const struct FVector& StartNormal, const struct FVector& Direction_0, bool* Found, struct FVector* EdgeLocation, struct FVector* EdgeNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "FindBridgeEdge");

	Params::StemSpline_BP_C_FindBridgeEdge Parms{};

	Parms.MaxSegmentChecks = MaxSegmentChecks;
	Parms.FromWhere = std::move(FromWhere);
	Parms.StartNormal = std::move(StartNormal);
	Parms.Direction_0 = std::move(Direction_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (EdgeLocation != nullptr)
		*EdgeLocation = std::move(Parms.EdgeLocation);

	if (EdgeNormal != nullptr)
		*EdgeNormal = std::move(Parms.EdgeNormal);
}


// Function StemSpline_BP.StemSpline_BP_C.FindClosestValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          InArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                                  ToValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClosestValueIndex_                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::FindClosestValue(TArray<double>& InArray, double ToValue, int32* ClosestValueIndex_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "FindClosestValue");

	Params::StemSpline_BP_C_FindClosestValue Parms{};

	Parms.InArray = std::move(InArray);
	Parms.ToValue = ToValue;

	UObject::ProcessEvent(Func, &Parms);

	InArray = std::move(Parms.InArray);

	if (ClosestValueIndex_ != nullptr)
		*ClosestValueIndex_ = Parms.ClosestValueIndex_;
}


// Function StemSpline_BP.StemSpline_BP_C.FindClosestVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  InArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          ToVector                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClosestValueIndex_                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::FindClosestVector(TArray<struct FVector>& InArray, const struct FVector& ToVector, int32* ClosestValueIndex_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "FindClosestVector");

	Params::StemSpline_BP_C_FindClosestVector Parms{};

	Parms.InArray = std::move(InArray);
	Parms.ToVector = std::move(ToVector);

	UObject::ProcessEvent(Func, &Parms);

	InArray = std::move(Parms.InArray);

	if (ClosestValueIndex_ != nullptr)
		*ClosestValueIndex_ = Parms.ClosestValueIndex_;
}


// Function StemSpline_BP.StemSpline_BP_C.FindStartPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLoc                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::FindStartPoint(struct FVector* StartLoc, struct FVector* StartNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "FindStartPoint");

	Params::StemSpline_BP_C_FindStartPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartLoc != nullptr)
		*StartLoc = std::move(Parms.StartLoc);

	if (StartNormal != nullptr)
		*StartNormal = std::move(Parms.StartNormal);
}


// Function StemSpline_BP.StemSpline_BP_C.SearchForEdge
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SearchStartLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SearchDirectionNormal                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForSubstem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FoundAnEdge_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FoundEdgeLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FoundEdgeNormal                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::SearchForEdge(const struct FVector& SearchStartLocation, const struct FVector& SearchDirectionNormal, bool ForSubstem, bool* FoundAnEdge_, struct FVector* FoundEdgeLocation, struct FVector* FoundEdgeNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "SearchForEdge");

	Params::StemSpline_BP_C_SearchForEdge Parms{};

	Parms.SearchStartLocation = std::move(SearchStartLocation);
	Parms.SearchDirectionNormal = std::move(SearchDirectionNormal);
	Parms.ForSubstem = ForSubstem;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundAnEdge_ != nullptr)
		*FoundAnEdge_ = Parms.FoundAnEdge_;

	if (FoundEdgeLocation != nullptr)
		*FoundEdgeLocation = std::move(Parms.FoundEdgeLocation);

	if (FoundEdgeNormal != nullptr)
		*FoundEdgeNormal = std::move(Parms.FoundEdgeNormal);
}


// Function StemSpline_BP.StemSpline_BP_C.SeekForBridge
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLoc                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartNormal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bridgeBuilt                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  bridgePoints                                           (Parm, OutParm)
// struct FVector                          NewSurfaceNormal                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::SeekForBridge(const struct FVector& StartLoc, const struct FVector& StartNormal, bool* bridgeBuilt, TArray<struct FVector>* bridgePoints, struct FVector* NewSurfaceNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "SeekForBridge");

	Params::StemSpline_BP_C_SeekForBridge Parms{};

	Parms.StartLoc = std::move(StartLoc);
	Parms.StartNormal = std::move(StartNormal);

	UObject::ProcessEvent(Func, &Parms);

	if (bridgeBuilt != nullptr)
		*bridgeBuilt = Parms.bridgeBuilt;

	if (bridgePoints != nullptr)
		*bridgePoints = std::move(Parms.bridgePoints);

	if (NewSurfaceNormal != nullptr)
		*NewSurfaceNormal = std::move(Parms.NewSurfaceNormal);
}


// Function StemSpline_BP.StemSpline_BP_C.SetMainDirectionVector
// (Public, BlueprintCallable, BlueprintEvent)

void AStemSpline_BP_C::SetMainDirectionVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "SetMainDirectionVector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StemSpline_BP.StemSpline_BP_C.TraceDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RelativeNormal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForBridgeSeek                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HitSomething                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::TraceDown(const struct FVector& StartLocation, const struct FVector& RelativeNormal, bool ForBridgeSeek, struct FVector* HitLocation, struct FVector* HitNormal, bool* HitSomething)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "TraceDown");

	Params::StemSpline_BP_C_TraceDown Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.RelativeNormal = std::move(RelativeNormal);
	Parms.ForBridgeSeek = ForBridgeSeek;

	UObject::ProcessEvent(Func, &Parms);

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (HitSomething != nullptr)
		*HitSomething = Parms.HitSomething;
}


// Function StemSpline_BP.StemSpline_BP_C.TraceTowardsDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RelativeNormal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForSubstem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LastLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TraceDirection                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HitSomething                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TargetReached                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::TraceTowardsDirection(const struct FVector& StartLocation, const struct FVector& RelativeNormal, bool ForSubstem, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* LastLocation, struct FVector* TraceDirection, bool* HitSomething, bool* TargetReached)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "TraceTowardsDirection");

	Params::StemSpline_BP_C_TraceTowardsDirection Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.RelativeNormal = std::move(RelativeNormal);
	Parms.ForSubstem = ForSubstem;

	UObject::ProcessEvent(Func, &Parms);

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (LastLocation != nullptr)
		*LastLocation = std::move(Parms.LastLocation);

	if (TraceDirection != nullptr)
		*TraceDirection = std::move(Parms.TraceDirection);

	if (HitSomething != nullptr)
		*HitSomething = Parms.HitSomething;

	if (TargetReached != nullptr)
		*TargetReached = Parms.TargetReached;
}


// Function StemSpline_BP.StemSpline_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStemSpline_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StemSpline_BP.StemSpline_BP_C.WorldLocToSplineTimeApprox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldLoc                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Iterations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DistanceTolerance_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 SplineComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  StartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EndTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  bestTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStemSpline_BP_C::WorldLocToSplineTimeApprox(const struct FVector& WorldLoc, int32 Iterations, double DistanceTolerance_, class USplineComponent* SplineComponent, double StartTime, double EndTime, double* bestTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StemSpline_BP_C", "WorldLocToSplineTimeApprox");

	Params::StemSpline_BP_C_WorldLocToSplineTimeApprox Parms{};

	Parms.WorldLoc = std::move(WorldLoc);
	Parms.Iterations = Iterations;
	Parms.DistanceTolerance_ = DistanceTolerance_;
	Parms.SplineComponent = SplineComponent;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	UObject::ProcessEvent(Func, &Parms);

	if (bestTime != nullptr)
		*bestTime = Parms.bestTime;
}

}

