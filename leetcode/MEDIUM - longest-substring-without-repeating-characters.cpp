class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size()) {
            return 0;
        }
        map<char,int> mp;
        int n = s.size();
        int ans = 1;
        for(int i = 0; i < n; i++) {
            int possible_ans = 0;
            for(int j = i;  j < n; j++) {
                if(mp[s[j]]) {
                    ans = max(ans,possible_ans);
                    break;
                } else {
                    mp[s[j]]++;
                    possible_ans++;
                }
            }
            ans = max(ans,possible_ans);
            mp.clear();
        }
        return ans;
    }
};
