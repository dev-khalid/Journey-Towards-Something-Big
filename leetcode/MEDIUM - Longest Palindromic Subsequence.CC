#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //i can surely use recursion and memorization but i am improving myself with tabular practice .
    //this one's complexity is way better then the last one.

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        int dp[n][n] = {0};
        //now we will use the gap technique to traverse through a diagonal .
        for(int g = 0; g < n; g++) {
            for(int i = 0, j = g; j < n; j++,i++) {
                if(g==0) {
                    dp[i][j] = 1;
                } else if(g==1) {
                    if(s[i] == s[j]) {
                        dp[i][j] = 2;
                    } else {
                        dp[i][j] = 1;
                    }
                } else {
                    if(s[i] == s[j]) {
                        dp[i][j] = dp[i+1][j-1]+2;
                    } else {
                        dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};

int main() {
    Solution sol;
    string s;
    s = "GEEKSFORGEEKS";
    cout << sol.longestPalindromeSubseq(s);
}
