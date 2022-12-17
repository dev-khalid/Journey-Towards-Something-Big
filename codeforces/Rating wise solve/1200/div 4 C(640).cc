
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
         ll n ,k ;
         cin >> n >> k;
         ll x = (k-1LL)/(n-1LL) + 1LL;
         x--;
         ll dif = k - x*(n-1LL);
         cout << (x*n) + dif << endl;
    }
}
