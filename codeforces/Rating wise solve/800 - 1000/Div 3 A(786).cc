#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        if(x>y || y%x)
        {
            cout << 0 << " " << 0 << endl;
        }
        else if(x==y)
        {
            cout << 1 << " " << 1 << endl;
        } else if(y%x==0) {
            cout << 1 << " " << y/x << endl;
        }
    }
}
