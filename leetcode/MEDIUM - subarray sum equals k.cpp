//source:- https://leetcode.com/problems/subarray-sum-equals-k/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        unordered_map<int,int> mp;
        mp[sum]=1;
        for(auto it: nums) {
            sum+=it;
            if(mp.find(sum-k)!=mp.end()) {
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
int main()
{
    vector<int> nums = {5,23,27,40,5,5,45};
    int k = 50;
    Solution sol;
    cout << sol.subarraySum(nums,k) << endl;
    return 0;

}
