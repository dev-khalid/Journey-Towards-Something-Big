#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ans = -1;
        int toSwap = -1;
        int n;
        cin >> n;
        char a,b;
        cin >> a;
        bool noNeed = false;
        for(int i = 1; i < n; i++)
        {
            cin >> b;
            if(b=='R' && a=='L')
            {
                if(ans==-1) ans = 1;
                toSwap = i;
            }
            else if(a=='R' && b=='L')
            {
                noNeed = true;
                ans = 0;
            }
            a = b;
        }
        if(noNeed) {
            cout << 0 << endl;
            continue;
        }
        if(toSwap!=-1) {
            cout << toSwap << endl;
            continue;
        }
        cout << ans << endl;
    }
}
