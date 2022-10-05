#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll min_required(ll a,ll b,ll n) {
    return max(a,b)*n;
}
bool available(ll a,ll b,ll n,ll grid) {
    ll total_available = 0;
    total_available = (grid/a)*(grid/b);
    return total_available >= n;
}
int main() {
    ll a,b;
    cin >> a >> b;
    ll n;
    cin >> n;
    ll l = a*b, h = min_required(a,b,n);
    ll m;
    ll ans = h;

    while(l <= h) {
        m = (h+l)/2;
        if(available(a,b,n,m)) {
            ans = min(ans,m);
            h = m-1;
        } else {
            l = m+1;
        }
    }
    cout << ans << endl;
}
