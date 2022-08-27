//source : https://leetcode.com/problems/palindromic-substrings/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.size();
        vector<vector<bool>> dp(n+1,vector<bool>(n+1,false));


        int cnt = 0;
        for(int g = 0; g < n; g++)
        {
            for(int i = 0,j = g; j < n; i++,j++)
            {
                if(g==0)
                {
                    //first diagonal
                    dp[i][j] = true;
                }
                else if(g==1)
                {
                    if(s[i] == s[j])
                    {
                        dp[i][j] = true;
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                    {
                        dp[i][j] = true;

                    }

                    else
                    {
                        dp[i][j] = false;
                    }
                }

                if(dp[i][j])
                {
                    cnt++;
                }
            }

        }
        return cnt;

    }
};

int main() {
    Solution sol;
    cout << sol.countSubstrings("xyx");
}
