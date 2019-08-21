#include "MainMenuState.hpp"

namespace rbk
{
MainMenuState::MainMenuState()
{
    texture.loadFromFile("content/sfml.png");

    for (int i = 0; i < 1000; i++)
    {
        sf::Sprite sprite;
        sprite.setTexture(texture);
        sprite.setPosition(sf::Vector2f(1.0f * i, 1.0f * i));
        sprites.push_back(std::move(sprite));
    }
}

void MainMenuState::handleEvent(sf::Window& window, sf::Event event)
{
    if (event.type == sf::Event::Closed)
        window.close();
}

void MainMenuState::handleInput()
{
}

void MainMenuState::update(sf::Time deltaTime)
{
}

void MainMenuState::render(sf::RenderTarget& renderer)
{
    renderer.clear(sf::Color::Blue);
    for (const auto& sprite : sprites)
    {
        renderer.draw(sprite);
    }
}
}
