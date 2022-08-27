#include<bits/stdc++.h>
using namespace std; 
class Solution { 
    public:
    string longestPalindrome(string s) {
        return s; 
    }
    void func() { 
        int dp[200][200]; 
        memset(dp,-1,sizeof dp); 
        cout << dp[0][0] << endl; 
    }
};
int main() { 
    Solution sol; 
    sol.func(); 
}