//source :- https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
#include<bits/stdc++.h>
using namespace std;
struct Job {
    int id;
    int dead;
    int profit;
};
bool custom_compare(Job a,Job b)
{
    return a.profit > b.profit;
}
class Solution {
    public:

    vector<int> JobScheduling(Job arr[], int n)
    {
        vector<int> ans(n,0);
        sort(arr,arr+n,custom_compare);
        //now assigning them is the job
        int total_profit = 0,jobs = 0;
        for(int i = 0; i < n; i++) {
            Job a = arr[i];
                int j = a.dead-1;
            if(ans[j]==0) {
                ans[j] = a.profit;
                total_profit+=a.profit;
                jobs++;
            } else {
                while(j>=0 && ans[j]!=0) j--;
                if(j>=0) total_profit+=a.profit,jobs++,ans[j] = a.profit;
            }
        }
        vector<int> res = {jobs,total_profit};
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    Job arr[n];
    // = {{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,1,15}}
    for(int i = 0; i < n; i++) {
        int idx,d,p;
        cin >> idx >> d >> p;
        arr[i] = {idx,d,p};
    }
    vector<int> result;
    Solution sol;
    result = sol.JobScheduling(arr,n);
    for(auto j: result) {
        cout << j << " ";
    }


}
