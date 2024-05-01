#include <iostream>
#include <SFML/Graphics.hpp>
#include "RadarObject.h"

int main()
{
    auto window = sf::RenderWindow{ { 800u, 800u }, "CMake SFML Project" };
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        RadarObject testObject;

        window.clear();



        window.display();
    }
}