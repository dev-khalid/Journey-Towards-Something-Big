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
        if(n&1)
        {
            cout << 1 << " ";
            int e = 2;
            int o = 3;
            for(int i = 1; i < n; i++) {
                if(i&1) {
                    cout << o << " ";
                    o+=2 ;
                } else {
                    cout << e << " ";
                    e+=2;
                }
            }
        }
        else
        {
            int o = 1,e = 2;
            for(int i = 0; i < n; i++)
            {
                if(i&1)
                {
                    cout << o << " ";
                    o+=2;
                }
                else
                {
                    cout << e << " ";
                    e+=2;
                }
            }
        }
        cout << endl;
    }
}
