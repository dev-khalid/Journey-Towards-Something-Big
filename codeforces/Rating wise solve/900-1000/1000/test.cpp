#include<bits/stdc++.h>
using namespace std;
int dist(pair<int,int> &a,pair<int,int> &b) {
    return abs(a.first-b.first) + abs(a.second-b.second);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        bool found = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(dist(v[i],v[j])>k) {
                    break;
                } else {
                    if(j==n-1) {
                        found = true;
                    }
                }
            }
        }
        cout << (found? 1: -1) << endl;

    }
}
