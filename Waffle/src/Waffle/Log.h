#pragma once
#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"
namespace Waffle {
	class WAFFLE_API Log {
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }
	};
}

#define WF_CORE_CRITICAL(...) ::Waffle::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define WF_CORE_ERROR(...) ::Waffle::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WF_CORE_WARN(...) ::Waffle::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WF_CORE_INFO(...) ::Waffle::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WF_CORE_TRACE(...) ::Waffle::Log::GetCoreLogger()->trace(__VA_ARGS__)


#define WF_CRITICAL(...) ::Waffle::Log::GetClientLogger()->critical(__VA_ARGS__)
#define WF_ERROR(...) ::Waffle::Log::GetClientLogger()->error(__VA_ARGS__)
#define WF_WARN(...) ::Waffle::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WF_INFO(...) ::Waffle::Log::GetClientLogger()->info(__VA_ARGS__)
#define WF_TRACE(...) ::Waffle::Log::GetClientLogger()->trace(__VA_ARGS__)
