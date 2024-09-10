// DFS of a graph
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    // adjList[v].push_back(u);
}

void dfsUntil(int u, vector<int> adjList[], vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < adjList[u].size(); i++)
    {
        int neighbor = adjList[u][i];
        if (visited[neighbor] == false)
            dfsUntil(neighbor, adjList, visited);
    }
}

void dfs(vector<int> adjList[], int vert)
{
    vector<bool> vis(vert, false);
    for (int u = 0; u < vert; u++)
    {
        if (vis[u] == false)
            dfsUntil(u, adjList, vis);
    }
}

int main()
{
    // Vertices
    int vertices = 6;
    // Adjacency list
    vector<int> adj[vertices];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 0, 5);

    // DFS finding
    dfs(adj, vertices);

    return 0;
}