#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll maxn = 1e9+7;
vector<pair<ll,ll>> v;
void pre_calculation()
{
    ll h = 0,l = 0,r = 0,lines = 0;
    ll t = 0;
    while( t < maxn)
    {
        if(lines%3==0)
        {
            h++;
            t += 2*(l+r);
        }
        else if(lines%3==1)
        {
            l++;
            t += 2*(h+r);
        }
        else
        {
            r++;
            t += 2*(l+h);
        }
        lines++;
        v.push_back({t,lines});
    }
}
int main()
{
    pre_calculation();
    int t;

    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        pair<ll,ll> p = {n,-1};

        cout << (lower_bound(v.begin(),v.end(),p)->second) << endl;
    }
}
