#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        char c;
        for(int i = 0; i < n; i++) {
            cin >> c;
        }
        if(n==k) {
            cout << 1 << "\n";
            continue;
        }
        ll sum = 0;
        if(k==1) {
            sum = pow(2,n);
            cout << sum << "\n";
            continue;
        }
        int x = n-k+1;
        for(int i = 1; i <= x; i++) {
            if(i&1) {
                sum += 2;
            } else {
                sum ++;
            }
        }
        cout << sum << "\n";


    }
	return 0;
}

