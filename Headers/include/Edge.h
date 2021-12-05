#ifndef TASK1_EDGE_H
#define TASK1_EDGE_H

#include "ClLine.h"

class Edge : public ClLine {
public:
    Edge(float x1, float y1, float x2, float y2);

    ~Edge() override;

    void show(sf::RenderWindow *window) override;
};


#endif //TASK1_EDGE_H