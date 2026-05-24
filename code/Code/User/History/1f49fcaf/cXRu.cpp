#include <iostream>
using namespace std;

// DFS function
void DFS(int graph[5][5], bool visited[], int node)
{
    // Mark current node as visited
    visited[node] = true;

    // Print current node
    cout << node << " ";

    // Check all connected nodes
    for (int i = 0; i < 5; i++)
    {
        // If connected and not visited
        if (graph[node][i] == 1 && !visited[i])
        {
            DFS(graph, visited, i);
        }
    }
}

int main()
{
    // Adjacency Matrix
    int graph[5][5] =
        {
            {0, 1, 1, 0, 0},
            {1, 0, 0, 1, 1},
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 1, 0, 0, 0}};

    // Keeps track of visited nodes
    bool visited[5] = {false};

    cout << "DFS Traversal: ";

    // Start DFS from node 0
    DFS(graph, visited, 0);

    return 0;
}