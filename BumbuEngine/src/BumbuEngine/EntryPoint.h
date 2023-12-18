#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern BumbuEngine::Application* BumbuEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BumbuEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif