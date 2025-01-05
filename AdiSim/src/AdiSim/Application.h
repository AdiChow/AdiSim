#pragma once

#include "Core.h"

namespace AdiSim 
{
	
	class ADISIM_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
		
	};
	Application* CreateApplication();
}
