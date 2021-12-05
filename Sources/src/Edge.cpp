#include <iostream>
#include "../../Headers/include/Edge.h"

Edge::Edge(float x1, float y1, float x2, float y2) : ClLine(x1, y1, x2, y2) {}

void Edge::show(sf::RenderWindow *window) {
    ClLine::show(window);
}

Edge::~Edge() {
    std::cout << "Destroying object of type Edge";
}