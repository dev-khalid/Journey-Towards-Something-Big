#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x,n;
        cin >> x >> n;
        ll m = n%4;
        ll div = n/4;
        for(ll i = 1; i <= m; i++){
            if(x&1) {
                x+=((4*div)+i);
            } else {
                x-=((4*div)+i);
            }
        }
        cout << x << endl;
    }
}
