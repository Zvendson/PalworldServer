#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalStaticMeshImposterChunk_classes.hpp"
#include "PalServer/BP_PalStaticMeshImposterChunk_parameters.hpp"


namespace PalServer
{

// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.Dev_SetChunkVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalStaticMeshImposterChunk_C::Dev_SetChunkVisible(const bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalStaticMeshImposterChunk_C", "Dev_SetChunkVisible");

	Params::BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.ExecuteUbergraph_BP_PalStaticMeshImposterChunk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalStaticMeshImposterChunk_C::ExecuteUbergraph_BP_PalStaticMeshImposterChunk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalStaticMeshImposterChunk_C", "ExecuteUbergraph_BP_PalStaticMeshImposterChunk");

	Params::BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.OnSetChunkGridSize
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewChunkGridSize                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalStaticMeshImposterChunk_C::OnSetChunkGridSize(const int32 NewChunkGridSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalStaticMeshImposterChunk_C", "OnSetChunkGridSize");

	Params::BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize Parms{};

	Parms.NewChunkGridSize = NewChunkGridSize;

	UObject::ProcessEvent(Func, &Parms);
}

}

