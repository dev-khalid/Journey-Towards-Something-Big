#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subset_generator(vector<int> &nums) {
    int n = nums.size();
    int subset_ct = (1<<n); //2^n
    vector<vector<int>> subsets;
    for(int mask = 0; mask < subset_ct; mask++) {
        vector<int> subset;
        //now from 0 to n check if the bit is set
        //if set then push the corresponding element
        for(int i = 0; i < n; i++) {
            if(mask & (1<<i)) {
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main() {
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> subsets;
    subsets = subset_generator(nums);
    for(auto x: subsets) {
            cout << "{ ";
        for(auto elem: x) {
            cout << elem << " ";
        }
            cout << "}\n";
    }
    return 0;
}
