#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace BumbuEngine {
	class BUMBUENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in Client
	Application* CreateApplication();
}


