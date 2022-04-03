#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         if(edges.size()==0) {
            return true;
        }
        vector<int> graph[n];
        for(auto e: edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n,false);

        queue<int> q;
        q.push(source);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto v: graph[u]) {
                if(!vis[v]) {
                    q.push(v);
                    vis[v]=true;
                }
            }
        }
        return vis[destination];
    }
};
int main() {
    int n,m;
    cin >>n>> m;
    vector<vector<int>> edges;
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        vector<int> e;
        e.push_back(u);
        e.push_back(v);
        edges[i] = e;
    }
    int source,destination;
    cout << "Enter source and destination : " << endl;
    cin >> source >> destination;
    Solution sol;
    cout << sol.validPath(n,edges,source,destination);

}
/***
3 3
0 1
1 2
0 2

0 2
*/
