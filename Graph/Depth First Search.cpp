#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> graph[],vector<bool> &vis,int x)
{
    vis[x] = true;
    cout << x << " ";

    for(auto it: graph[x])
    {
        if(!vis[it])
        {
            dfs(graph,vis,it);
        }
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> graph[n+1];
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool> vis(n+1,false);
    for(int i = 0; i <= n; i++)
    {
        if(!vis[i])
        {
            dfs(graph,vis,i);
        }
    }
}


/***
Undirected Graph:
7 6
1 2
2 3
3 5
5 7
2 7
4 6
*/

