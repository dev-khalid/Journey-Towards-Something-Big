#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char v[8][8];
        int n = 8;
        //check column wise first
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        string ans = "-1";
        bool f = false;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            char c = v[i][0];
            for(int j = 0; j < n; j++)
            {
                if(v[i][j]=='R') cnt++;
            }
            if(cnt==8) {
                ans = "R";
                f = true;
                break;
            }

        }
        if(!f) {
            ans = "B";
        }
        cout << ans << endl;
    }
}
/*
2
BBBBBBBB
....B...
....B...
....B...
....B...
....B...
BBBBBBBB
RRRRRRRR

BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
RRRRRRRR
BBBBBBBB
*/
//hoy current element er dane bame ekta kora b thakbe and sei full row or column ta valid hobe ?

