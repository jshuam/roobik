#pragma once

namespace rbk
{
class StateBase
{
public:
    virtual void handleEvent(sf::Event event) = 0;
    virtual void handleInput() = 0;
    virtual void update(sf::Time deltaTime) = 0;
    virtual void render(sf::RenderTarget& renderer) = 0;
};
}