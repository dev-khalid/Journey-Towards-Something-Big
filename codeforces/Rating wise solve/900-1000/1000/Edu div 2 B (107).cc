#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin>> a >> b >> c;
        if(a>=b)
        {
            string x,y;
            x.push_back('1');
            for(int i = 0; i < a-1; i++)
            {
                x.push_back('0');
            }
            int left = b-c+1;
            while(left--)
            {
                y.push_back('1');
            }
            c--;
            while(c--)
            {
                y.push_back('0');
            }
            cout << x << " " << y << endl;
        }
        else
        {
            string x,y;
            x.push_back('1');
            for(int i = 0; i < b-1; i++)
            {
                x.push_back('0');
            }
            int left = a-c+1;
            while(left--)
            {
                y.push_back('1');
            }
            c--;
            while(c--)
            {
                y.push_back('0');
            }
            cout << y << " " << x << endl;
        }
    }
}
