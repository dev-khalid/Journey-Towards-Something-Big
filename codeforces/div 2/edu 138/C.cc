
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(n==1)
        {
            if(v[0]==1)
                cout << v[0] << endl;
            else cout << 0 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        int k = v[n-1];
        for(int i = 0; i < n; i++)
        {
            //jodi eikhane emon kono element thake jeita less than <k-i tahole amar cnt ++ hobe  and
            //last er (n-i-1) er sathe protibar e k-i kore barbe
            for(int j = i; j < n; j++)
            {
                if(v[j] <= (k-i))
                {
                    cnt++;
                    v[n-i-1] += (k-i);
                    break;
                }
            }
        }
        int ans = 0;
        bool valid = true;
        //protibar e amra check korbo je ki ki ache
        //-1 gula skip korbo
        //eikhane valid ekta count again rakhbo
        int i = 1;
        for(; i <= cnt; i++)
        {
            bool found = false;
            for(int j = 0; j < n; j++)
            {
                if(v[j]!=-1 && v[j] <= i)
                {
                    found = true;
                    v[j] = -1;
                    break;
                }
            }
            if(!found)
            {
                valid = false;
                break;
            }
        }
        cout << (valid ? cnt : 0 ) << endl;
    }
}

