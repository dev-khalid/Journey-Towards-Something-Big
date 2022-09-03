
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
         unordered_map<char,int> mp;
         int cnt = 0;
         int n = s.size();
         for(int i = 0; i < n; i++) {
            if(mp[s[i]]>0) {
                cnt++;
                mp.clear();
            } else {
                mp[s[i]]++;
            }
         }
         cout << n - 2*cnt << endl;

    }
}

