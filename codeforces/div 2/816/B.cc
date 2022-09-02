#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        ll rem = s - k*b;
        if(rem < 0 || rem > (k-1) * n) {
            cout << -1 << endl;
        } else {
            for(ll i = 1; i <= n; i++) {
                ll curr = k*b; b = 0;
                ll ad = min(rem,k-1);
                curr += ad , rem-= ad;
                cout << curr << " ";
            }
            cout << endl;
        }
    }
}

