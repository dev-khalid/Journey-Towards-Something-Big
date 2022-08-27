#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //once i find the recurrence relation it's easy to setup memoization . onec a memoization is set it's easy to move to tabular method

    string longestPalindrome(string s)
    {
        int n = s.size();
        vector<vector<bool>> dp(n+1,vector<bool>(n+1,false));


        int mx = 0,b=0,e=0;
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
                    if(mx < j-i+1)
                    {
                        mx = j-i+1,b = i,e = j;
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
    s = "xyxyxz";
    cout << sol.longestPalindrome(s);
}
