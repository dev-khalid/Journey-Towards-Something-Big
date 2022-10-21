#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int lo=-1,le=-1;
        bool so=true,se=true;//sequence of odd , sequence of even is in increasing order
        int x;
        for(int i = 0; i < n; i++) {
            cin >> x;

            if(x&1) {
                if(x<lo) {
                    so = false;

                } else {
                    lo = x;
                }
            } else {
                if(x<le) {
                    se = false;

                } else {
                    le = x;
                }
            }
        }
        cout << (se&so ? "YES" : "NO") << endl;
    }
}
