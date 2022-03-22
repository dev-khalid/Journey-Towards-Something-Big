#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums{2,7,10,15};
    int target = 17;
    //now need to sort them
    int n = nums.size();
    vector<pair<int,int>> modified_nums(n);

    for(int i = 0; i < n; i++) {
        modified_nums[i] = {nums[i],i};
    }
    sort(modified_nums.begin(),modified_nums.end());
    int s = 0,e = n-1;
    while(s<e) {
        if(modified_nums[s].first+modified_nums[e].first == target) {
            return {modified_nums[s].second,modified_nums[e].second};
        } else if(modified_nums[s].first+modified_nums[e].first < target) {
            s++;
        } else {
            e--;
        }
    }
    return {-1,-1};
}
