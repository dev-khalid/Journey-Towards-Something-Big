#include<bits/stdc++.h>
using namespace std;
bool ok(int val,int ai,int x)
{
    return abs(val-ai) <= x;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = v[0] - x;
        int r = v[0] + x;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            l = max(l,v[i]-x);
            r = min(r,v[i]+x);
            if(l>r) {
                l = v[i] - x;
                r = v[i] + x;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
