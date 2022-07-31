#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(!s.size())
        {
            return 0;
        }
        map<char,int> mp;
        int n = s.size();
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            int possible_ans = 0;
            for(int j = i;  j < n; j++)
            {
                if(mp[s[j]])
                {
                    ans = max(ans,possible_ans);
                    break;
                }
                else
                {
                    mp[s[j]]++;
                    possible_ans++;
                }
            }
            ans = max(ans,possible_ans);
            mp.clear();
        }
        return ans;
    }
    int efficient_algorthm(string s)
    {
        map<char,int> lastPosition;
        int n = s.size(), res = 0,j=0,i=-1;
        for(; j < n; j++)
        {
            if(lastPosition.find(s[j]) != lastPosition.end())
            {
                //found duplicate
                //increasing the window size
                i = max(i,lastPosition[s[j]]+1);
            }
            res = max(res,j-i+1);
            lastPosition[s[j]] = j;
        }
        return res;
    }
};


int main()
{
    string s = "abcabcadda1234567890z";
    Solution Sol;
    cout << Sol.lengthOfLongestSubstring(s);
    cout << Sol.efficient_algorthm(s);
}







