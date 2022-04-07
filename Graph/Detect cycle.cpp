#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool bfs(vector<vector<int>> &graph,vector<bool> &visited,int u,vector<int> &parent) {
        visited[u] = true;
        queue<int> q;
        q.push(u) ;

        while(!q.empty()) {
            int x = q.front();
            q.pop();
            for(auto v: graph[x]) {
                if(!visited[v]) {
                    visited[v] = true;
                    parent[v] = x;
                    q.push(v);
                }
                //as its an undirected graph so it should maintain a parent .
                else {
                    if(parent[x] != v) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    //i can also implement this using dfs also .
    bool isCycle(vector<vector<int>> &graph,int n)  {
        //using bfs;
        vector<bool> visited(n+1,false);
        vector<int> parent(n+1,-1);
        for(int i = 1; i <= n; i++) {
            if(!visited[i] && bfs(graph,visited,i,parent)) {
                return true;
            }
        }
        return false;
    }

};
int main() {
    int n,m;
    cin >> n >> m;
    //undirected graph
    vector<vector<int>> graph(n+1);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    Solution sol;
    if(sol.isCycle(graph,n)) {
        cout << "Contains Cycle.\n";
    } else {
        cout << "NO cycle.\n";
    }
    return 0;

}
