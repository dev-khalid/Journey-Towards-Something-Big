#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(ll x) {
    return x*(x+1)/2;
}
int main() {
    int n,k;
    map<char,int> m;
    cin >> n >> k;
    string s;
    cin >> s;
    char c;
    for(int i = 0; i < k; i++) {
        cin >> c;
        m[c]++;
    }
    ll cnt = 0,ans = 0;
    for(ll i = 0;  i < n; i++) {
        if(m[s[i]]) {
            cnt++;
        } else {
            ans+=count(cnt);
            cnt = 0;
        }
    }
    if(cnt) {
        ans+=count(cnt);
    }
    cout << ans << "\n";

}
