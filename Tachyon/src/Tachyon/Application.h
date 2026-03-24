#pragma once

int main(int argc, char** argv);

namespace Tachyon {

class Application
{
private:
    static Application* s_instance;

public:
    Application() {}
    virtual ~Application() {}

    static Application& Get() { return *s_instance; };

private:
    void Run();

    friend int ::main(int argc, char** argv);
};

// Defined in CLIENT
Application* CreateApplication();

}
