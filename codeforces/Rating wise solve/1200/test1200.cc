#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>x,y;
        for(int i = 0; i < 2*n; i++)
        {
            ll a,b;
            cin >> a >> b;
            if(a)
            {
                x.push_back(abs(a));
            }
            else
            {
                y.push_back(abs(b));
            }
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        double ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans+= sqrt(x[i]*x[i]+y[i]*y[i]);
        }
        cout << fixed << setprecision(17) << ans << endl;
    }
}
