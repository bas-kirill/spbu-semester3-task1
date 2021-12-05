#ifndef TASK1_VERTEX_H
#define TASK1_VERTEX_H

#include "ClCircle.h"

class Vertex : public ClCircle {
public:
    Vertex(int num, float x1, float y1);

    ~Vertex() override;

    void show(sf::RenderWindow *window) override;

private:
    int num;
};


#endif //TASK1_VERTEX_H