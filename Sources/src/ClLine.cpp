#include "../../Headers/include/ClLine.h"
#include <SFML/Graphics.hpp>
#include <iostream>

ClLine::ClLine(float x1, float y1, float x2, float y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

void ClLine::show(sf::RenderWindow *window) {
    sf::VertexArray line(sf::Lines, 2);
    line[0].position = sf::Vector2f(x1 + 25, y1 + 25);
    line[1].position = sf::Vector2f(x2 + 25, y2 + 25);
    window->draw(line);
}

ClLine::~ClLine() {
    std::cout << "Destroying object of type ClLine";
}

float ClLine::getX1() const {
    return x1;
}

void ClLine::setX1(float x1) {
    ClLine::x1 = x1;
}

float ClLine::getY1() const {
    return y1;
}

void ClLine::setY1(float y1) {
    ClLine::y1 = y1;
}

float ClLine::getX2() const {
    return x2;
}

void ClLine::setX2(float x2) {
    ClLine::x2 = x2;
}

float ClLine::getY2() const {
    return y2;
}

void ClLine::setY2(float y2) {
    ClLine::y2 = y2;
}