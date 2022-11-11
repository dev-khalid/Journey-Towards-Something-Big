#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a,  b;
        cin >> a >> b;
        ll z = (a*a*b);
        ll x = a, y = z-a;
        if(b==1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a << " " << (a*b) << " " << (a+a*b) << endl;
        }
    }
}


