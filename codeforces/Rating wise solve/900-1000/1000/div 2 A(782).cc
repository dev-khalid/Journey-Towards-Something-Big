#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,r,b;
        cin >> n >> r >> b;
        int ss = r/(b+1);
        int rest = r%(b+1);
        for(int i = 0; i <= b; i++) {
            for(int j = 0; j < ss; j++) {
                cout << 'R';
            }
            if(rest) {
                cout << 'R';
                rest--;
            }
            if(i!=b) {
                cout << 'B';
            }
        }
        cout << endl;
    }
}
