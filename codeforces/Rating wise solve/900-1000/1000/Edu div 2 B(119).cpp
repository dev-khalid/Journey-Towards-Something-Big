#include<bits/stdc++.h>
using namespace std;
//need there result only
typedef long long ll;
ll fun(ll mul)
{
    ll k;
    ll d1=INT_MAX,d2=INT_MIN;
    cin >> k;
    ll data;

    for(ll i = 0; i < k; i++)
    {
        cin >> data;
        d1 = min(data,d1);
        d2 = max(data,d2);
    }
    return mul*(d2-d1);
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        //now 4 same segment will be there
        ll ans = -1;
        //taking the horizontals
        ll area = fun(y);
        ans = max(area,ans);
        area = fun(y);
        ans = max(area,ans);

        //taking the verticals
        area = fun(x);
        ans = max(area,ans);
        area = fun(x);
        ans = max(area,ans);
        cout  << ans << endl;

    }
}
