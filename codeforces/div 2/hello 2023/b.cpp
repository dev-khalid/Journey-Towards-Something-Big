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
        int n;
        cin >> n;

        if(n==3)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if(n&1)
            {
                int ans = n/2;

                for(int i = 0; i < n; i++)
                {
                    if(i&1)
                    {
                        cout << ans<< " ";
                    }
                    else
                    {
                        cout << -1*(ans-1) << " ";
                    }

                }
                cout << endl;
                continue;
            }
            int ans = -1;
            for(int i = 0; i < n; i++)
            {
                cout << ans << " ";
                ans*=-1;
            }
            cout << endl;
        }
    }
}
