#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mul(ll y_dot,ll y)
{
    if(y_dot&1LL)
    {
        return  (y/2LL)*y_dot;
    }
    else
    {
        return (y_dot/2LL)*y;
    }
}
ll calc(ll n,ll x,ll t)
{
    ll y = (t/x);
    ll y_dot = y-1LL;
    ll ans;
    if(n>y) {
        ans = (n-y)*y;
    } else {
        return mul(n,n-1);
    }
    ans+=mul(y,y_dot);
    return ans;

}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        ll n,x, t;
        cin >> n >> x >> t;
        cout << calc(n,x,t) << endl;
    }
}
