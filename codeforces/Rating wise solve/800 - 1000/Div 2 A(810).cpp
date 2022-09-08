#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==1) {
            cout << 1 << endl;
            continue;
        }
        int e = 2, o = 1;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            if(i&1) {
                v[i] = o;
                o+=2;
            } else {
                v[i] = e;
                e+=2;
            }
        }

        if(n&1) {
            v[n-1] = n;
            swap(v[n-1],v[n-2]);
        }
        for(auto it: v) {
            cout << it << " ";
        }
        cout << endl;

    }
}
