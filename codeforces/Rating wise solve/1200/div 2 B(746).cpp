#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if(is_sorted(v.begin()+1,v.end()) or x*2<=n)
        {
            cout << "YES\n";
            continue;
        }
        if(x==n)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> sorted = v;
        sort(sorted.begin()+1,sorted.end());
        int start = x+1;
        int last = n-x;
        int s = min(start,last)+1;
        int l = max(start,last);
        l = min(l,n);
        s = max(s,0);
        bool sortedFlag = true;
        for(int i = s; i < l; i++) {
            if(sorted[i]!=v[i]) {
                sortedFlag = false;
                break;
            }
        }
        cout << (sortedFlag?"YES": "NO") << "\n";

        }
}


