#include "PalSDK/Basic.hpp"

#include "PalSDK/MovieRenderPipelineSettings_classes.hpp"
#include "PalSDK/MovieRenderPipelineSettings_parameters.hpp"


namespace PalSDK
{

// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*                   ForPipeline                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBurnInWidget::OnOutputFrameStarted(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoviePipelineBurnInWidget", "OnOutputFrameStarted");

	Params::MoviePipelineBurnInWidget_OnOutputFrameStarted Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);
}

}

