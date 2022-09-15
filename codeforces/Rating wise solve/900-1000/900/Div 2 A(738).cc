#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        vector<int> v(n);
        bool odd = false,even = false;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x&1) {
                odd = true;
            } else {
                even = true;
            }
            mn = min(mn,x);
            v[i] = x;
        }
        for(int i = 0; i < n; i++) {
            v[i] &= mn;
            mn = min(mn,v[i]);
        }
        cout << mn << endl;
    }
}
