#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ones = 0;
        char c;
        for(int i = 0; i < n; i++) {
            cin >> c;
            if(c=='1') ones++;
        }
        int zeros = n-ones;
        cout << abs(ones-zeros) << endl;
    }
}
