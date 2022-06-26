#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hmmm::Application* Hmmm::CreateApplication();


	int main(int argc , char**argv)
	{
		auto app = Hmmm::CreateApplication();
		app->Run();
		delete app;
	}
#endif