#include<bits/stdc++.h>
using namespace std;
void flip(int &d) {
    if(d==7) {
        d = 5;
    } else {
        d = 7;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==1)
        {
            cout << -1 << endl;
        }
        else
        {
            bool flag = true;
            int d;
            if(n&1)
            {
                d = 8;
            }
            else
            {

                d = 3;
            }
            for(int i = 1; i < n; i++)
            {
                    cout << 3;
            }
            cout << 8;
            cout << endl;
        }
    }
}
