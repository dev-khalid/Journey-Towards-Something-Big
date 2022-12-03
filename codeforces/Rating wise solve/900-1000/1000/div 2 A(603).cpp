
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     int t;
     cin >> t;
     while(t--) {
        vector<ll> v(3);
        for(int i = 0; i < 3; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll extra = v[2]-v[1];
        //ei extra tuku eibar ke dibe ? v[0];
        ll bad = min(extra,v[0]);
        v[0]-=bad;
        v[2]-=extra;
        ll choto = v[0]/2;
        ll boro = v[0]-choto;
        ll ans = bad;
        ans += v[0];
        v[1]-=choto;
        v[2]-=boro;
        ans+= min(v[1],v[2]);
        cout << ans << endl;
     }
}
