#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll dp[n+1];
    dp[1] = 0;
    dp[0] = 1;

    for(ll i = 2; i <= n; i++)
    {

        dp[i] = dp[i-2] * 2;
    }
    cout << dp[n] << endl;
    return 0;
}
