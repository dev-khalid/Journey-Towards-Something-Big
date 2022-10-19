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
        int r,b;
        cin >> r >> b;
        int ss = r/b;
        int segS,rest;
        //this is the maximum size of the segment
        for(int i = 1; i <= ss; i++)
        {
            //keep a gap of i and print
            //calculate kora dorkar je emon korle remaining elements koyta thake .
            int covered = b*i+i;
            int rs = r-covered;
            cout << covered << " " << rs  << endl;
            if(rs>=0 && rs<= i) {
                rest = rs;
                segS = i;
                break;
            }
        }
        cout << segS << " " << rest << endl;
        /*
        for(int _ = 0; _ < b; _++)
        {
            for(int i = 0; i < segS; i++)
            {
                cout << 'R';
            }
            cout << 'B';
        }
        cout << rest << endl;
        while(rest--)
        {
            cout << 'R';
        }
        cout << endl;
        */
    }
}
