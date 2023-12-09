#include "GraphicsEngine.h"


GraphicsEngine* GraphicsEngine::instance()
{
	static GraphicsEngine* engine = new GraphicsEngine();
	return engine;
}

bool GraphicsEngine::InitOpenGL()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    m_window = glfwCreateWindow(1920, 1080, "BumbuEngine", NULL, NULL);
    if (m_window == NULL)
    {
        std::cout << "Failed to create GLFW window!" << std::endl;
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(m_window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialise GLAD" << std::endl;
        return false;
    }

    glViewport(0, 0, 1920, 1080);
    glfwSetFramebufferSizeCallback(m_window, OnWindowResize);

	return true;
}

GLFWwindow* GraphicsEngine::GetWindow()
{
    return m_window;
}

void GraphicsEngine::OnWindowResize(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}


