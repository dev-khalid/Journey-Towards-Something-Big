#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_map<string,bool> mp;
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]] = true;
        }
        vector<int> ans;
        for(auto it: v) {
            int k = it.size();
            string s1,s2;
            bool ok = false;
            for(int i = 1; i <= k-1; i++) {
                s1 = it.substr(0,i);
                s2 = it.substr(i);
                if(mp.find(s1) != mp.end() && mp.find(s2) != mp.end()) {ok = true; break; }
            }
            if(ok) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}
