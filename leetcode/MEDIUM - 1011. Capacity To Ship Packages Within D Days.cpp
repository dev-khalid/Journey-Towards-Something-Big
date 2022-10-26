#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(vector<int> &prefix,int days,int weight) {
        //this is a function to check if for the max weight capacity given .. conveyor belts can be shiped within days
        int cnt =0;
        int last = 0;
        int n = prefix.size();
        for(int i = 1; i<prefix.size(); i++) {
            if(i==n-1) {
                cnt++;
                continue;
            }
            if(prefix[i]-prefix[last]>weight) {
                //this is the breaking condition .
                //on this day the ship should be shipped .
                cnt++;
                last = i-1;
            }

        }
        cout << "weights and days " << weight << " " << cnt << endl;
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days)
    {
        int n = weights.size();
        sort(weights.begin(),weights.end());

        vector<int> prefix(n+2);//1 based indexing
        prefix[0] = 0;
        for(int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i]+weights[i];
        }
        int high = prefix[n];
        int low = weights[n-1];
        //now start a binary search on the answer .
        int mid;
        int ans = high;
        while(low<=high) {
            mid = low + (high-low)/2;
            if(isValid(prefix,days,mid)) {
                //now try find to the left half of the array
                ans = min(mid,ans);
                high = mid-1;
            } else {
                //the weight can not ship all the conveyor belt within days
                //so try finding on the right half.
                low = mid+1;
            }
        }
        return ans;

    }
};
int main()
{
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    Solution sol;
    cout << sol.shipWithinDays(weights,days);

}
