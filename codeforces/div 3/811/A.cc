#include<bits/stdc++.h>
using namespace std;
int seconds(int h,int m) {
    return h*3600 + m * 60;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,h,m;
        cin >> n >> h >> m;
        int from = seconds(h,m);
        int hi,mi;
        int ans = INT_MAX;
        int to;
        for(int i = 0; i < n; i++)
        {
            cin >> hi >> mi;
             to = seconds(hi,mi);
            if(from > to) {
                ans = min(ans,(86400-from)+to);
            } else {
                ans = min(ans,to-from);
            }
        }
        h = ans/3600;
        m = ans%3600;
        m /= 60;
        cout << h <<" " <<  m << endl;
    }
}
