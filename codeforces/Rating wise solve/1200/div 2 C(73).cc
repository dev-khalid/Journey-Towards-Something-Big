
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll c,m,x;
        cin >> c >> m >> x;
        ll sum = c+m+x;
        ll ans = sum/3;
        ans = min(ans,c);
        ans = min(ans,m);
        cout << ans << endl;
    }
}
