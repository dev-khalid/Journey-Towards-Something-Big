#include<bits/stdc++.h>
using namespace std;
int col_gen(int c,int k)
{
    return (c%k)-1 < 0 ? c-1 : (c%k)-1;
}
void print(vector<vector<char>> &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,r,c;
        cin >> n >> k >> r >> c;
        vector<vector<char>> s(n,vector<char> (n));
        if(k==1)
        {
            //sob e x hobe
            continue;
        }
        //first subgroup jeitai ashole initial x thakbe seita manage korte hobe.
        int r_s = (r/k * k) -1;
        r_s = r_s < 0 ? 0 : r_s;
        int r_e = r_s+k-1;
        s[r-1][c-1] = 'X';
        int c_s = (c/k*k)-1;
        c_s = c_s<0?0:c_s;
        int c_e = c_s+k-1;
        for(int i = r_s; i <= r_e; i++)
        {
            vector<bool> valid(k,true);
            valid[col_gen(c,k)] = false;
            //jeita free pawa jabe tar moddhei bosay dite hobe then ber hoye aste hobe.
            if(i!=r)
                for(int j = c_s; j <= c_e; j++)
                {
                    if(valid[col_gen(j,k)])
                    {
                        s[i][j] = 'X';
                        break;
                    }
                }

        }
        print(s);
    }
}
