#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx,v[i]);
        }
        if(v[n-1]==mx) {
            cout << 0 << endl;
        } else {
            int cnt = 1;
            int i = n-1;
            int big = v[i];
            while(i>=0 && v[i]!=mx) {
                if(v[i]>big) {
                    big = v[i];
                    cnt++;
                }
                i--;
            }
            cout << cnt << endl;
        }
    }
}
