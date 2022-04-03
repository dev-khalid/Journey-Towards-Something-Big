#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;//n-> number of nodes & m-> number of edges
    cin >> n >> m;
    int adjacencyMatrix[n+1][m+1];
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        //as this is an undirected graph thats why we are making path to both of them
        adjacencyMatrix[u][v] = true;
        adjacencyMatrix[v][u] = true;
    }

    vector<int> graph[n+1]; //adjacencyList representation
    for(int i = 0; i < m; i++) {
        int u,v,wt;
        //undirected weighted graph
        graph[u].push_back({v,wt});
        graph[v].push_back({u,wt});
    }
}
