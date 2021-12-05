#ifndef TASK1_CLCIRCLE_H
#define TASK1_CLCIRCLE_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "ClDraw.h"

class ClCircle : public ClDraw {
public:
    ClCircle(float x, float y);

    virtual ~ClCircle();

    void show(sf::RenderWindow *window) override;

    float getX();

    void setX(float x);

    float getY();

    void setY(float y);

private:
    float x;
    float y;
    int radius = 20;
};


#endif //TASK1_CLCIRCLE_H