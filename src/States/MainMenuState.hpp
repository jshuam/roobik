#pragma once

#include <vector>

#include "StateBase.hpp"

namespace rbk
{
class MainMenuState : public StateBase
{
public:
    ~MainMenuState() = default;
    MainMenuState();

    virtual void handleEvent(sf::Window& window, sf::Event event);
    virtual void handleInput();
    virtual void update(sf::Time deltaTime);
    virtual void render(sf::RenderTarget& renderer);

private:
    sf::Texture texture;
    std::vector<sf::Sprite> sprites;
};
}
