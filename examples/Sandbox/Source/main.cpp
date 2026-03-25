#include "TachyonEngine.hpp"

class Sandbox : public TachyonEngine::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

TachyonEngine::Application* TachyonEngine::CreateApplication()
{
    TC_INFO("Sandbox started.");
    return new Sandbox;
}
