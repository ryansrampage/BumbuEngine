#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace BumbuEngine {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 720);
		BE_CORE_TRACE(e);

		while (true);
	}
}