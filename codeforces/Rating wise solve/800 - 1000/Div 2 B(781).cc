#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        unordered_map<ll,ll> m;
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        ll c = INT_MIN;
        for(auto it: m) {
            c = max(c,it.second);
        }
        if(c==n) {
            cout << 0 << endl;

        } else {
            ll ans = 0;
            ll left = n-c;
            while(left) {
                ans++;
                //amader ability hocche 2*previous_c remove korte para .
                ans += min(left,c);
                left -= min(left,c);
                c *=2;
            }
            cout << ans << endl;
        }

    }
}
