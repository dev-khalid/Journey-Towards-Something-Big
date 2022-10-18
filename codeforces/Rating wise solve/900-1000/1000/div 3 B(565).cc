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
        int zeros = 0, ones = 0, twos = 0;
        int x ;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            x%=3;
            if(x==0) zeros++;
            if(x==1) ones++;
            if(x==2) twos++;
        }
        int ans = zeros + min(ones,twos);
        ans+= (max(ones,twos)-min(ones,twos))/3;
        cout << ans << endl;
    }
}
