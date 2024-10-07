#pragma once
#include "Tile.hpp"
#include <array>

class Grid{
private:
    static constexpr int GRID_WIDTH_IN_TILES = 10;
    static constexpr int GRID_HEIGHT_IN_TILES = 20;
    static constexpr int GRID_TILE_COUNT = GRID_HEIGHT_IN_TILES * GRID_WIDTH_IN_TILES;

    static constexpr float GRID_ORIGIN_X = 300.0f;
    static constexpr float GRID_ORIGIN_Y = 0.0f;
    static const sf::Vector2f GRID_ORIGIN;


    std::array<Tile, GRID_TILE_COUNT> tiles;


public:
    Grid() = default;

    void setTile(sf::Vector2i const& position, sf::Color const& color);

    void draw() const;
};
