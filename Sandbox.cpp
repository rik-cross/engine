#include "Engine.h"

class Sandbox : public Engine::Application {
    /* not needed until overridden.
    public:
        Sandbox() {

        }
    ~Sandbox() {

        }
    */
};

Engine::Application* Engine::CreateApplication() {
    return new Sandbox();
}
