#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> f;
        for(auto el: s) {
            f[el]++;
        }
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(f[s[i]]==1) {
                return i;
            }
        }
        return -1;
    }
};
int main() {
    string s="leetcode";
    Solution sol;
    cout << sol.firstUniqChar(s);
}
