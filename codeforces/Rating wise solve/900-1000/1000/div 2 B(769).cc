#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        //n is as minimal as 2

        int base = log2(n);
        int x = (1<<base);
        if(x==n) {
            //then there must be a zero with which one ?
            base--;
            x = (1<<base);
        }
        for(int i = 1; i < n; i++) {
            if(i==x) {
                cout << 0 << " ";
            }
            cout << i << " ";
        }
        cout << "\n";

    }
}
