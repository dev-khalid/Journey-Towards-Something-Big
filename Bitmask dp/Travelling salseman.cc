#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int costCalculationHelper(vector<vector<int>> &dp,vector<vector<int>> &dist,int n,int row,int mask)
    {
        if(mask==0)
        {
            return dist[row][0];
        }

        if(dp[row][mask]!=-1) return dp[row][mask];

        //for every possible column check if it's visited or not ? if not visited then visit it and exp
        //all the solution for picking up that particular path. pick the min costing one.
        int ans = INT_MAX;

        for(int i = 0; i < n; i++)
        {

            if(mask & (1<<i) && i!=row)
            {
                //if that city is available to visit then
                ans = min(ans,costCalculationHelper(dp,dist,n,i,mask^(1<<i)) + dist[row][i]);
            }
        }
        return dp[row][mask] = ans;
    }
    int costCalculation(vector<vector<int>> &dist)
    {
        int n = dist[0].size();
        vector<vector<int>> dp(n,vector<int>(1<<n,-1));
        return costCalculationHelper(dp,dist,n,0,(1<<n)-1);
    }
};
int main()
{
    vector<vector<int>> dist =
    {
        {
            0,20,42,25
        }, {
            20,0,30,34
        }, {
            42,30,0,10
        },{
            25,34,10,0
        }
    };
    Solution sol;
    cout << sol.costCalculation(dist);
}
