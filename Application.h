#pragma once

#include <stdio.h>

namespace Engine {

    class Application {
        public:
            Application();
            virtual ~Application();

            void Run();
    };

    Application* CreateApplication();

}