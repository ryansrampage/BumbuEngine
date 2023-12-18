#include <BumbuEngine.h>

class Sandbox : public BumbuEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

BumbuEngine::Application* BumbuEngine::CreateApplication()
{
	return new Sandbox();
}