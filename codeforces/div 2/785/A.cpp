#include<bits/stdc++.h>
using namespace std;
int cnt(string s)
{
    int ans = 0;
    for(auto c: s)
    {
        ans += c-'a' + 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        if(n&1)
        {
            int al = 0,bb = 0;
            if(s[0] > s[n-1])
            {

                for(int i = 0; i < n-1; i++)
                {
                    al+= s[i] - 'a' + 1;
                }

                bb = s[n-1] - 'a' + 1;
            }
            else
            {
                for(int i = 1; i < n; i++)
                {
                    al+= s[i] - 'a' + 1;
                }

                bb = s[0] - 'a' + 1;
            }
            if(al>bb)
            {

                cout << "Alice " << al-bb << endl;
            }
            else
            {
                cout << "Bob " << bb << endl;
            }
        }
        else
        {
            cout << "Alice " << cnt(s) << endl;
        }

    }
}
