#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e8+7;
ll dp[1000002] = {};
void pre_calc() {
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 7;
    for(ll i = 4; i <= 1000000; i++) {
        dp[i] = (dp[i-1]%mod + dp[i-1]%mod + 1)%mod;
    }
}
int main() {
    pre_calc();
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << dp[n] << endl;
    }

}

