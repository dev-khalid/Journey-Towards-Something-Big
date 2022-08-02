//source :- https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/
class Solution
{
public:
    vector<int> findAnagrams(string s,string p)
    {
        int n = s.size(),m=p.size();
        vector<int> fr(26,0),window(26,0);
        vector<int> ans;
        if(n<m) return {};
        for(int i = 0; i < m; i++) {
            window[s[i]-'a']++,fr[p[i]-'a']++;
        }
        if(window==fr) ans.push_back(0);
        for(int i = m; i<n;i++){
            window[s[i-m]-'a']--;
            window[s[i]-'a']++;
            if(fr==window) ans.push_back(i-m+1);
        }
        return ans;
    }
};
//beautiful and obvious solution
