#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

ll dp[40005];
vector<ll> v;
bool palindrom(ll n) {
    string s = to_string(n);
    ll i = 0 , j = s.size() - 1;
    while(i<j) {
        if(s[i++]!=s[j--]) {
            return false;
        }
    }
    return true;
}
void pre_cal() {
     for(ll i = 1; i < 40005; i++) {
        if(palindrom(i)) v.push_back(i);
     }
     dp[0] = 1;
     for(ll i = 0; i < v.size(); i++) {
        for(ll j = v[i]; j < 40005; j++) {
            dp[j] += dp[j-v[i]];
            dp[j] %= mod;
        }
     }
}
int main() {
    pre_cal();

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << dp[n] << endl;
    }
}

