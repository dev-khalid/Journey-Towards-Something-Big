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
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i]==b[i] || a[i]+1==b[i])
            {
                continue;
            }
            else
            {
                ok = false;
            }
        }
        cout << (ok?"YES\n":"NO\n");
    }
}
