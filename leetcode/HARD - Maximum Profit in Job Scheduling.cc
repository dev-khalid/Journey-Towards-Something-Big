//source:- https://leetcode.com/problems/maximum-profit-in-job-scheduling/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct st {
        int data;
        int pos;
    };
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<st> ST;
        int n = startTime.size();
        for(int i = 0; i < n; i++) {
            ST.push_back({startTime[i],i});
        }

        for(auto it: ST) {
            cout << it.data << " " << it.pos << endl;
        }
        return 0;
    }
};

int main() {
    Solution sol;
    vector<int> startTime = {};
    vector<int> endTime = {};
    vector<int> profit = {};
    cout << sol.jobScheduling(startTime,endTime,profit);
}
