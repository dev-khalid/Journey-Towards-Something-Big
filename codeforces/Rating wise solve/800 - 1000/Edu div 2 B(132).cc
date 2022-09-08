#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> prefix(n+1,0);
    vector<ll> reverse_prefix(n+1,0);
    vector<ll> v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(ll i = 1; i < n; i++)
    {
        ll fall_damage = 0;
        if(v[i]<v[i-1])
        {
            fall_damage = v[i-1]-v[i];
        }
        prefix[i+1] += prefix[i] + fall_damage;
    }
    for(ll i = n-2; i >= 0; i--)
    {
        ll fall_damage = 0;
        if(v[i]<v[i+1])
        {
            fall_damage = v[i+1]-v[i];
        }
        reverse_prefix[i+1] += reverse_prefix[i+2] + fall_damage;
    }
    ll a,b;
    for(ll i = 0; i < m; i++)
    {
        cin >> a >> b;
        if(a<b)
            cout << prefix[b]-prefix[a] << endl;
        else
        {
            cout << reverse_prefix[b] - reverse_prefix[a] << endl;
        }
    }
}
