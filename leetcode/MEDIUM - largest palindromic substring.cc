//source : https://leetcode.com/problems/longest-palindromic-substring/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    int func(vector<vector<int>> &dp,string s,int b,int e) {
        if(dp[b][e]!=-1) return dp[b][e];
        if(b>=e) return 1;

        if(s[b]==s[e]) return dp[b][e] = func(dp,s,b+1,e-1);
        else return dp[b][e] = 0;
    }
    string longestPalindrome(string s)
    {
        vector<vector<int>> dp(1005,vector<int> (1005,-1));
        int n = s.size();
        int mx = -1;
        int b = 0,e = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(func(dp,s,i,j)) {
                    if(mx < j-i+1) {
                        mx = j-i+1;
                        b = i , e = j;
                    }
                }
            }
        }
        return s.substr(b,e-b+1);
    }
};

int main()
{
    Solution sol;
    string s;
    s = "babad";
    cout << sol.longestPalindrome(s);
}
