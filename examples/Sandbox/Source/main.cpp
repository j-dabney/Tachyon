#include "Tachyon.h"

class Sandbox : public Tachyon::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

Tachyon::Application* Tachyon::CreateApplication()
{
    return new Sandbox;
}
