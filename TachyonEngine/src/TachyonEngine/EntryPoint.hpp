#pragma once

#include "Application.hpp"

#ifndef __linux__
    #error "TachyonEngine only support Linux at this time"
#endif

TachyonEngine::Application* TachyonEngine::CreateApplication();

int main(int argc, char** argv);
