#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 800), "My window");
    window.setFramerateLimit(60);
    sf::RectangleShape rect(sf::Vector2f(100.0f, 200.0f));
    rect.setFillColor(sf::Color(255, 0, 0));


    sf::Color bg_color(0);
    float y = 0.0f;
    while (window.isOpen())
    {
        window.clear(bg_color);
        window.draw(rect);
        window.display();

        rect.setPosition(sf::Vector2f(100.0f, y));

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Down){
                    y += 1.0f;
                }
            }
        }
    }

    return 0;
}
