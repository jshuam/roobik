#include "Main.hpp"
#include "Managers/StateManager.hpp"
#include "States/MainMenuState.hpp"
#include "States/StateBase.hpp"

int main()
{
    rbk::StateManager stateManager;
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    stateManager.addState(std::move(std::make_unique<rbk::MainMenuState>()));

    while (window.isOpen() && stateManager.hasState())
    {
        const std::unique_ptr<rbk::StateBase>& currentState(stateManager.currentState());
        sf::Event event;

        while (window.pollEvent(event))
        {
            currentState->handleEvent(window, event);
        }

        currentState->render(window);
        window.display();
    }

    return 0;
}
