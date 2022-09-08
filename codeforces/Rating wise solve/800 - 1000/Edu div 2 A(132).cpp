#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        vector<int> v(4);
        for(int i = 1; i < 4; i++) {
            cin >> v[i];
        }
        int vis = 1;
        while(v[x]!=0) {
            vis++;
            x = v[x];
        }
        cout << (vis==3? "YES\n": "NO\n");
    }
}
