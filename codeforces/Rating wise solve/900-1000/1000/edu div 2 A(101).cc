#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if(n&1 || s[0]==')' || s[n-1]=='(')
        {
            cout << "NO\n";
            continue;
        }
        int o = 0, c = 0;
        //check in first half
        for(int i = 0; i*2<n; i++)
        {
            if(s[i]==')')
            {
                c++;
            }
        }
        if(c>(n/4))
        {
            cout << "NO\n";
            continue;
        }
        for(int i = n/2; i<n; i++)
        {
            if(s[i]=='(')
            {
                o++;
            }
        }
        if(o>(n/4))
        {
            cout << "NO\n";
            continue;
        }
        o = 0, c = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]==')')
            {
                o++;
            }
            if(s[i]==')')
            {
                c++;
            }
        }
        if(o*2>n || c*2>n)
        {

            cout << "NO\n";
            continue;
        }
        cout << "YES\n";

    }
}
