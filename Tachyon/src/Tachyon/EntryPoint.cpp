#include "EntryPoint.h"
#include "Log.h"


int main(int argc, char** argv)
{
    Tachyon::Log::Init();
    TC_CORE_INFO("Initialized Log!");
    int a = 5;
    TC_WARN("Uh oh. Var={0}", a);

    auto app = Tachyon::CreateApplication();
    app->Run();
    delete app;
}
