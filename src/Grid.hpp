#pragma once
#include "Tile.hpp"
#include <array>

class Grid{
private:
    static constexpr int WIDTH_IN_TILES = 10;
    static constexpr int HEIGHT_IN_TILES = 20;
    static constexpr int TILE_COUNT = HEIGHT_IN_TILES * WIDTH_IN_TILES;

    static constexpr float ORIGIN_X = 300.0f;
    static constexpr float ORIGIN_Y = 0.0f;
    static const sf::Vector2f ORIGIN;


    std::array<Tile, TILE_COUNT> tiles;


public:
    Grid() = default;

    void setTile(sf::Vector2i const& position, sf::Color const& color);
    Tile const& getTileAt(sf::Vector2i const& position) const;
    Tile& getTileAt(sf::Vector2i const& position);


    void draw(sf::RenderWindow& window) const;
};
