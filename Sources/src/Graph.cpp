#include <stdlib.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>
#include "../../Headers/include/Graph.h"
#include "../../Headers/include/Edge.h"
#include "../../Headers/include/Vertex.h"

Graph::Graph(int **g, int n) {
    this->g = (int **) malloc(sizeof(int *) * n);
    for (int i = 0; i < n; ++i) {
        this->g[i] = (int *) malloc(sizeof(int) * n);
        for (int j = 0; j < n; ++j) {
            this->g[i][j] = g[i][j];
        }
    }
    this->n = n;
    this->isDicotyledonous = false;
}

void Graph::check() {
    bool ok = true;
    std::vector<int> part_temp(n, -1);
    part = part_temp;
    std::vector<int> q(n);
    for (int st = 0; st < n; ++st) {
        if (part[st] == -1) {
            int h = 0, t = 0;
            q[t++] = st;
            part[st] = 0;
            while (h < t) {
                int v = q[h++];
                for (size_t i = 0; i < n; ++i) {
                    int to = g[v][i];
                    if (to != 0) {
                        if (part[i] == -1) {
                            part[i] = !part[v], q[t++] = i;
                        } else {
                            ok &= part[i] != part[v];
                        }
                    }
                }
            }
        }
    }

    isDicotyledonous = ok;
    if (isDicotyledonous) {
        std::cout << "Граф двудольный";
    } else {
        std::cout << "Граф не двудольный";
    }
}

void Graph::show(sf::RenderWindow *window) {
    while (window->isOpen()) {
        sf::Event event{};
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        if (isDicotyledonous) {
            showDicotyledonous(window);
        } else {
            showNotDicotyledonous(window);
        }
        window->display();
    }
}

void Graph::showNotDicotyledonous(sf::RenderWindow *window) {
    float ugl = (2 * (float) M_PI) / (float) n;
    std::vector<coor *> edges;
    float x1, y1;

    for (int i = 0; i < n; ++i) {

        x1 = (float) (300 * cos(((float) i) * ugl) + 400);
        y1 = (float) (300 * sin(((float) i) * ugl) + 400);
        auto vertex = new Vertex(i + 1, x1, y1);
        vertex->show(window);
        edges.push_back(new coor(x1, y1));
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] > 0) {
                auto edge = new Edge(edges[i]->x, edges[i]->y, edges[j]->x, edges[j]->y);
                edge->show(window);
            }
        }
    }
}

void Graph::showDicotyledonous(sf::RenderWindow *window) {
    std::vector<coor *> edges;
    float x1, y1;
    float part1 = 0;
    float part2 = 0;

    for (int i = 0; i < n; ++i) {
        if (part[i] == 0) {
            x1 = 100;
            y1 = 100 + part1 * 150;
            part1++;
        } else {
            x1 = 700;
            y1 = 100 + part2 * 150;
            part2++;
        }

        auto vertex = new Vertex(i + 1, x1, y1);
        vertex->show(window);
        edges.push_back(new coor(x1, y1));
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] > 0) {
                auto edge = new Edge(edges[i]->x, edges[i]->y, edges[j]->x, edges[j]->y);
                edge->show(window);
            }
        }
    }
}

Graph::~Graph() {
    for (int i = 0; i < n; ++i) {
        delete[] g[i];
    }

    delete[] g;

    std::cout << "Destroying object of type Graph";
}