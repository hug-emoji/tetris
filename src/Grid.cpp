#include "Grid.hpp"
#include <cassert>

const sf::Vector2f Grid::ORIGIN {
    Grid::ORIGIN_X,
    Grid::ORIGIN_Y
};

Tile const& Grid::getTileAt(sf::Vector2i const& position) const{
    assert(position.x >= 0 && position.x < WIDTH_IN_TILES);
    assert(position.y >= 0 && position.y < HEIGHT_IN_TILES);

    int index = WIDTH_IN_TILES * position.y + position.x;
    return tiles[index];
}

Tile& Grid::getTileAt(sf::Vector2i const& position){
    assert(position.x >= 0 && position.x < WIDTH_IN_TILES);
    assert(position.y >= 0 && position.y < HEIGHT_IN_TILES);

    int index = WIDTH_IN_TILES * position.y + position.x;
    return tiles[index];
}

void Grid::setTile(sf::Vector2i const& position, sf::Color const& color){
    Tile& tile = getTileAt(position);

    tile.color = color;
    tile.occupied = true;
}

void Grid::draw(sf::RenderWindow& window) const{
    sf::RectangleShape tileRect { 
        sf::Vector2f(Tile::SIDE_LENGTH, Tile::SIDE_LENGTH)
    };

    for(int i = HEIGHT_IN_TILES; i > 0; i--){
        for(int j = 0; j < WIDTH_IN_TILES; j++){
            tileRect.setFillColor(
                getTileAt(sf::Vector2i(i, j)).color
            );
            tileRect.setPosition(
                sf::Vector2f(
                    i, j
                ) * Tile::SIDE_LENGTH
            );

            window.draw(tileRect);

        }
    }

}
