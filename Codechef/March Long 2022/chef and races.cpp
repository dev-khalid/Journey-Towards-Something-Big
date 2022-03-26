#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x,y,a,b;
        unordered_map<int,int> visited;
        cin >> x >> y >> a >> b;
        visited[a]++,visited[b]++;
        int cnt = 0;
        if(visited[x]==0) {
            cnt++;
        }
        if(visited[y]==0) cnt++;
        cout << cnt << endl;
    }
}
