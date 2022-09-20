#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> ans(n);
        int have = INT_MIN;
        for(int i = n-1; i>=0; i--) {
            have = max(have,v[i]);
            if(have>0) {
                ans[i] = 1;
            } else {
                ans[i] = 0;
            }
            have--;
        }
        for(auto it: ans ) cout << it << " ";
        cout << endl;
    }
}
