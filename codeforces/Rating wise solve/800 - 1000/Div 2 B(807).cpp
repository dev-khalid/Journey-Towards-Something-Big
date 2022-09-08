#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long ans = 0;
        ll val_cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i] ;
            if(i<n-1)
            {
                if(!a[i])
                {
                    if(val_cnt)
                        ans++;
                }
                else
                {
                    val_cnt++;
                    ans+=a[i];
                }
            }
        }
        cout << (val_cnt ? ans : 0) << endl;
    }
}
