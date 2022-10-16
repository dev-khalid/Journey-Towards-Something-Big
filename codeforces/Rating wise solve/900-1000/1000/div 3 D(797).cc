#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        //for k segment
        int cnt = 0;
        int ans = INT_MAX;
        for(int i = 0; i < k; i++)
        {
            if(s[i]=='W')
            {
                cnt++;
            }
        }
        ans = min(ans,cnt);
        for(int i = k; i < n; i++)
        {
            //from this point onwards
            if(s[i]=='W')
            {
                cnt++;
            }

            if(s[i-k]=='W')
            {
                cnt--;
            }
            ans = min(ans,cnt);
        }
        cout << ans << endl;


    }
}
