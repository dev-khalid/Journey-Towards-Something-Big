#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int pi;
        int x = (1<<20) - 1;
        for(int i = 0; i < n; i++) {
            cin >> pi;
            if(pi!=i) x&=pi;
        }
        cout << x << endl;

    }
}
