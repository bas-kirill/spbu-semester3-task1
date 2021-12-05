#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include "../../Headers/include/Vertex.h"

Vertex::Vertex(int num, float x1, float y1) : ClCircle(x1, y1) {
    this->num = num;
}

void Vertex::show(sf::RenderWindow *window) {
    ClCircle::show(window);

    sf::Font font;
    font.loadFromFile("../Others/OpenSans-Bold.ttf");

    std::string txt = std::to_string(num);
    sf::Text text;
    text.setString(txt);
    text.setFont(font);
    text.setFillColor(sf::Color::Red);
    text.setCharacterSize(30);
    text.setPosition(ClCircle::getX() + 10, ClCircle::getY() + 5);

    window->draw(text);
}

Vertex::~Vertex() {
    std::cout << "Destroying object of type Vertex";
}
