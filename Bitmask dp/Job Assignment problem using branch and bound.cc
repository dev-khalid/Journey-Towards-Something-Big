//source : https://www.geeksforgeeks.org/job-assignment-problem-using-branch-and-bound/
//solution source : https://www.youtube.com/watch?v=685x-rzOIlY&list=PLb3g_Z8nEv1icFNrtZqByO1CrWVHLlO5g&index=3
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //need to write a recursive function that serves the purpose .
    int bruteForce(vector<vector<int>> & cost,vector<bool> done,int n,int level) {
        if(level == n-1 && n>1) {
            for(int i = 0; i < n; i++) {
                if(!done[i]) {
                    return cost[level][i];
                }
            }
        }
        if(level>=n) return 0; //this is to handle where the array has 1 row .

        int mn = INT_MAX,min_id = -1;
        for(int i = 0; i < n; i++) {
            if(!done[i]) {
                done[i] = true;
                mn = min(mn,bruteForce(cost,done,n,level+1)+cost[level][i]);
                done[i] = false;
            }
        }
        return mn;
    }
    int jobAssignmentHelper(vector<vector<int>> &dp,vector<vector<int>> &cost,int n,int level,int mask) {
        if(level==n) {
            return 0;
        }
        if(dp[level][mask]!=-1) return dp[level][mask];
        int ans = INT_MAX;
        //for each element on the mask try every possible solution
        for(int i = 0; i < n; i++) {
            if(mask & (1<<i)) {
                //the i'th col or job is available.
                ans = min(ans,jobAssignmentHelper(dp,cost,n,level+1,mask ^ (1<<i))+cost[level][i]);
            }
        }
        return dp[level][mask] = ans;
    }
    int jobAssignmentDriver(vector<vector<int>> &cost) {

        vector<vector<int>>  dp(21,vector<int>(1<<21,-1));

        int n = cost[0].size();
        return jobAssignmentHelper(dp,cost,n,0,(1<<n)-1);
    }

};

int main() {
    vector<vector<int>> cost = {
        {
            9,2,7,8
        },
        {
            6,4,3,7
        },
        {
            5,8,1,8
        },
        {
            7,6,9,4
        }
    };
    int n = cost[0].size();
    vector<bool> done(n,false);
    Solution sol;
    //cout << sol.bruteForce(cost,done,n,0) << endl;
    cout << sol.jobAssignmentDriver(cost);

}
