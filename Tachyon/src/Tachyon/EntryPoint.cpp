#include "EntryPoint.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Tachyon Started\n";

    auto app = Tachyon::CreateApplication();

    app->Run();

    delete app;
}
