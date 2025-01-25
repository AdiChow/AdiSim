#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace AdiSim {

	class ADISIM_API Log
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
#define AS_CORE_TRACE(...)    ::AdiSim::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AS_CORE_INFO(...)     ::AdiSim::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AS_CORE_WARN(...)     ::AdiSim::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AS_CORE_ERROR(...)    ::AdiSim::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AS_CORE_FATAL(...)    ::AdiSim::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define AS_TRACE(...)	      ::AdiSim::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AS_INFO(...)	      ::AdiSim::Log::GetClientLogger()->info(__VA_ARGS__)
#define AS_WARN(...)	      ::AdiSim::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AS_ERROR(...)	      ::AdiSim::Log::GetClientLogger()->error(__VA_ARGS__)
#define AS_FATAL(...)	      ::AdiSim::Log::GetClientLogger()->fatal(__VA_ARGS__)