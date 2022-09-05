#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        if(n==1 && m==1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = max(n,m),mn = min(n,m);
        if(mx==2 && mn == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if(mn==1 && mx > 2)
        {
            cout << -1 << endl;
            continue;
        }

        int left = mx-mn;
        int ans = 0;
        ans += 2*(mn-1);
        ans += (2*left);
        ans -= (left&1?1: 0);
        cout << ans << endl;

    }
}
