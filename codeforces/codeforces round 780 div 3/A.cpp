#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a ,b;
        cin >> a >> b;
        if(a==0) {
            cout << 1 << endl;
            continue;
        }
        if(b==0) {
            cout << a+1 << endl;
            continue;
        }
        cout << a+(b*2)+1 << endl;
    }
}
