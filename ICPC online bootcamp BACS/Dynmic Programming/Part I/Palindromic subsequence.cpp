#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string palindromicSubsequence(string s,int b,int e)
    {
        if(b==e)
        {
            string ans;
            ans.push_back(s[b]);
            return ans;
        }
        if(s[b]==s[e])
        {
            if(b+1==e)
            {
                string ans;
                ans.push_back(s[b]);
                ans.push_back(s[b]);
                return ans;
            }
            else
            {

                string ans =  palindromicSubsequence(s,b+1,e-1);
                string res;
                res.push_back(s[b]);
                res += ans;
                res.push_back(s[e]);
                return res;
            }
        }
        else
        {
            string val1 = palindromicSubsequence(s,b+1,e);
            string val2 = palindromicSubsequence(s,b,e-1);
            return val1.size() > val2.size() ? val1 : val2;
        }
    }
};
int main()
{
    string s;
    s = "GEEKSFORGEEKS";//EEKEE , EEGEE
    Solution sol;
    cout << sol.palindromicSubsequence(s,0,s.size()-1);
}
