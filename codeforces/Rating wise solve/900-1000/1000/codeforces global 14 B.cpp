#include<bits/stdc++.h>
using namespace std;
bool fullSquare(int x)
{
    int y = sqrt(x);

    return y*y==x;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int d2 = n/2, d4 = n/4;
        bool found = false;
        if(n%2==0)
        {
            if(fullSquare(d2))
            {
                found = true;
            }
        } if(n%4==0)
        {
            if(fullSquare(d4))
            {
                found = true;
            }
        }
            cout << (found ? "YES\n" : "NO\n");

    }
}
