#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Graph with 5 vertices
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}};

    bool visited[5] = {false};

    queue<int> q;

    // Start BFS from node 0
    visited[0] = true;
    q.push(0);

    cout << "BFS Traversal: ";

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        // Check connected nodes
        for (int i = 0; i < 5; i++)
        {
            if (graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    return 0;
}