#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll r,c;
        cin >> r >> c;
        ll ans = c*(c+1)/2;
        ll n = r-1; //number of terms
        if(n)
            ans += (n*(2*2*c+(n-1)*c))/2;
        cout << ans << endl;
    }
}
