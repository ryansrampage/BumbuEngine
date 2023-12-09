#include "BumbuEngine.h"

BumbuEngine::BumbuEngine()
	:m_running { true }
{
}

int BumbuEngine::Execute()
{
	if (Init() == false)
	{
		return -1;
	}

	while (!GRAPHICS->ShouldWindowClose())
	{
		//Input
		INPUT->processInput(GRAPHICS->GetWindow());
		//Time (for now it can be event based (I'm lazy))
		
		//rendering commands
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//check and call events and swap the buffers
		glfwSwapBuffers(GRAPHICS->GetWindow());
		glfwPollEvents();
	}

	//Cleanup
	Cleanup();
	return 0;
}

bool BumbuEngine::Init()
{
	//Input init?
	if (!GRAPHICS->InitOpenGL())
	{
		return false;
	}

	return true;
}

void BumbuEngine::Cleanup()
{
	glfwTerminate();
}

void BumbuEngine::Quit()
{
	m_running = false;
}

bool BumbuEngine::GetRunning()
{
	return m_running;
}
