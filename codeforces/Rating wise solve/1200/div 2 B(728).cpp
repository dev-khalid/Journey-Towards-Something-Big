#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unordered_map<int,int> mp;
        for(int i = 1; i <= n; i++)
        {
            int el;
            cin >> el;
            mp[el] = i;
        }
        int ans = 0;

        for(int i = 1; i <= n; i++)
        {
            if(mp[i])
            {
                //cout << i << " Position : " << mp[i] << endl;
                int limit = (2*n)/i;
                //cout << "Search Limit: " << limit << endl;
                for(int j = 1; j <= limit; j++)
                {
                    if(mp[j]) {
                        //cout << j << " Exists at Pos: " << mp[j] << endl;
                        //if the corresponding element found then
                        if(mp[i]+mp[j] == i*j && mp[i]!=mp[j]) {
                            //cout << "\nMatched at Position : " << mp[i] << " " << mp[j] << "\n";
                            ans++;
                        }
                    }
                }
                mp[i] = 0;
            }
        }
        cout << ans << endl;
    }
}
/**
100
5
5 6 2 1 4

**/

