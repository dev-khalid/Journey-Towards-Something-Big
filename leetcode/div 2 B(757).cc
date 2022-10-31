#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<ll,ll>> v(n);
        for(int i =0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }
        vector<ll> output(n);
        sort(v.begin(),v.end(),[](pair<ll,ll> &a,pair<ll,ll> &b) {
            return a.first < b.first;
        });
        ll val = 1;

        long long cost = 0;
        for(ll i = n-1; i >= 0; i--) {
            //now boro element er index
            ll id = v[i].second;
            //ei index a output hobe eibar
            //now from 0 to this val
            output[id] = val;
            cost+=2LL*abs(0-val)*v[i].first;
            if(val<0) {
                val = abs(val)+1;
            } else {
                val*=-1;
            }
        }
        cout << cost << endl;
        cout << 0 << " ";
        for(auto it: output) {
            cout << it << " ";
        }
        cout << endl;
    }
}
