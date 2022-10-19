#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        //if all of them are ? or not
        cin >> s;
        int n = s.size();
        int q = 0; //?
        int o = 0; //1
        int z = 0; //0
        int op = -1,zp = -1;
        for(int i = 0; i < n; i++)
        {
            char it = s[i] ;
            if(it=='?')
            {
                q++;
            }
            if(it=='1')
            {
                o++;
                op = i;
            }
            if(it=='0')
            {
                if(zp==-1) zp=i;
                z++;
            }
        }
        if(q==n)
        {
            cout << n << endl;
        }
        else
        {
            //from last one to first zero .
            //eikhane obossoi ekta na ekta one to achei ba zero to achei .
            int ans = 0;
            if(z&&o)
            {
                if(zp>op)
                //zero and one duitai ache
                ans = (zp-op)+1;
                else {
                    ans = n;
                }
            }
            else if(z)
            {
                ans = zp+1;
            }
            else
            {
                ans = n-op;
            }
            cout << ans << endl;

        }
    }
}
