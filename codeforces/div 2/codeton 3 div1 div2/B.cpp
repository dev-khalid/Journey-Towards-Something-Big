#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if(n==1){
            cout << 1 << endl;
            continue;
        }


        vector<ll> seg;
        vector<ll> x = {0,0};
        ll cnt = 1LL;
        x[s[0]-'0']++;
        for(ll i = 1; i < n; i++)
        {
            x[s[i]-'0']++;
            if(i==n-1)
            {
                if(s[i]==s[i-1])
                {
                    seg.push_back(cnt+1);

                }
                else
                {
                    seg.push_back(cnt);
                    seg.push_back(1);
                }
                break;
            }
            if(s[i]==s[i-1])
            {
                cnt++;

            }
            else
            {
                seg.push_back(cnt);
                cnt = 1;
            }
        }

            ll ans = (seg[0]*seg[0]);
            for(ll i = 1; i < seg.size(); i++)
            {
                ans = max(ans,seg[i]*seg[i]);
                ans = max(ans,seg[i]*seg[i-1]);
            }

            ans = max(ans,x[0]*x[1]);
        cout << ans << endl;
    }
}
