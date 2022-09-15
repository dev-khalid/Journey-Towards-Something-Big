#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<string>  valid = {"00","50","25","75"};
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        int sz = n.size();
        string last = n.substr(sz-2,2);
        bool ok = false;
        for( auto it: valid)
        {
            if(it==last)
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            cout << 0 << endl;
        }
        else
        {

            int ans = INT_MAX;
            int c1 = 0;
            int c2 = 0;
            sz--;
            while(sz-c1>=0 && n[sz-c1]!='5') c1++;
            while(sz-c2>=0 && n[sz-c2]!='0') c2++;
            if(c1<sz)
            {
                int k = c1+1;
                while(sz-k>=0 && n[sz-k]!='2' && n[sz-k]!='7') k++;
                if(k<=sz)
                {
                    ans = min(ans,k-1);
                }
            }
            if(c2<sz)
            {
                int k = c2+1;
                while(sz-k>=0 && n[sz-k]!='0' && n[sz-k]!='5') k++;
                if(k<=sz)
                {
                    ans = min(ans,k-1);
                }
            }
            cout << ans << endl;
        }
    }
}


