#include<bits/stdc++.h>
using namespace std;
bool lucky(int a,int d) {
    if(a<0) {
        return false;
    }
    while(a) {
        if(d==a%10) {
            return true;
        }
        a/=10;
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int q,d;
        cin >> q >> d;
        int a;
        for(int i = 0; i < q; i++) {
            cin >> a;

            bool ok = false;
            if(a%d==0) {
                cout << "YES\n";
                continue;
            }
            for(int j = 0; j <= 10000; j++) {
                if(lucky(a-j*d,d)) {
                    ok = true;
                    break;
                }
            }
            cout << (ok? "YES": "NO") << "\n";
        }

    }
}
//very bad implementation found an amazing one online. The beauty of math has appeared on that solution.
