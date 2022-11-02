#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> v(n);
        int ones = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]=='1') {
                ones++;
            }
        }
        int zeros = n - ones;
        //now till zeros if there is any one then they should be a problemetic value
        vector<int> ans;
        for(int i = 0; i < zeros; i++) {
            if(v[i]=='1') {
                ans.push_back(i+1);
            }
        }
        for(int i = zeros; i<n; i++) {
            if(v[i]=='0') {
                ans.push_back(i+1);
            }
        }
        if(ans.size()==0) {
            cout << 0 << endl;
            continue;
        } else {
            cout << 1 << endl;
            cout << ans.size() << " ";
            for(auto it: ans) {
                cout << it << " ";
            }
            cout << endl;
        }

    }
}
