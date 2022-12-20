#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(ll c,ll n)
{
    if(c==(n-1) || c==n) {
        return 0;
    }
    return n-1-c;
}
int main()
{
    vector<ll> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(),v.end());
    ll n = v[2];
    ll ans = 0;
    ans = calc(v[1],v[2]) + calc(v[0],v[2]);
    cout << ans << endl;
}

