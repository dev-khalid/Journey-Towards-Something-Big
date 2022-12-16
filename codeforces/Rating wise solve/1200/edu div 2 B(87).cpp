
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int calc(vector<int> v) {
    sort(v.begin(),v.end());
    for(auto it: v) {
        if(it==-1) {
            return -1;
        }
    }
    return v[2]-v[0];
}
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int> v(3,-1);
        int ans = INT_MAX;
        for(int i = 0; i < s.size(); i++) {
            v[s[i]-'0'-1] = i;
            int c = calc(v);
            if(c!=-1) {
                ans = min(c,ans);
            }
        }
        if(ans==INT_MAX) {
            cout << 0 << endl;
        } else {
            cout << ans + 1 << endl;
        }
    }
}
