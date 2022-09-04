#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1>> s2;
        bool hasA = false;
        for(auto it: s2)
        {
            if(it=='a')
            {
                hasA = true;
                break;
            }
        }

        if(!hasA)
        {
            ll x = s1.size();
            ll ans = 1LL<<x;
            cout << ans << endl;
        }
        else if(s2.size()==1 && hasA)
        {
            cout << 1 << endl;
        }
        else if(hasA && s2.size() > 1)
        {
            cout << -1 << endl;
        }

    }
}
