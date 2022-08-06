//SOURCE:- https://leetcode.com/problems/minimum-window-substring/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool matched(unordered_map<char,int> hash1,unordered_map<char,int> hash2) {
        for(auto it: hash2) {
            if(hash1[it.first] != it.second) {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int> hash1,hash2;
        string ans = "",build_helper="";
        //find the first one .
        int n = s.size(),m = t.size();
        for(auto c: t) {
            hash2[c]++;
        }
        int i;
        for(i = 0; i < n;  i++) {
            build_helper += s[i];
            hash1[s[i]]++;
            if(matched(hash1,hash2)) {
                ans = build_helper;
                break;
            }
        }


        return ans;
    }
};
int main() {
    Solution sol;
    string s,t,ans;
    s = "ADOBECODEBANC",t="ABC";
    ans = sol.minWindow(s,t);
    cout << ans << endl;

}
