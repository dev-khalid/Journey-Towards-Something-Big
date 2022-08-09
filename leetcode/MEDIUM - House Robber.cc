//source :- https://leetcode.com/problems/house-robber/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[100000][2] = {-1};
    int func(vector<int> nums,int pos,int prev) {
        if(pos>=nums.size()) {
            return 0;
        }
        if(dp[pos][prev]!=-1) return dp[pos][prev];
        if(prev==0) {
            //previous one excluded

            //including current element
            int val1 = func(nums,pos+1,1)+nums[pos];

            //excluding current element
            int val2 = func(nums,pos+1,0);

            return dp[pos][prev] = max(val1,val2);

        } else {
            //excluding current element is the only option
            int val2 = func(nums,pos+1,0);
            return dp[pos][prev] = val2;
        }
    }
    int rob(vector<int>& nums)
    {
        memset(dp,-1,sizeof dp);
        func(nums,0,0);
        return 0;
    }
};
class Solution2
{
public:
    int dp[1000];
    int func(vector<int> nums,int pos) {
        if(pos>=nums.size()) {
            return 0;
        }
        if(dp[pos]!=-1) return dp[pos];
        else{
            int val1 = func(nums,pos+1);
            int val2 = func(nums,pos+2)+nums[pos];
            return dp[pos] = max(val1,val2);
        }
    }
    int rob(vector<int>& nums)
    {

        memset(dp,-1,sizeof dp);
        func(nums,0);
        return dp[0];
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {5,5,10,100,10,5};

    cout << sol.rob(nums);
}
