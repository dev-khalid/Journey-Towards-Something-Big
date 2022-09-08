#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int val(char c) {
    return c-96;
}
bool comparator(pair<char,int> &a,pair<char,int> &b) {
    return a.first < b.first;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        ll p;
        cin >> s >> p;

        int n = s.size();
        vector<pair<char,int>> v;
        for(int i = 0; i < n; i++) {
            v.push_back({s[i],i});
        }
        sort(v.begin(),v.end(),comparator);
        ll w = 0;
        vector<int> valid;
        for(int i = 0; i < n; i++) {
            w+= val(v[i].first);
            if(w<=p) {
                valid.push_back(v[i].second);
            }
        }
        sort(valid.begin(),valid.end());
        for(auto it: valid) {
            cout << s[it];
        }
        cout << endl;

    }
}
