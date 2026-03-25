#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace TachyonEngine {

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
#define TC_CORE_TRACE(...)    ::TachyonEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TC_CORE_INFO(...)     ::TachyonEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TC_CORE_WARN(...)     ::TachyonEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TC_CORE_ERROR(...)    ::TachyonEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TC_CORE_FATAL(...)    ::TachyonEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define TC_TRACE(...)         ::TachyonEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TC_INFO(...)          ::TachyonEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define TC_WARN(...)          ::TachyonEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TC_ERROR(...)         ::TachyonEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define TC_FATAL(...)         ::TachyonEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
