
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        if(n%k==0) {
            cout << 1 << endl;
        } else if(n>k) {
            cout << 2 << endl;
        } else {
            //n<k;
            cout <<((k-1)/n)+1 << endl;
        }
    }
}
//very bad implementation found an amazing one online. The beauty of math has appeared on that solution.
