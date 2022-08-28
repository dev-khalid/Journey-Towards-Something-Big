//source : https://www.geeksforgeeks.org/job-assignment-problem-using-branch-and-bound/
//solution source : https://www.youtube.com/watch?v=685x-rzOIlY&list=PLb3g_Z8nEv1icFNrtZqByO1CrWVHLlO5g&index=3
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //need to write a recursive function that serves the purpose .
    int calculate(vector<vector<int>> & cost,vector<bool> done,int n,int level) {
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
                mn = min(mn,calculate(cost,done,n,level+1)+cost[level][i]);
                done[i] = false;
            }
        }
        return mn;
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
    cout << sol.calculate(cost,done,n,0);

}
