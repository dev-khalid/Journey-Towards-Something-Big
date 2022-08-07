//SOURCE:- https://leetcode.com/problems/minimum-window-substring/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool matched(unordered_map<char,int> hash1,unordered_map<char,int> hash2)
    {
        for(auto it: hash2)
        {
            if(hash1[it.first] < it.second)
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t)
    {
        unordered_map<char,int> hash1,hash2;
        string ans="",build_helper="";


        int n = s.size(),m = t.size();

        if(n<m || !n || !m)
        {
            return ans;
        }

        //find the first one .
        for(auto c: t)
        {
            hash2[c]++;
        }
        int i;
        for(i = 0; i < n;  i++)
        {
            build_helper += s[i];
            hash1[s[i]]++;
            if(matched(hash1,hash2))
            {
                ans = build_helper;
                break;
            }
        }

        //removing some of the unnecessary elements from the front
        if(ans.size()==0) return ans;
        int j=0;
        while(j<i)
        {
            if(hash2.find(build_helper[j])==hash2.end())
                hash1.erase(build_helper[j++]);
            else
            {
                if(hash1[build_helper[j]]>hash2[build_helper[j]])
                {
                    hash1[build_helper[j]]--;
                    j++;
                }
                else
                {
                    break;
                }
            }

        };

        build_helper = build_helper.substr(j);
        if(ans.size()>build_helper.size()) ans = build_helper;

        //now its started .
        cout << i << endl;
        for(i=i+1; i<n; i++)
        {
            build_helper+=s[i];

            if(hash2.find(s[i])!=hash2.end() && hash1.find(s[i])!=hash1.end())
            {
                //start removing till the matched character
                j = 0;

                while(j<build_helper.size())
                {
                    if(build_helper[j]!=s[i] )
                    {
                        if( hash2.find(build_helper[j])==hash2.end())
                        {
                            hash1.erase(build_helper[j]);
                        } else {
                            hash1[build_helper[j]]--;
                        }
                        j++;
                    }

                    else
                    {
                        if(hash1[build_helper[j]]>hash2[build_helper[j]])
                        {
                            hash1[build_helper[j]]--;
                            j++;
                        }
                        else
                        {
                            //as now they are equal so we can safely remove this one

                            break;
                        }
                    }
                } ;

                //now need to erase from the beginning
                build_helper = build_helper.substr(j+1);

                //a little bit more optimization can be done
                j=0;
                while(j<i)
                {
                    if(hash2.find(build_helper[j])==hash2.end())
                        hash1.erase(build_helper[j++]);
                    else
                    {
                        if(hash1[build_helper[j]]>hash2[build_helper[j]])
                        {
                            hash1[build_helper[j]]--;
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }

                };
                build_helper = build_helper.substr(j);

            }
            else
            {
                hash1[s[i]]++;
            }

            if(matched(hash1,hash2))
            {
                if(ans.size()>build_helper.size())
                {
                    ans = build_helper;
                }
            }
        }

        return ans;
    }
};
int main()
{
    while(1)
    {
        Solution sol;
        string s,t,ans;
        cin >> s >> t;
        ans = sol.minWindow(s,t);
        cout << ans << endl;

    }

}
