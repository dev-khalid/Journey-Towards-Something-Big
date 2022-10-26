class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int up = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int> v(2);
        if(lb==up) {
            v[0] = -1;
            v[1] = -1;
        }else {
            v[0] = lb;
            v[1] = up-1;
        }
        return v;
    }
};
