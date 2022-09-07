#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,z;
        cin >> n >> z ;
        ll x;
        long long mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> x;
            mx = max(mx,x|z);
        }
        cout << mx << endl;
    }
}
