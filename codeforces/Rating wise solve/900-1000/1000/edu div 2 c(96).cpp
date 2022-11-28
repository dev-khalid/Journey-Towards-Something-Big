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
        if(n<=2)
        {
            if(n==2)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
            for(int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            //start with last 2 digit first
            int o,e;
            int limit;
            limit = (2+n)/2;
            cout << (2+limit)/2 << endl;
            cout << 2 << " " << (n&1? n-1 : n) << endl;
            if(n&1)
            {
                o = n, e = n-3;
            }
            else
            {
                o = n-1, e = n-2;
            }
            for(int i = 3; i < limit; i++)
            {
                if(i&1)
                {
                    cout << i << " " << o<< endl;
                    o-=2;
                }
                else
                {

                    cout << i << " " << e << endl;
                    e-=2;
                }
            }
            cout << 1 << " " << limit << endl;
        }
    }
}
