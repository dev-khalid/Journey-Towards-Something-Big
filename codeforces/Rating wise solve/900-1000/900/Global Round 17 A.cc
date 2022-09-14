#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int row = max(n,m),col = min(n,m);
        if(col==1 && row <=3) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

}
