//source:- https://leetcode.com/problems/maximum-profit-in-job-scheduling/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct X
    {
        int data,pos;
    };
    static bool customCompare(X a,X b) {
        return a.data < b.data;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)
    {
        int n = startTime.size();
        vector<X> st;//start time with it's index;
        for(int i = 0; i < n; i++)
        {
            st.push_back({startTime[i],i});
        }
        sort(st.begin(),st.end(),customCompare);
        for(auto it: st)
        {
            cout << it.data << " " << it.pos << endl;
        }
        return 0;
    }
};

int main()
{
    Solution sol;
    vector<int> startTime = {1,2,3,3};
    vector<int> endTime = {3,4,5,6};
    vector<int> profit = {50,10,40,70};
    cout << sol.jobScheduling(startTime,endTime,profit);
}
