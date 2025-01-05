#include <AdiSim.h>
class Sandbox : public AdiSim::Application
{
public:
	
	Sandbox()
	{


	}
	~Sandbox()
	{

	}
};
AdiSim::Application* AdiSim::CreateApplication()
{
	return  new Sandbox();
}
