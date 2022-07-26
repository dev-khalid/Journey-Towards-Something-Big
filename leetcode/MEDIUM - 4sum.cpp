//source: https://leetcode.com/problems/4sum/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                //now go for two pointer approach
                ll target2 = (ll)target-nums[i]-nums[j];
                int l = j+1,r=n-1;
                while(l<r) {
                    int sum = nums[l]+nums[r];
                    if(sum==target2) {
                        vector<int> quad;
                        quad = {nums[i],nums[j],nums[l],nums[r]};
                        s.insert(quad);
                        l++;
                    } else if(sum<target2) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        for(auto it: s) {
            ans.push_back(it);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,1,2,2,3,4};
    int target = 8;
    Solution sol;
    vector<vector<int>> res = sol.fourSum(nums,target);
}
