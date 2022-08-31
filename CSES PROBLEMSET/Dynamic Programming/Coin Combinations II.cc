//source : https://cses.fi/problemset/task/1636
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int func(vector<int> &ways,vector<int> &coins,int x)
{
    int n = coins.size();
    for(int j = 0; j < n; j++)
    {
        if(coins[j]<=x)
            ways[coins[j]] = 1;
    }
    for(int i = 1; i <= x ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i+coins[j]>x)
            {
                break;
            }
            if(ways[i] && i + coins[j] <= x)
            {
                ways[i+coins[j]] = (ways[i+coins[j]] + 1) % MOD;
            }
        }
    }
    for(int i = 0; i <= x; i++) {
        cout << i << " " << ways[i] << endl;
    }
    return ways[x];
}
//need to maintain the distinct order
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(),coins.end());
    vector<int> ways(x+1,0);
    cout << func(ways,coins,x) << endl;

}
