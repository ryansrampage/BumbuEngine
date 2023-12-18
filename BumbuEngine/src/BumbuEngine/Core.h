#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define BUMBUENGINE_API __declspec(dllexport)
	#else
		#define BUMBUENGINE_API __declspec(dllimport)
	#endif
#else
	#error BumbuEngine only supports Windows!
#endif // BE_PLATFORM_WINDOWS
