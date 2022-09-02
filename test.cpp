#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]=1;
        }
        sort(v.begin(),v.end());
        if(mp[v[n-1]+v[n-2]+v[n-3]]==0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;


}
