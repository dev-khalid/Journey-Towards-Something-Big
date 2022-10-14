#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        map<int,int> mp;
        bool ok = true;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(mp.find(x)!=mp.end()) {
                ok = false;
            }
            mp[x] = 1;
        }
        cout << (ok?"YES" : "NO") << endl;
    }
}

