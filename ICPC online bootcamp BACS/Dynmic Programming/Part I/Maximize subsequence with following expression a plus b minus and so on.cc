//source:- https://www.youtube.com/watch?v=cbgdSX2pXcQ&t=3575s
//Statement: given an array n<10^5 . Maximize the sequence with following expression : a1-a2+a3-a4 and so on.
#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    int dp[100000][2];
    int helperFunc(vector<int> nums,int p1,int p2) {
        if(p1>=nums.size()) {
            return 0;
        }
        if(dp[p1][p2]!=-1) {
            return dp[p1][p2];
        } else {
            //taking the current element
            int val1 = helperFunc(nums,p1+1,!p2) + (p2?-1*nums[p1]:nums[p1]);
            //skipping the current element
            int val2 = helperFunc(nums,p1+1,p2);
            return dp[p1][p2] = max(val1,val2);
        }
    }
    int maxSequence(vector<int> &nums) {
        memset(dp,-1,sizeof dp);
        helperFunc(nums,0,0);

        return dp[0][0];
    }
};
int main() {
    vector<int> nums = {3,0,-1,100};
    Solution sol;
    cout << sol.maxSequence(nums);
}
