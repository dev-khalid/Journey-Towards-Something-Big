#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        vector<bool> v(51,false);
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx,x);
            v[x] = true;
        }
        int sum = 0;
        for(int i = 1; i <= mx; i++)
        {
            if(!v[i])
            {
                sum+=i;
            }
        }
        if(sum==s)
        {
            cout << "YES\n";
        }
        else if(sum>s)
        {
            cout << "NO\n";
        }
        else
        {
            s-=sum;
            bool found =false;
            for(int i=mx+1; i<=500; i++)
            {
                s-=i;
                if(s==0)
                {
                    found = true;
                }
                else if(s<0)
                {
                    break;
                }
            }
            cout << (found ? "YES\n": "NO\n");
        }
    }
}

