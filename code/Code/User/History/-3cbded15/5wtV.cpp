#include <iostream>
using namespace std;

int main()
{
    // Adjacency matrix of graph
    int graph[4][4] = {
        {0, 2, 0, 6},
        {2, 0, 3, 8},
        {0, 3, 0, 0},
        {6, 8, 0, 0}};

    // Keeps track of selected vertices
    bool selected[4] = {false};

    // Start from vertex 0
    selected[0] = true;

    int edges = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    // MST will have (vertices - 1) edges
    while (edges < 3)
    {
        int min = 999;
        int x = 0;
        int y = 0;

        // Find minimum edge
        for (int i = 0; i < 4; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < 4; j++)
                {
                    // If vertex not selected and edge exists
                    if (!selected[j] && graph[i][j])
                    {
                        if (graph[i][j] < min)
                        {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y
             << " : " << graph[x][y] << endl;

        // Include new vertex in MST
        selected[y] = true;

        edges++;
    }

    return 0;
}