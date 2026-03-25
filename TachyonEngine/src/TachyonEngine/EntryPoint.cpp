#include "EntryPoint.hpp"
#include "Log.hpp"


int main(int argc, char** argv)
{
    TachyonEngine::Log::Init();
    TC_CORE_INFO("Initialized Log!");
    int a = 5;
    TC_WARN("Uh oh. Var={0}", a);

    auto app = TachyonEngine::CreateApplication();
    app->Run();
    delete app;
}
