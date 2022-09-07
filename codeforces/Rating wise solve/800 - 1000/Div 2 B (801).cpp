#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = -1;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n&1) {
            cout << "Mike" << endl;
        } else {
            int me = INT_MAX,pe = -1;
            int mo = INT_MAX,po = -1;
            for(int i = 0; i < n; i++) {
                if(i&1) {
                    if(mo>v[i]) {
                        mo = v[i];
                        po = i;
                    }
                } else {
                    if(me>v[i]) {
                        pe = i;
                        me = v[i];
                    }
                }
            }
            if(me<mo) {
                cout << "Joe\n" ;
            } else if(me>mo) {
                cout << "Mike\n";
            } else {
                if(pe>po) {
                    cout << "Mike\n";
                } else {
                    cout << "Joe\n";
                }
            }
        }
    }
}
