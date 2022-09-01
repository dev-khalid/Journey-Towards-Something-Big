
#include<bits/stdc++.h>
using namespace std;
int seconds(int h,int m) {
    return h*3600 + m * 60;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         int n;
         cin >> n;
         vector<int> v(n);
         unordered_map<int,int> mp;
         for(int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
         }
         int cnt = -1;
         for(int i = 0; i < n;i++) {
            if(mp[v[i]]>1) {
                mp[v[i]]--;
                cnt = i;
            }
         }

         cout << cnt+1 << endl;
    }
}
