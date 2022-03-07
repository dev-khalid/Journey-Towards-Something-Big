#include<bits/stdc++.h>
using namespace std;
//start the pos from 0 and go till n
void finder(vector<int> nums,int pos,int n,int zeros,int sum,int target,int &ways) {

    if(pos==n) {
        if(target==sum) ways+=pow(2,zeros);
        return;
    } else {
        //two different stage from here .
        if(nums[pos]==0) {
            finder(nums,pos+1,n,zeros+1,sum,target,ways);
        }
        else {
            finder(nums,pos+1,n,zeros,sum+nums[pos],target,ways);
            finder(nums,pos+1,n,zeros,sum-nums[pos],target,ways);
        }
        return;
    }
}
int findTargetSumWays(vector<int>& nums, int target) {
    int ways = 0;
    finder(nums,0,nums.size(),0,0,target,ways);
    return ways;
}
int main() {
    /*
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }*/
    int target = 1;
    vector<int> nums{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};

    cout << findTargetSumWays(nums,target);
}
//output


//the array is sorted .
//find x+y=z right ?
