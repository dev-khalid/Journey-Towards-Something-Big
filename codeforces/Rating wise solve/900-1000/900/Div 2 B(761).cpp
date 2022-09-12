#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n&1) {
            n = n-1;
            int x = 3;
            while(x*2<=n) {
                if(gcd(x,n-x)==1) {
                    cout << x << " " << n-x << " " << 1 <<  endl;
                    break;
                }
                x+=2;
            }
        } else {
            cout << 2 << " " << n-3 << " " << 1 << endl;
        }
    }
}
