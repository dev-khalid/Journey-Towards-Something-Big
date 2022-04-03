#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *g, vector<bool> &vis,int x)
{
    queue<int> q;
    q.push(x);
    vis[x]= true;

    while(!q.empty())
    {
        int el = q.front();
        q.pop();
        cout << el << " ";
        for(auto u: g[el])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u] = true;
            }
        }
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> g[n+1];
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> vis(n+1,0);
    for(int i = 0; i <= n ; i++)
    {
        if(!vis[i])
        {
            bfs(g,vis,i);
        }
    }
}
