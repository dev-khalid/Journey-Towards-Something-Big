#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fib(vector<ll> & dp, int n)
{
    if(dp[n]!=-1)
    {
        return dp[n];
    } else {
        dp[n] = fib(dp,n-1) + fib(dp,n-2);
        return dp[n];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<long long> dp(50,-1);
    dp[0] = 0,dp[1] = 1;
    cout << fib(dp,n);
    for(int i = 0; i < n; i++) {
        cout << dp[i] << endl;
    }

}
