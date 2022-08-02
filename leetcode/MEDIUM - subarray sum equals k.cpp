//source:- https://leetcode.com/problems/subarray-sum-equals-k/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /*int subarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        int i = 0,j=0;
        if(k>=0)
        {
            while(i<n && j<n)
            {
                if(sum==k)
                {
                    cnt++;

                    sum += nums[i++];

                    if(sum==k) cnt++;
                    if(i==n)
                    {
                        while(j<n)
                        {
                            sum-=nums[j++];
                            if(sum==k) cnt++;
                        }
                    }

                }
                else if(sum > k)
                {
                    sum-=nums[j++];
                }
                else
                {
                    sum+=nums[i++];
                }
            }
        }
        else
        {
            while(i<n && j<n)
            {
                if(sum==k)
                {
                    cnt++;
                    sum+=nums[i++];
                    if(sum==k) cnt++;
                    if(i==n)
                    {
                        while(j<n)
                        {
                            sum-=nums[j++];
                            if(sum==k) cnt++;
                        }
                    }
                }
                else if(sum>k)
                {
                    sum+=nums[i++];
                }
                else
                {
                    sum-=nums[j++];
                }
            }

        }
        return cnt;
    }
*/
    int subarraySum(vector<int> &nums,int k) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int sum = nums[i];
            if(sum==k) cnt++;
            for(int j = i+1; j < n; j++) {
                sum+=nums[j];
                if(sum==k) cnt++;
            }
        }return cnt;
    }

};
int main()
{
    vector<int> nums = {-1,2,-3,4,5,6,-10,-4};
    int k = -2;
    Solution sol;
    cout << sol.subarraySum(nums,k) << endl;
    return 0;

}
