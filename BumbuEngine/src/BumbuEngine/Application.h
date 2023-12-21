#pragma once

#include "Core.h"

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


