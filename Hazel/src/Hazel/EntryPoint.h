#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();

int  main(int argc,char** argv) 
{
	printf("Hazel Engine");
	auto app = Hazel::CreatApplication();
	app->Run();
	delete app;
}
#endif