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
        string s;
        cin >> s;
        string x;
        int i = 0;
        while(i<n && s[i]=='?')i++;
        //fixing the first elements
        if(i==n)
        {
            //all of them are ?
            for(int i = 0; i < n; i++)
            {
                if(i&1) s[i] = 'B';
                else s[i] = 'R';
            }
        }
        else
        {
            i--;
            while(i>=0)
            {
                if(s[i+1]=='B') s[i] = 'R';
                else s[i] = 'B';
                i--;
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(s[i] == '?')
            {
                if(s[i-1]=='B') s[i] = 'R';
                else s[i] = 'B';
            }
        }
        cout << s << endl;
    }
}
