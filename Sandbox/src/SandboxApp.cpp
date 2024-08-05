//#include "../../Waffle/src/Waffle/Application.h"
#include <Waffle.h>

class Sandbox : public Waffle::Application {
public:
	Sandbox() {
		//Waffle::Log::GetClientLogger();
	}
	~Sandbox() {

	}
};

Waffle::Application* Waffle::CreateApplication() {
	return new Sandbox();
}
