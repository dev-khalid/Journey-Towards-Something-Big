#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        if(n==1) {
            if(m&1) {
                cout << "Tonya\n";
            } else {
                cout << "Burenka\n";
            }
        }
        else if(m==1) {
            if(n&1) {
                cout << "Tonya\n";
            } else {
                cout << "Burenka\n";
            }
        } else if(n&1 && m&1) {
            cout << "Tonya\n";
        } else if(n&1 && !(m&1)) {
            cout << "Burenka\n";
        } else if(!(n&1) && m&1) {
            cout << "Burenka\n";
        } else {
            cout << "Tonya\n";
        }
    }
}
//could be a better solution .. that i saw on tutorial
