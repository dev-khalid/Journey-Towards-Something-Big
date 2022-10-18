#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int posx=-1,posy=-1;
        int ans=-1;
        for(int i = 0; i < s2.size(); i++)
        {
            if(s2[i]=='1')
            {
                posy = i;
                break;
            }
        }
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i]=='1' && i >= posy)
            {
                ans = i-posy;
                break;
            }
        }
        cout << ans << endl;
    }
}
