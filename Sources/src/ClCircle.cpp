#include "../../Headers/include/ClCircle.h"
#include <SFML/Graphics.hpp>
#include <iostream>

ClCircle::ClCircle(float x, float y) {
    this->x = x;
    this->y = y;
}

float ClCircle::getX() {
    return x;
}

void ClCircle::setX(float x) {
    ClCircle::x = x;
}

float ClCircle::getY() {
    return y;
}

void ClCircle::setY(float y) {
    ClCircle::y = y;
}


void ClCircle::show(sf::RenderWindow *window) {
    sf::CircleShape shape(this->radius);
    shape.setPosition(this->x, this->y);
    window->draw(shape);
}

ClCircle::~ClCircle() {
    std::cout << "Destroying object of type ClCircle";
}