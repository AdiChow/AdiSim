#pragma once

#ifdef AS_PLATFORM_WINDOWS

extern AdiSim::Application* AdiSim::CreateApplication();
int main(int argc, char** argv)
{
	auto app = AdiSim::CreateApplication();
	app->Run();
	delete app;
	 

}

#endif