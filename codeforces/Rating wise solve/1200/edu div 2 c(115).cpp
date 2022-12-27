#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nc2(ll n)
{
    ll ans = 1;
    if(n&1)
    {
        ans*=((n-1)/2);
        ans*=n;
    }
    else
    {
        ans*=(n/2);
        ans*=(n-1);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n);
        map<ll,ll> mp;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
            mp[v[i]]++;
        }
        ll ans = 0;
        int need = (sum*2LL)/n;//working with pairs
        if(need*n==2LL*sum)
        {
            sort(v.begin(),v.end());
            for(int i = 0; i < n; i++)
            {
                if(mp[need-v[i]]>0)
                {
                    mp[v[i]]--;
                    ans+=mp[need-v[i]];
                }
            }
        }
        cout << ans << endl;
    }
}


