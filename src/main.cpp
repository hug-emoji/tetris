#include "Grid.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "My window");
    window.setFramerateLimit(60);


    Grid grid;
    grid.setTile(
        sf::Vector2i(4, 3),
        sf::Color::Blue
    );

    sf::Color bg_color(0);
    while (window.isOpen())
    {
        window.clear(bg_color);
        grid.draw(window);
        window.display();


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Down){
                }
            }
        }
    }

    return 0;
}
