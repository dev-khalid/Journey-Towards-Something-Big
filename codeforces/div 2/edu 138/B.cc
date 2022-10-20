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
        ll h = 0, s = 0;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            h+= a[i];
        }
        int mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            s+=b[i];
            mx= max(mx,b[i]);
        }
        s-=mx;
        h+=s;
        cout << h << endl;
    }
}

