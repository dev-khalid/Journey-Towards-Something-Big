#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;

ll factorial(ll n)
{
    ll result = 1LL;
    for(ll i = 1; i <= n; i++)
    {
        result*=i;
        result%=MOD;
    }
    return result;
}
ll permutation(ll n,ll r) {
    ll result = 1LL;
    ll limit = n-r;
    for(; n > limit; n--) {
        result*=n;
        result%=MOD;
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll ans=0LL;
        ans += permutation(n,1LL);
        ll k2 = 1LL<<k;
        k2/=2LL;

        ll perm2 = permutation(n,2LL);
        cout << ans << ": " << perm2 << endl;
        for(int i = 0; i+1 < k2; i++) {
            ans+=perm2;
            ans%=MOD;
        }

        cout << ans << endl;

    }
}
/**
**/
//easy problem but couldn't get to the solution
