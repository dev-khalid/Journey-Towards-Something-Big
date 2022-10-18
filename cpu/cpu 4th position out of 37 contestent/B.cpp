#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll div_count(ll a) {
    ll cnt = 0;
    for(ll i = 1; i <= sqrt(a); i++) {
        if(a%i==0) {
            if(a/i==i) {
                cnt++;
            } else {
                cnt+=2;
            }
        }
    }
    return cnt;
}
int main() {
    ll a;
    cin >> a;
    if(div_count(a)&1) {
        cout << "Sharmin Sumi\n";
    } else {
        cout << "Bappa Mazumdar\n";
    }
}
