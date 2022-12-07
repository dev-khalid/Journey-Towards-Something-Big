#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for(int i = 0; i < n; i++) {
            cin >> r[i];
        }
        int m;
        cin >> m;
        vector<int> b(m);
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> dr(n+2,0);
        vector<int> db(m+2,0);
        for(int i = n-1; i >= 0; i--0 ) {
            dr[i] += dr[i-1]+
        }
    }
}
