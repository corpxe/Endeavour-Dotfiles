#include <iostream>
using namespace std;

int main()
{
    int graph[4][4] = {
        {0, 2, 0, 6},
        {2, 0, 3, 8},
        {0, 3, 0, 0},
        {6, 8, 0, 0}};

    bool selected[4] = {false};

    selected[0] = true;

    int edges = 0;

    while (edges < 3)
    {
        int min = 999;
        int x = 0, y = 0;

        for (int i = 0; i < 4; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < 4; j++)
                {
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

        cout << x << " - " << y << " : " << graph[x][y] << endl;

        selected[y] = true;

        edges++;
    }
}