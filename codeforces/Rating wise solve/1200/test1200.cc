#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
ll permutation(ll n) {
    ll result = 1LL;
    for(ll i = 1; i <= n; i++) {
        result*=i;
        result%=MOD;
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        ll x,y,z;
        x = (1LL<<(k-1))-1LL;
        y = x+1LL;
        z = (1LL<<k)-1LL;
        cout << permutation(20) << endl;
    }
}
/**
**/
//easy problem but couldn't get to the solution
