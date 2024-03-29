//source :- https://leetcode.com/problems/sliding-window-maximum/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        deque<int> dq;
        vector<int> ans;
        int n = nums.size();
        for(int i =0; i < n; i++) {
            if(!dq.empty() && dq.front()== i-k) dq.pop_front();

            while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);

        }
        return ans;
    }
};
int main() {
    Solution Sol;
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> ans;
    ans = Sol.maxSlidingWindow(nums,k);
    for(auto el: ans) {
        cout << el << " ";
    }
    return 0;
}
