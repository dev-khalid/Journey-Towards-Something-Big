#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> v(n+3);
        v[n+1] = v[0] = v[n+2] = 0LL;
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        ll ans = 0LL;
        for(int i = 1; i <= n+1; i++) {
            ans+=abs(v[i]-v[i-1]);
            ans-=max(v[i]-max(v[i-1],v[i+1]),0LL);
        }
        cout << ans << endl;
    }
}
