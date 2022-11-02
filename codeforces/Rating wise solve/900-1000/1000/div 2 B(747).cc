#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long MOD = 1e9+7;
//power function should be written by myself
ll power(ll n,ll k) {
    //this should be exponential function ? no need . cause at max this will be 30
    ll ans = 1;
    for(int i = 1; i <= k; i++) {
        ans*=n;
        ans%=MOD;
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        //now check set bits
        ll sum = 0;
        for(int i = 0; i <= 31; i++) {
            if((1LL << i) & (k)) {
                sum+=power(n,i);
                sum%=MOD;
            }
        }
        cout << sum << endl;
    }

}
