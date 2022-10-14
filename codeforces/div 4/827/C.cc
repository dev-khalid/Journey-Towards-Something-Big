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

        pair<char,int> c1;
        pair<char,int> c2;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            char c = v[i][0];
            for(int j = 0; j < n; j++)
            {
                if(v[i][j]==c) cnt++;
            }
            if(cnt==7 && c!='.')
            {
                c1 = {c,7};
            }
            if(cnt==8 && c!='.') {
                c2 = {c,8};
            }

        }
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            char c = v[0][i];
            for(int j = 0; j < n; j++)
            {
                if(v[j][i]==c) cnt++;
            }
            if(cnt==7 && c!='.')
            {
                c1 = {c,7};
            }
            if(cnt==8 && c!='.') {
                c2 = {c,8};
            }

        }

        if(c1.second==7 && c1.first!=c2.first) {
            cout << c2.first << endl;
        } else {
            cout <<
        }
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

BBBBBBBR
BBBBBBBR
BBBBBBBR
BBBBBBBR
BBBBBBBR
BBBBBBBR
BBBBBBBR
BBBBBBBR
*/
//hoy current element er dane bame ekta kora b thakbe and sei full row or column ta valid hobe ?

