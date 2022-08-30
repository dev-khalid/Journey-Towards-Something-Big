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
        vector<vector<char>> grid(2,vector<char>(n));
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                if(c!='R')
                {
                    c = 'G';
                }
                grid[i][j] = c;
            }
        }

        bool flag = true;
        for(int j = 0; j < n; j++)
        {
            char c1,c2;
            c1 = grid[1][j],c2 = grid[0][j];
            if(c1==c2) {
                flag = false;
                break;
            }

        }
        cout << (flag?"YES\n": "NO\n");


    }
}

