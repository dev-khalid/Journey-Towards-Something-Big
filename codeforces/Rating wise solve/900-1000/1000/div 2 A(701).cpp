#include<bits/stdc++.h>
using namespace std;
int calc(int a,int b)
{
    int ans = 0;
    while(1)
    {
        ans++;
        a/=b;
        if(a==0)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a<b)
        {
            cout << 1 << endl;
        }
        else
        {

            int ans = INT_MAX;


            int i = 0;
            if(b==1)
            {
                i=1;
            }
            for(; i <= 1000; i++)
            {
                ans = min(ans,calc(a,b+i)+i);
            }

            cout << ans << endl;
        }
    }
}
