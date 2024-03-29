#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<long long> pref(n,0);
    vector<long long> rpref(n,0);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i==0)
        {
            pref[i] = v[i];
        }
        else
        {
            pref[i] = pref[i-1]+v[i];
        }
    }
    for(int i = n-1; i >=0; i--)
    {
        if(i==n-1)
        {
            rpref[i] = v[i];
        }
        else
            rpref[i] = rpref[i+1] + v[i];
    }
    reverse(rpref.begin(),rpref.end());
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        ll target = pref[i];
        int lb = lower_bound(rpref.begin(),rpref.end(),target)-rpref.begin();

        if(binary_search(rpref.begin(),rpref.end(),target))
        {
            int id = n-lb-1;
            //cout << "lb and real_id: " << lb << " "<< id << endl;
            if(id>i)
            {
                ans = max(ans,pref[i]);
            }
        }
    }
    cout << ans << endl;
}

