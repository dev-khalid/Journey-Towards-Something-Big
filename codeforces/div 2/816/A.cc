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
        if(n==1 && m==1)
        {
            cout << 0 << endl;
            continue;
        }
        int row = max(n,m),col = min(n,m);
        cout << row + (col-1)*2 << endl;
    }
}
