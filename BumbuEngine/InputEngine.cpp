#include "InputEngine.h"

InputEngine* InputEngine::instance()
{
	static InputEngine* engine = new InputEngine();
	return engine;
}

void InputEngine::processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		GRAPHICS->SetWindowToClose();
	}
}
