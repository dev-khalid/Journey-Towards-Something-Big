#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n+1);
    ll sum = 0;
    for(ll i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    map<ll,ll> mp;
    ll same = 0;
    while(q--)
    {
        ll t,pos,val;
        cin >> t;
        if(t==1)
        {
            cin >> pos >> val;
            if(same)
            {
                ll prev = mp[pos];
                if(prev)
                {
                    mp[pos] = val;
                    sum-=prev;
                    sum+=val;
                }
                else
                {
                    mp[pos] = val;
                    sum+=val;
                    sum-=same;
                }
            }
            else
            {
                sum -= v[pos];

                v[pos] = val;
                sum += val;

            }

        }
        else
        {
            cin >> val;
            sum = val*n;
            mp.clear();
            same = val;
        }
        cout << sum << "\n";
    }
}
