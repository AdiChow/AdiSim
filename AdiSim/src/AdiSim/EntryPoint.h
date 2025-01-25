#pragma once

#ifdef AS_PLATFORM_WINDOWS

extern AdiSim::Application* AdiSim::CreateApplication();

int main(int argc, char** argv)
{
	AdiSim::Log::Init();
	AS_CORE_WARN("Initialized Log!");
	int a = 5;
	AS_INFO("Hello! Var={0}", a);

	auto app = AdiSim::CreateApplication();
	app->Run();
	delete app;
}

#endif