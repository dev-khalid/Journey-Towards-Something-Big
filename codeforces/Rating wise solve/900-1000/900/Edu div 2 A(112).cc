#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        if(x<6)
        {
            cout << 15 << endl;
        }
        else
        {
            if(x&1)
            {
                x = x+ (1LL);
            }
            cout << (ll)(x/2*5) << endl;
        }
    }
}
