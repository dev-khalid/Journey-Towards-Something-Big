#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y = b, z = c;
        x = ((z-1)/y+1)*y+a;
        cout << x << " " << y << " " << z << endl;
    }
}
//easiest would be https://codeforces.com/blog/entry/102995
