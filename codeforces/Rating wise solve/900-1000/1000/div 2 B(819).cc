#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        if(n>m || (n%2==0 && m&1))
        {
            cout << "NO\n";
            continue;
        }
        if(m%n==0)
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << m/n << " ";
            cout << endl;
        }
        else
        {
            cout << "YES\n";
            if(n&1)
            {
                for(int i = 0; i < n-1; i++)
                {
                    cout << 1 << " ";
                }
                cout << (m-(n-1)) ;
                cout << "\n";
            }
            else
            {
                // n & m even
                for(int i = 0; i < n-2; i++)
                {
                    cout << 1 << " ";
                }
                cout << (m-(n-2))/2 << " " << (m-(n-2))/2;
                cout << "\n";
            }
        }
    }
}
