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
        int i = 0,j=0;
        while(i<n || j<n)
        {
            if(sum==k)
            {
                cnt++;
                cout << cnt << " " << i << " " << j << endl;
                if(i<n)
                    sum += nums[i++];
                else
                {
                    sum-=nums[j++];
                }
            }
            else if(sum > k)
            {
                sum-=nums[j++];
            }
            else
            {
                if(i<n)
                    sum+=nums[i++];
                else
                    break;
            }
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
