#ifndef TASK1_GRAPH_H
#define TASK1_GRAPH_H

#include "ClDraw.h"

class Graph : public ClDraw {
public:
    Graph(int **g, int n);

    virtual ~Graph();

    void check();

    void show(sf::RenderWindow *window) override;

    void showDicotyledonous(sf::RenderWindow *window);

    void showNotDicotyledonous(sf::RenderWindow *window);

private:
    struct coor {
        float x;
        float y;

        coor(float x1, float y1) : x(x1), y(y1) {};
    };

    int **g;
    int n;
    bool isDicotyledonous;
    std::vector<int> part;
};


#endif //TASK1_GRAPH_H