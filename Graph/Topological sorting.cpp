#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;
    vector<vector<int>> graph(n); //0 based indexing
    vector<int> in(n,0);
    for(int i = 0; i < e; i++) {
        int u,v;
        cin >> u >> v;
        in[v]++;
        graph[u].push_back(v);
    }
    queue<int> q;
    for(int i = 0; i < n; i++) {
        if(in[i]==0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << endl;
        for(auto v: graph[u]) {
            in[v]--;
            if(in[v]==0) {
                q.push(v);
            }
        }

    }
}
