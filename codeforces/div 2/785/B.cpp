#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<bool> fr(26,false);
        bool flag = true;
        int n = s.size();
        int index=n;
        for(int i = 0; i < n; i++) {
            if(fr[s[i]-'a']) {
                index = i;
                break;
            }
            fr[s[i]-'a'] = true;
        }
        for(int i = index; i < n; i++) {
            if(s[i]!=s[i%index]){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
