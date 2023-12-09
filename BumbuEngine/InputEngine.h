#pragma once
#include "GraphicsEngine.h"

class InputEngine 
{
private:
public:
	static InputEngine* instance();
	void processInput(GLFWwindow* window);
};

#define INPUT InputEngine::instance()