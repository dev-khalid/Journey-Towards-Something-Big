//SOURCE : https://leetcode.com/problems/coin-change/
class Solution {
public:
    int coinChange(vector<int>& coins, int x) {
        if(x==0) return 0;
       int n = coins.size();
        sort(coins.begin(),coins.end());
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
                    ways[i] = mn+1;
            }
        }
        return ways[x];
    }
};
