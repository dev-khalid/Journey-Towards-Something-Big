#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
ll calc(ll n) {
    if(n&1) {
        return (n-1LL)/2LL*n;
    } else {
        return n/2LL*(n-1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        map<ll,ll> mp;
        for(int i = 1; i <= n; i++) {
            cin >> x;
            mp[x-i]++;
        }
        ll ans = 0;
        for(auto it: mp) {
            ans+=calc(it.second);
        }
        cout << ans << endl;
    }
}
/**
100
5
5 6 2 1 4

**/
//easy problem but couldn't get to the solution

