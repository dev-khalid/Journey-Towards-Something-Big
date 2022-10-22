#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        if(k==1) {
            cout << "YES\n";
            for(int i = 1; i <= n; i++) {
                cout << i << endl;
            }
            continue;
        }
        int n_e = (n/2)*k;
        int n_o = n*k-n_e;
        int h_e = (n*k)/2, h_o=(n*k)/2;
        if((n*k)&1) {
            h_o+=1;
        }
        if((k&1 && (n&1)) || (n==1) || (h_e!=n_e) || (h_o!=n_o)) {
            cout << "NO\n";
            continue;
        }


        //now for each row change the parity will also change
        cout << "YES\n";
        int o = 1,e = 2;
        for(int i = 1; i <= n; i++) {
            int sum;
            if(i&1) {
                sum = o;
            } else {
                sum = e;
            }
            for(int j = 0; j < k; j++) {
                cout << sum << " ";
                sum+=2;
            }

            if(i&1) {
                o = sum;
            } else {
                e = sum;
            }

            cout << endl;
        }
    }
}
