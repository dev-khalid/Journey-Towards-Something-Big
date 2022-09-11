#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = INT_MAX,mx = INT_MIN;
        int p=-1,q=-1;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]<mn) {
                mn = v[i];
                p = i;
            }
            if(v[i]>mx) {
                mx = v[i];
                q=i;
            }
        }
        if(n<3) {
            cout << abs(v[0]-v[n-1]) << endl;
            continue;
        }
        int result = 0;
        if(p==0 || q==n-1) {
            result = mx-mn;
        } else {
            result = max(result,v[n-1]-v[0]);
            for(int i = 0; i < n-1; i++) {
                result = max(result,v[i]-v[i+1]);
            }
            result = max(result,v[n-1]-mn);
            result = max(result,mx-v[0]);
        }
        cout << result << endl;

    }
}
