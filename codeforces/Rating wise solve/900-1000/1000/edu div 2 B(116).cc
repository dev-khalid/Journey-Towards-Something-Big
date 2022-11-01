#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        ll ans = 0;        ll x = 1;
        while(x<k) {
            x*=2;
            ++ans;
        }
        ll left = (n-x);
        if(left>0) {
            ans += (left-1+k)/k;
        }
        cout << ans << endl;
    }
}
//there is a problem calculating big numbers never count on built in functions.

