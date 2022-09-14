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
        ll total = 0;
        ll power = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll mx = INT_MIN;

        for(int i = 0; i < n; i++) {
            while(v[i]%2==0) {
                v[i] = (v[i]>>1);
                power++;
            }
            mx = max(v[i],mx);
            total+= v[i];
        }
        total-=mx;
        total+=(mx*(1LL<<power));
        cout << total << endl;

    }

}
