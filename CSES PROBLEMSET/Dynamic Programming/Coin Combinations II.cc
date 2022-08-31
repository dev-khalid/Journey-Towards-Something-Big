//source : https://cses.fi/problemset/task/1636
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int func(vector<int> &ways,vector<int> &coins,int x)
{
    int n = coins.size();

    sort(coins.begin(),coins.end());
    vector<int> ways(x+1,0);
    ways[0] = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = coins[i]; j <= x; j++)
        {
            ways[j] += ways[j-coins[i]];
            ways[j] %= MOD;
        }
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
