#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n;
        vector<int> r(n+2,0);
        for(int i = 1; i <= n; i++)
        {
            cin >> r[i];
        }

        cin >> m;
        vector<int> b(m+2,0);
        for(int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        int cnt1 = 0;
        for(int i = 0; i <= n; i++) {
            cnt1+=r[i];
            ans = max(cnt1,ans);
        }
        cnt1 = ans;
        for(int i = 0; i <= m; i++) {
            cnt1+=b[i];
            ans = max(cnt1,ans);
        }

        cout << ans << endl;
    }
}
