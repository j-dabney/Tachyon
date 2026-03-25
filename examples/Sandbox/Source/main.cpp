#include "TachyonEngine.hpp"

class Sandbox : public TachyonEngine::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

TachyonEngine::Application* TachyonEngine::CreateApplication()
{
    return new Sandbox;
}
