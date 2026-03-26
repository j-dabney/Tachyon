#pragma once

#include "PlatformDetection.h"
#include "Application.hpp"

#ifdef TC_PLATFORM_WINDOWS

extern TachyonEngine::Application* TachyonEngine::CreateApplication();

int main(int argc, char** argv);

#endif

#ifdef TC_PLATFORM_LINUX

extern TachyonEngine::Application* TachyonEngine::CreateApplication();

int main(int argc, char** argv);

#endif
