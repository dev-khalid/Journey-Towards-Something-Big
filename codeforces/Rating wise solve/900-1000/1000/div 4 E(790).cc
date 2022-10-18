#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,q;

        cin >> n >> q;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {

            cin >> v[i];

        }

        vector<ll> sum(n,0);

        sort(v.begin(),v.end());

        sum[0] = v[n-1];
        for(int i = 1; i < n; i++) {
            sum[i] += sum[i-1] + v[n-i-1];
        }

        int xi;
        for(int i = 0; i < q; i++) {

            cin >> xi;

            int pos = lower_bound(sum.begin(),sum.end(),xi) - sum.begin();
            if(pos>=n) {
                cout << -1 << endl;
            } else {
                cout << pos + 1 << endl;
            }
        }
    }
}
