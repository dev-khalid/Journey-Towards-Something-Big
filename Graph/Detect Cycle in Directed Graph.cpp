#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool helper(vector<vector<int>> &graph,int u,vector<bool> &visited,vector<bool> &dfsVis)
    {
        visited[u] = true;
        dfsVis[u] = true;
        for(auto v: graph[u])
        {
            if(!visited[v]) {
                if(helper(graph,v,visited,dfsVis)) return true;
            }
            else if(dfsVis[v]) {
                return true;
            }
        }
        dfsVis[u] = false;
        return false;
    }
    bool isCycle(vector<vector<int>> &graph,int n,int m)
    {
        vector<bool> visited(n+1,false);
        vector<bool> dfsVis(n+1,false);
        for(int i = 1; i < n+1; i++)
        {
            if(!visited[i] && helper(graph,i,visited,dfsVis))
            {
                return true;
            }
        }
        return false;
    }
} ;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> graph(n+1);
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    Solution sol;
    if(sol.isCycle(graph,n,m))
    {
        cout << "Has cycle.\n";
    }
    else
    {
        cout << "No Cycle found.\n";
    }

}

/**

4 4
1 2
2 3
3 4
3 1



*/
