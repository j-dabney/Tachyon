#include "EntryPoint.hpp"
#include "Log.hpp"


int main(int argc, char** argv)
{
    TachyonEngine::Log::Init();

    auto app = TachyonEngine::CreateApplication();
    app->Run();
    delete app;
}
