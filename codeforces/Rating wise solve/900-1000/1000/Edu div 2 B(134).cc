#include<bits/stdc++.h>
using namespace std;
int dist(int r,int c,int x,int y)
{
    return abs(r-x)+abs(c-y);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,x,y,d;
        cin >> n >> m >> x >> y >> d;

        if(x==n || y==m )
        {
            if(dist(x,y,n,m)<=d)
            {
                cout << -1 << endl;
            }
            else
            {
                //check if x is blocking lower line or y is blocking left lines
                if((y==m&& y-d<=1) || (x==n&&x-d<=1))
                {
                    cout << -1 << endl;
                }
                else
                    cout << dist(1,1,n,m) << endl;
            }
        }
        else if( (x+d>=n && x-d <= 1) || (y+d>=m && y-d<=1) || (x+d>=n && y+d>=m) ||(x-d<=1 && y-d<=1) )
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist(1,1,n,m) << endl;
        }
    }
}
//learned an amazing way of implementation .. that was crazy .
/*
100
5 5 2 2 1

5 5 4 4 1

*/
