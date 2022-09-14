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
        int row = max(n,m),col = min(n,m);
        if(row==1 && col==1)
        {
            cout << 0 << endl;
        }
        else if(row==1 || col==1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

}
