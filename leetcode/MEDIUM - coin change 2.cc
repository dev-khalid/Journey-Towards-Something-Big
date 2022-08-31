//source : https://leetcode.com/problems/coin-change-2/submissions/
class Solution {
public:
    int change(int x, vector<int>& coins) {

        int n = coins.size();

    sort(coins.begin(),coins.end());
    vector<int> ways(x+1,0);
    ways[0] = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = coins[i]; j <= x; j++)
        {
            ways[j] += ways[j-coins[i]];
        }
    }

    return ways[x];
    }
};
