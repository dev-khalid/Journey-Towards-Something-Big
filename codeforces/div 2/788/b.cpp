#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int m;
        cin >> m;

        vector<bool> sp(26,false);
            char c;
        for(int i = 0; i < m; i++) {
            cin >> c;
            sp[c-'a'] = true;
        }
        int ans = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {

            if(sp[s[i]-'a']) {
            ans = max(ans,cnt);
                cnt = 0;
            }
            cnt++;
        }
        cout << ans << endl;
    }
}
