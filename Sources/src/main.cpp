#include <iostream>
#include "../../Headers/include/Graph.h"

/*
4
0 1 0 1
1 0 0 1
0 0 0 1
1 1 1 0
*/

/*
4
0 1 0 0
1 0 1 0
0 0 0 1
0 0 1 0
*/

/*
5
0 1 0 0 1
1 0 1 0 1
0 1 0 1 0
0 0 1 0 1
1 1 0 1 0
*/

/*
7
0 0 0 1 1 1 0
0 0 0 1 0 1 0
0 0 0 1 0 0 0
1 1 1 0 0 0 0
1 0 0 0 0 0 1
1 1 0 0 0 0 1
0 0 0 0 1 1 0
*/

int main() {
    int n;
    std::cin >> n;
    int **g = new int *[n];
    for (int i = 0; i < n; ++i) {
        g[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> g[i][j];
        }
    }

    sf::RenderWindow window(sf::VideoMode(800, 800), "Graph");
    auto graph = new Graph(g, n);
    graph->check();
    graph->show(&window);

    return 0;
}
