#include "EntryPoint.hpp"
#include "Log.hpp"

#ifdef TC_PLATFORM_WINDOWS

int main(int argc, char** argv)
{
    TachyonEngine::Log::Init();

    auto app = TachyonEngine::CreateApplication();
    app->Run();
    delete app;
}

#endif

#ifdef TC_PLATFORM_LINUX

int main(int argc, char** argv)
{
    TachyonEngine::Log::Init();

    auto app = TachyonEngine::CreateApplication();
    app->Run();
    delete app;
}

#endif
