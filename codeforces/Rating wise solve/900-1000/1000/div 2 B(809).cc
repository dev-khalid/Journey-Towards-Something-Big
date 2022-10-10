#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> color(n);
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < n; i++) {
            cin >> color[i];
            mp[color[i]].push_back(i);
        }
        vector<int> ans(n+1,0);
        for(auto it: mp) {
            int total = 1;
            vector<int> v = it.second;

            int vs = v.size();
            if(vs==0) {
                ans[it.first] = 0;
                continue;
            }
            for(int i = 0; i < vs-1; i++) {
                if((v[i+1]-v[i]-1)&1) {
                    //nothing will be added
                } else {
                    total++;
                }
            }

                ans[it.first] = total;
        }
        for(int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;

    }
}
