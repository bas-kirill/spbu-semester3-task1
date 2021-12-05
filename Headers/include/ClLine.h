#ifndef TASK1_CLLINE_H
#define TASK1_CLLINE_H

#include "ClDraw.h"

class ClLine : public ClDraw {
public:
    ClLine(float x1, float y1, float x2, float y2);

    virtual ~ClLine();

    void show(sf::RenderWindow *window) override;

    float getX1() const;

    void setX1(float x1);

    float getY1() const;

    void setY1(float y1);

    float getX2() const;

    void setX2(float x2);

    float getY2() const;

    void setY2(float y2);

private:
    float x1;
    float y1;
    float x2;
    float y2;
};

#endif //TASK1_CLLINE_H