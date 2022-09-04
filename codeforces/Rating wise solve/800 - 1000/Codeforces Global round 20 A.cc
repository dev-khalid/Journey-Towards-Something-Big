#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int turn = 0;

        for(int i = 0; i < n ;i++) {
            cin >> v[i];
            if(v[i]!=1) {
                if(!(v[i]&1)) {
                    turn = !turn;
                }
            }
        }
        cout << (turn? "errorgorn" : "maomao90") << endl;

    }
}
