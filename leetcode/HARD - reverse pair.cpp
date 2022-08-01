//source:-https://leetcode.com/problems/reverse-pairs/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution
{
public:
    int actual_merge(vector<int> &nums,int lo,int mid,int hi) {
        int cnt = 0;
        int j = mid+1;
        for(int i = lo;i <= mid; i++) {
            while(j<=hi && (ll)nums[i] > (ll)2*nums[j]) j++;
            cnt += (j-(mid+1));
        }
        vector<int> temp;
        int left = lo,right = mid+1;
        while(left<=mid && right <=hi ) {
            if(nums[left]<=nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid) {
            temp.push_back(nums[left++]);
        }
        while(right <= hi) {
            temp.push_back(nums[right++]);
        }
        //now need to copy them in actual array
        for(int i = lo; i <= hi; i++) {
            nums[i] = temp[i-lo];
        }
        return cnt;
    }
    int merge_partition(vector<int> &nums,int lo,int hi) {
        if(lo>=hi) {
            return 0;
        }
        int mid = (hi+lo)/2;

        int ans = merge_partition(nums,lo,mid);
        ans += merge_partition(nums,mid+1,hi);
        ans += actual_merge(nums,lo,mid,hi);
        return ans;
    }
    int reversePairs(vector<int> &nums) {
        return merge_partition(nums,0,nums.size()-1);
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,3,2,3,1};
    cout << sol.reversePairs(nums);
}
