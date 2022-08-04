//source :- https://leetcode.com/problems/find-all-anagrams-in-a-string/
#include<bits/stdc++.h>
using namespace std;
/*class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        unordered_map<char,int> fr;
        int m = 0;
        for(auto c: p)
        {
            fr[c]++;
            m++;
        }

        int n = s.size(),i=0;
        while(i<n)
        {
            if(fr.find(s[i])!=fr.end())
            {
                //start finding it
                int j = i;
                int cnt=0;
                vector<int> ch(26,0);
                while(j<n && j<i+m)
                {
                    if(fr[s[j]]==0)
                    {
                        cnt=0;
                        break;
                    }
                    else
                    {
                        cnt++;
                        ch[s[j]-'a']++;
                    }
                    j++;
                }
                if(cnt==m)
                {
                    //now check for frequencies if they are ok or not .
                    bool ok = true;
                    for(int ii = 0; ii < 26; ii++)
                    {
                        if(fr['a'+ii]!=ch[ii])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if(ok)
                    {
                        ans.push_back(i);
                        i=j;
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                    i=j+1;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};
*/
class Solution
{
public:
    vector<int> findAnagrams(string s,string p)
    {
        int n = s.size(),m=p.size();
        unordered_map<char,char> mp;
        for(auto c: p)
        {
            mp[c]++;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(mp[s[i]])
            {
                int j = i;
                vector<int> ch(26,0);
                bool recheck = true;
                for(; j < i+m && j < n; j++)
                {
                    if(!mp[s[j]])
                    {
                        recheck = false;
                        break;
                    }
                    ch[s[j]-'a']++;
                }
                if(recheck)
                {
                    bool ok = true;
                    for(int ii = 0; ii < 26; ii++)
                    {
                        if(mp['a'+ii]!=ch[ii])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if(ok) ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
int main()
{
    string  s,p;
    //cin >> s >> p;
    s="akazaakshhkaas",p="akash";
    Solution sol;
    vector<int> results = sol.findAnagrams(s,p);
    for(auto it: results)
    {
        cout << it << " ";
    }
    cout << endl;

}
