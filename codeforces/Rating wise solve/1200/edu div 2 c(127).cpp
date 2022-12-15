
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(ll x, ll sa, ll r)
{
    return (x-sa)/r+1LL;
}
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        sort(v.begin(),v.end());
        //now standing on each position apply the formula
        ll sa = 0,y;
        ll ans = 0;
        for(int i =0; i < n; i++)
        {
            sa += v[i];
            if(sa<=x) {
                ans+=calc(x,sa,i+1);
            }
        }
        cout << ans << endl;

    }
}
