//source :- https://leetcode.com/problems/minimum-size-subarray-sum/submissions/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int i = 0,j=-1;
        int ans = INT_MAX;
        vector<int> p(n,0);
        for(int ii = 0; ii < n; ii++) {
            sum+=nums[ii];
            p[ii] = sum;
        }
        while(i<n) {
            if(p[i]>=target) {
                ans = min(ans,i+1);
                while(j+1<i && p[i]-p[j+1]>=target) {
                    j++;
                    ans = min(ans,i-j);
                }
                if(i<n) i++;

            } else {
                i++;
            }
        }
        if(ans==INT_MAX)   return 0;
        return ans;
    }
};
