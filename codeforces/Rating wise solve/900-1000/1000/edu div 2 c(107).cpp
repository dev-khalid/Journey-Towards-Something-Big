#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin >> n >> q;
    vector<int> v(51,INT_MAX);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v[x] = min(v[x],i);
    }
    vector<int> ans;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        ans.push_back(v[x]);
        for(auto &it: v) {
            if(it<v[x]) {
                it++;
            }
        }
        v[x] = 1;
    }
    for(auto it: ans) {
        cout << it << " ";
    }

}
