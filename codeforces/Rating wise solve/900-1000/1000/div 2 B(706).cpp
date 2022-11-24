#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        set<int> s;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(x,mx);
            s.insert(x);
        }
        int mex;
        for(int mn = 0; mn < mx+2; mn++) {
            if(s.find(mn)==s.end()) {
                mex = mn;
                break;
            }
        }
        //cout << " mex and max " << mex << " " << mx << endl;
        if(mex>mx) {
            cout << s.size() + k << endl;
        } else {
            //check if the element already exist or not
            int up = (mex+mx+1)/2;
            if(s.find(up) ==s.end() && k>0) {
                cout << s.size() + 1 << endl;
            } else {
                cout << s.size() << endl;
            }
        }

    }
}
