#include "Main.hpp"
#include "States/MainMenuState.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    rbk::MainMenuState mainMenu;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        mainMenu.render(window);
        window.display();
    }

    return 0;
}
