#pragma once

#include <iostream>
#include "GraphicsEngine.h"
#include "InputEngine.h"

class BumbuEngine
{
private:
	bool m_running;
public:
	BumbuEngine();
	int Execute();
	bool Init();
	void Cleanup();
	void Quit();
	bool GetRunning();
};
