#include "Main.hpp"
#include "Managers/StateManager.hpp"
#include "States/MainMenuState.hpp"
#include "States/StateBase.hpp"
#include "States/TestGameState.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    rbk::StateManager::addState(std::move(std::make_unique<rbk::MainMenuState>()));
    rbk::StateManager::addState(std::move(std::make_unique<rbk::TestGameState>()));

    while (window.isOpen() && rbk::StateManager::hasState())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            rbk::StateManager::currentState()->handleEvent(window, event);
        }

        rbk::StateManager::currentState()->render(window);
        window.display();
    }

    return 0;
}
