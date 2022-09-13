#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a==1) {
            cout << a << endl;

        } else {

            int gap;
            if(b>c) {
                gap = b;
            } else {
                gap = c-b+c;
            }
            if(gap==a) {
                cout << 3 << endl;
            } else if(gap<a) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
}
