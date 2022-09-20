#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> odds;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]&1) odds.push_back(v[i]);
        }
        ll evens = n-odds.size();
        ll ans = evens * n;
        ans -= (evens*(evens+1LL)/2LL);
        sort(odds.begin(),odds.end());
        for(int i = 0; i < odds.size(); i++)
        {
            for(int j = i+1; j < odds.size(); j++)
            {
                ll mx = max(odds[i],odds[j]);
                ll mn = min(odds[i],odds[j]);
                if(mn!=1 && (__gcd(2LL*mx,mn)>1 || __gcd(mx,2LL*mn) > 1))
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
