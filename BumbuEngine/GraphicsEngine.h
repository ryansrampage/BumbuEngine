#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GraphicsEngine
{
private:
	GLFWwindow* m_window;
	static void OnWindowResize(GLFWwindow* window, int width, int height);
public:
	static GraphicsEngine* instance();
	bool InitOpenGL();
	GLFWwindow* GetWindow();
	void SetWindowToClose();
	int ShouldWindowClose();
};

#define GRAPHICS GraphicsEngine::instance()