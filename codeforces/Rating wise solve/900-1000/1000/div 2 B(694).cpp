#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        vector<ll> v(n);
        ll total = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }
        vector<pair<ll,ll>> final;
        bool broken = false;
        for(ll i = 0; i < n; i++)
        {
            if(v[i]%x!=0)
            {
                broken = true;
                break;
            }
            final.push_back({v[i]/x,x});
        }

        //brute-force
        for(ll i = 0; i < final.size(); i++)
        {
            ll it = final[i].first;
            ll cnt = final[i].second;
            if(it%x!=0)
            {
                broken = true;
            }

            if(!broken)
            {
                final.push_back({it/x,cnt*x});
            }
            total+=it*cnt;
        }
        cout << total << endl;
    }
}
