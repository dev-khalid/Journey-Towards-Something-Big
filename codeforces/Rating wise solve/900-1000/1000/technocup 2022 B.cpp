#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        double a,b;
        cin >> a >> b;
        if(a<3 && b < 3) {
            cout << (int)(a*b/2.0) << endl;
            continue;
        }
        else {

            cout << (int)ceil(a*b/3) << endl;
        }
    }

}
