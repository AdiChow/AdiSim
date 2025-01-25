#include <AdiSim.h>

class ExampleLayer : public AdiSim::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		AS_INFO("ExampleLayer::Update");
	}

	void OnEvent(AdiSim::Event& event) override
	{
		AS_TRACE("{0}", event.ToString());
	}

};

class Sandbox : public AdiSim::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

AdiSim::Application* AdiSim::CreateApplication()
{
	return new Sandbox();
}