#include<bits/stdc++.h>
using namespace std;
bool ap(int a,int b,int c) {
    return (a-b==b-c);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(ap(a,b,c)) {
            cout << "YES\n";
            continue;
        }
        bool ok = false;
        //fix a,b and try changing c
        int nt = (b-a) + b; //next term should be equal to this
        if(nt%c==0) {
            ok = true;
        }
        //fix a,c and change b
        nt = c-a;
        if(!(nt&1)) {
            nt /= 2;
            nt+a;
            if(nt%b==0) {
                ok = true;
            }
        }


        //fix b,c and change a
        nt = (b-c)+b;
        if(nt%a==0) {
            ok = true;
        }

        cout << (ok? "YES\n": "NO\n");
    }
}
