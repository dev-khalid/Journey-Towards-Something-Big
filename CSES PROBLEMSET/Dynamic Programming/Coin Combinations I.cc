//source : https://cses.fi/problemset/task/1635
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1E9+7;
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
    ways[0] = 1;
    for(int i = 1; i <= x; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i>=coins[j])
            {
                ways[i] = (ways[i]%MOD +  ways[i-coins[j]]%MOD)%MOD;
            }
            else
            {
                break; //as i as currently less then coins[j] then there no chance that current element will contribute

            }

        }
    }
        cout << ways[x] << endl;
}
