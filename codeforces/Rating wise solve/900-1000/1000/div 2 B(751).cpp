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
        vector<int> v(n); //initial array
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        vector<vector<int>> a(64,vector<int> (n+1));
        //age count ta complete korte hobe
        for(int j = 0; j < n; j++) {
            a[0][j] = v[j];
        }
        for(int i = 1; i <= 12; i++)
        {
            vector<int> cnt(n+2,0);
            for(int j = 0; j < n; j++)
            {
                int el = a[i-1][j];
                cnt[el]++;
            }
            //next set it to the copy
            for(int j = 0; j < n; j++)
            {
                int prev_elem = a[i-1][j];
                a[i][j] = cnt[prev_elem];
            }
        }
        int q;
        cin >> q;
        int ax,k;
        while(q--)
        {
            cin >> ax >> k;
            if(k>12)
            {
                k=12;
            }
            //now just do the brute force .
            cout << a[k][ax-1] << endl;

        }


    }
}
