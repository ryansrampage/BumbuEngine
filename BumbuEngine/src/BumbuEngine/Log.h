#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace BumbuEngine {

	class BUMBUENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define BE_CORE_TRACE(...)    ::BumbuEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_INFO(...)     ::BumbuEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)     ::BumbuEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)    ::BumbuEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_CRITICAL(...) ::BumbuEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BE_TRACE(...)         ::BumbuEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BE_INFO(...)          ::BumbuEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_WARN(...)          ::BumbuEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_ERROR(...)         ::BumbuEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_CRITICAL(...)      ::BumbuEngine::Log::GetClientLogger()->critical(__VA_ARGS__)
