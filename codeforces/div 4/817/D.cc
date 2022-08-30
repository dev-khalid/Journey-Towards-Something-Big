
#include<bits/stdc++.h>
using namespace std;
typedef   long long ll;
int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0;
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        for(ll i = 0; i < n; i++)
        {
            if(s[i]=='L')
            {
                cnt+=i;
            }
            else
            {
                cnt += (n-1-i);
            }
        }
        vector<ll> ans;
        ll i = 0, j = n-1;
        while(i<n/2||j>=n/2)
        {
            ll dist1 = -1,dist2=-1;
            if(i<n/2 )
            {
                if(s[i]=='L')
                {
                    //R hobe
                    dist1 = (n-1-i);
                }

            }
            if(j>=n/2)
            {
                if(s[j] == 'R')
                {
                    //L hobe
                    dist2 = j;
                }
            }
            if(dist1==-1 && dist2==-1)
            {
                //nothing to change
                j--,i++;
            }
            else if(dist1==-1 && dist2!=-1)
            {
                //only change second one
                cnt-=(n-1-j);
                cnt+=j;
                ans.push_back(cnt);
                j--;
            }
            else if(dist1!=-1 && dist2==-1)
            {
                //only change first one
                cnt-=i;
                cnt+=(n-1-i);
                ans.push_back(cnt);
                i++;
            }
            else
            {
                //can change both of them
                if(dist1>dist2)
                {
                    //change first
                    cnt-=i;
                    cnt+=dist1;
                    ans.push_back(cnt);
                    i++;
                }
                else
                {
                    //change second one
                    cnt-=(n-1-j);
                    cnt+=dist2;
                    ans.push_back(cnt);
                    j--;
                }
            }
        }
        int as = ans.size();
        if(as)
        {
            for(i = 0; i < as; i++)
            {
                cout << ans[i] << " ";
            }
            for(ll k = as; k < n; k++)
            {
                cout << ans[as-1] << " ";
            }
        } else {
            for(i = 0; i < n; i++) {
                cout << cnt << " ";
            }
        }
        cout << "\n";
    }
}


