
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,0);
        dp[1] = cost[0];
        for(int i = 1; i < n; i++) {
            dp[i+1] = min(dp[i],dp[i-1])+cost[i];
        }
        // dp[n] = min(dp[n-1],dp[n-2]);
        return min(dp[n],dp[n-1]);
    }
};
