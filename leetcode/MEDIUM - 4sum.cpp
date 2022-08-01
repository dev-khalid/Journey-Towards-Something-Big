//source: https://leetcode.com/problems/4sum/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                //now go for two pointer approach
                int target2 = target-nums[i]-nums[j];
                int l = j+1,r=n-1;
                while(l<r) {
                    int sum = nums[l]+nums[r];
                    if(sum==target2) {
                        vector<int> quad;
                        quad = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(quad);
                        l++;
                    } else if(sum<target2) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

}
