#ifndef TASK1_CLDRAW_H
#define TASK1_CLDRAW_H

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>

class ClDraw {
public:
    virtual void show(sf::RenderWindow *window) = 0;
};


#endif //TASK1_CLDRAW_H