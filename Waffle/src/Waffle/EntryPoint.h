#pragma once
#include "Application.h"
#include "Log.h"

#ifdef WF_PLATFORM_WINDOWS

//extern Waffle::Application* Waffle::CreateApplication();

int main(int argc, char** argv[]) {

	Waffle::Log::Init();
	WF_CORE_WARN("This works from App");
	WF_WARN("This works from WAffle");


	auto app = Waffle::CreateApplication();
	app->Run();
	delete app;
	
	return 0;
}
#endif // WF_PLATFORM_WINDOWS
