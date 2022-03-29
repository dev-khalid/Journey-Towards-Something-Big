#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> aux = nums;
        for(auto el: nums) {
            if(aux[el]==-1) {//if
                return el;
            }
            aux[el] = -1;
        }
        return -1;
    }
};
int main() {
    vector<int> nums{1,2,3,3};//[1,-1,-1,-1]
    Solution sol;
    int ans = sol.findDuplicate(nums);
    cout << ans << endl;
}
