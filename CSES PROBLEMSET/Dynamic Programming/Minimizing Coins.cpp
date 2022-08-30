
//source : https://cses.fi/problemset/task/1634
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1E9+7;
class Solution
{
public:
    int minimumCoins(vector<int> &coins,int x)
    {
        int n = coins.size();
        vector<int> ways(x+1,-1);
        for(int i = 1; i <= x; i++)
        {
            int mn = INT_MAX;
            for(int j = 0; j < n; j++)
            {
                if(coins[j] == i)
                {
                    mn = 1;
                    ways[i] = 1;
                    break;
                }
                else if(i > coins[j])
                {
                    if(ways[i-coins[j]]!=-1)
                    {
                        mn = min(mn,ways[i-coins[j]]);
                    }
                }
                else
                {
                    break;
                }
            }
            if(mn==INT_MAX)
            {
                ways[i] = -1;
            }
            else
            {
                if(ways[i]==-1)
                    ways[i] = (mn+1)%MOD;
            }
        }
        return ways[x];
    }
};
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
    Solution sol;
    cout << sol.minimumCoins(coins,x) << endl;

}
