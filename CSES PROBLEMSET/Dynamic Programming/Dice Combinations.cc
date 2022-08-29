//source : https://cses.fi/problemset/task/1633
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1E9+7;
int main()
{
    int n;
    cin >> n ;
    vector<int> ways(n+1,0);
    ways[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < 7; j++)
        {
            if(i>=j)
            {
                ways[i] = (ways[i]%MOD +  ways[i-j]%MOD)%MOD;
            }

        }
    }
        cout << ways[n] << endl;
}

