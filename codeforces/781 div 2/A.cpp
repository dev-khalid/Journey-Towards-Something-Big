#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        int b = 1;
        while(b < n-2) {
            a = n - 2 - b;
            if(gcd(a,b) == 1) {
                cout << a << " " << b << " " << 1 << " " <<  1 << endl;
                break;
            }
            b++;

        }
        /*
        if(n==4)
        {
            cout << 1 << " " << 1 << " " << 1 << " " 1 << endl;
            continue;
        }
        if(n&1)
        {
            cout << n/2 << " " << n/2+1 << " " << 1 << " " << 1 << endl;
        }
        else
        {
            int x = n-2 / 2;
            if(x&1)
            {

                cout << n/2-1 << " " << n/2+1 << " " << 1 << " " << 1 << endl;
            } else {

            }
        }
        */
    }
}
