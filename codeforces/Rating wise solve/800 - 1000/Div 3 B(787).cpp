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
        if(n==1) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for(int i = n-2; i >= 0; i--) {

            while(v[i]>=v[i+1]) {
                cnt++;
                v[i]  = v[i]>>1;
                if(v[i]==0 && v[i+1]==0) {
                    cnt = -1;
                    break;
                }
            }
            if(cnt==-1) break;
        }
        cout << cnt << endl;
    }
}
