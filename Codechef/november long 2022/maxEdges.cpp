#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll series(ll n) {
    ll nDot = n+1;
    ll sum = 0;
    if(nDot&1) {
        sum+=n/2;
        sum*=nDot;
    } else {
        sum+=nDot/2;
        sum*=n;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll k,l;
        cin >> k >> l;
        ll undef = 0;
        ll sum = 0;
        if(n<(k+l)) {
            ll extra = (k+l-n);
            //this extras will be subtracted from k and l both
            k-=extra, l -=extra;

            //this should not be ....
            //sum+=(extra-1);
        }
        else if(n>(k+l)) {
            undef = n-k-l;
            sum+=series(undef-1);
        }
        sum+=(k*(l+undef));
        sum+=(undef*l);
        cout << sum << endl;
    }
}
