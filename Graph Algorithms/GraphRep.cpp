//graph by Adjacency list using STL Vectors
#include<iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
        adj[u].push_back(v);
        adj[v].push_back(u);
}

void showGraph(vector<int> adj[], int V)
{
        for (int i = 0; i < V; i++)
        {
                cout << "For vertex " << i << "\nHead ";
                for (int i : adj[i])
                        cout << "-->" << i;
                cout << "\n\n";
        }
}

int main()
{
        int V = 5;          //no of vertex
        vector<int> adj[V]; //an array of vectors of size V

        addEdge(adj, 0, 1);
        addEdge(adj, 0, 4);
        addEdge(adj, 1, 2);
        addEdge(adj, 1, 3);
        addEdge(adj, 1, 4);
        addEdge(adj, 2, 3);
        addEdge(adj, 3, 4);

        showGraph(adj, V);
}
