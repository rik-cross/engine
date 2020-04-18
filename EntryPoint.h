#pragma once

#include "Engine.h"

Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {

    Engine::Log::Init();
    ENGINE_CORE_WARN("Initalised Logger");
    ENGINE_INFO("Hello");

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;

}
