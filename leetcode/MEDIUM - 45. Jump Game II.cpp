class Solution {
public:
    int jump(vector<int>& v) {
        int n = v.size();
        vector<int> dp(n,0);


        for(int i = n-2; i>= 0; i--) {
            int jumps = v[i];
            int mn = INT_MAX;
            for(int j = 1; j <= jumps; j++) {
                if(i+j==n-1) {
                    mn = 0;
                    break;
                }
                if(i+j<n) {
                    mn = min(mn,dp[i+j]);
                }
            }
            if(mn==INT_MAX){
                dp[i] = mn;
            } else {
                dp[i] = mn+1;
            }
        }
        return dp[0];
    }
};
