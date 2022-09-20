#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end(),cmp))
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            if(v[0]==1 && v[n-1]==n)
            {
                ans = 1;
            }
            else if(v[0]==1 || v[n-1]==n)
            {
                ans = 1;
            }
            else
            {
                if(v[0]==n && v[n-1]==1)
                    ans = 3;
                else ans = 2;
            }

            cout << ans << endl;
        }

    }
    return 0;
}
