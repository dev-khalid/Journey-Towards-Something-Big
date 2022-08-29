
//source : https://cses.fi/problemset/task/1634
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1E9+7;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(),coins.end());
    vector<int> ways(x+1,0);
    for(int i = 1; i <= x; i++)
    {
        int mn = INT_MAX;
        for(int j = 0; j < n; j++)
        {
            if(i>=coins[j])
            {
                if(ways[i-coins[j]]==0 && i==coins[j])
                {
                    mn  = min(mn,((ways[i] +  ways[i-coins[j]])%MOD+1)%MOD);
                }
                else if(ways[i-coins[j]]>0)
                {

                    mn  = min(mn,((ways[i] +  ways[i-coins[j]])%MOD+1)%MOD);
                }
            }
            else
            {
                break; //as i as currently less then coins[j] then there no chance that current element will contribute

            }

        }
        if(mn!=INT_MAX)
            ways[i] = mn;
        else
        {
            ways[i] = 0;
        }
        cout << i << " " << ways[i] << endl;
    }
    if(ways[x])
        cout << ways[x] << endl;
    else cout << -1 << endl;
}
