#pragma once
#include "Application.h"
#ifdef WF_PLATFORM_WINDOWS

extern Waffle::Application* Waffle::CreateApplication();

int main(int argc, char** ) {
	auto app = Waffle::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
#endif // WF_PLATFORM_WINDOWS
