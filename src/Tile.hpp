#pragma once
#include <SFML/Graphics.hpp>

struct Tile{
    static constexpr float SIDE_LENGTH = 30.0f;
    static const sf::Color DEFAULT_COLOR;

    sf::Color color = DEFAULT_COLOR;
    bool occupied = false;
};
