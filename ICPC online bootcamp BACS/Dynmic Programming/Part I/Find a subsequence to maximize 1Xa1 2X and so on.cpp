//source:- https://www.youtube.com/watch?v=cbgdSX2pXcQ&t=3871s
//Statement: Given an array of n<1000 . Find a subsequence to maximize the following expression. 1*a1+2*a2+3*a3....

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int dp[100][1000];
    int helperFunc(vector<int> nums,int p1,int p2) {
        if(p1>=nums.size() || p2>nums.size()) {
            return 0;
        }
        if(dp[p1][p2]!=-1) {
            return dp[p1][p2];
        } else {
            //ignoring the current element from the sequence
            int val1 = helperFunc(nums,p1+1,p2);
            //taking the current element
            int val2 = helperFunc(nums,p1+1,p2+1) + nums[p1]*p2;
            return dp[p1][p2] = max(val1,val2);
        }
    }
    int maxSequence(vector<int> &nums) {
        memset(dp,-1,sizeof dp);
        helperFunc(nums,0,1);
        return dp[0][1];
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,1,0,-99,100};
    cout << sol.maxSequence(nums);
}

