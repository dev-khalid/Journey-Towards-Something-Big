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
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> dp(n+1,0);
        dp[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            //if the current element can handle left side
            int left = i-v[i]-1;
            if(left >= 0 && dp[left])
            {
                //covered left side
                dp[i] = 1;
            }
            int right = i+v[i];
            if(right <= n && dp[i-1])
            {
                dp[right] = 1;
            }
        }
        cout << (dp[n]==1 ? "YES\n" : "NO\n");
    }
}
//it is getting so much complex and getting out of my head
//probably not of my level .
