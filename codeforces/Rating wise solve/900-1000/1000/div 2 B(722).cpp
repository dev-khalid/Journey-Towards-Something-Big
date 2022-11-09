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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = INT_MAX;
        sort(v.begin(),v.end());
        int ans = 0;
        for(auto it: v)
        {
            if(it<=0)
            {
                ans++;
            }
            else
                mn = min(mn,it);
        }
        bool flag = (mn<INT_MAX);
        for(int i = 1; i < n; i++)
        {
            if(v[i]<=0)
            {
                flag &=(v[i]-v[i-1]>=mn);
            }
        }
        cout << (flag? ans+1 : ans ) << endl;
    }
}
