#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,m;
        cin >> a >> b >> c >> m;
        vector<ll> v = {a,b,c};
        sort(v.begin(),v.end());
        ll sum = 0;
        for(auto it: v) {
            sum+=it;
        }
        if((v[2]-v[1]-v[0]-1 <= m) && (m <= sum-3)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
