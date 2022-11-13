#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            sum+=x;
            sum%=MOD;
        }
        cout << (sum*(sum-1))%MOD << endl;
    }
}


