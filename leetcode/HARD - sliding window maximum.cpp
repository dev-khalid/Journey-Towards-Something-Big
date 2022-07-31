//source :- https://leetcode.com/problems/sliding-window-maximum/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        queue<int> q;
        vector<int> ans;
        int n = nums.size();
        int last = nums[0];
        q.push(last);

        for(int i = 0; i < k; i++) {
            if(nums[i]<=last) {
                q.push(nums[i]);
                last = nums[i];
            } else {
                //we don't need previous elements. Safely remove those ele
                while(!q.empty() || q.front()<= last) q.pop();
                q.push(nums[i]);
            }
        }


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
