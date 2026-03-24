#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace Tachyon {

class Log
{
private:
    static std::shared_ptr<spdlog::logger> s_coreLogger;
    static std::shared_ptr<spdlog::logger> s_clientLogger;

public:
    static void Init();

    static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_coreLogger; }
    static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_clientLogger; }
};

}

// Core Log Macros
#define TC_CORE_TRACE(...)    ::Tachyon::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TC_CORE_INFO(...)     ::Tachyon::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TC_CORE_WARN(...)     ::Tachyon::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TC_CORE_ERROR(...)    ::Tachyon::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TC_CORE_FATAL(...)    ::Tachyon::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define TC_TRACE(...)         ::Tachyon::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TC_INFO(...)          ::Tachyon::Log::GetClientLogger()->info(__VA_ARGS__)
#define TC_WARN(...)          ::Tachyon::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TC_ERROR(...)         ::Tachyon::Log::GetClientLogger()->error(__VA_ARGS__)
#define TC_FATAL(...)         ::Tachyon::Log::GetClientLogger()->fatal(__VA_ARGS__)
