#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        int cnt = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt+=v[i];

        }
        if(cnt<s)
        {
            cout << -1 << endl;
        }
        else if(cnt==s)
        {
            cout << 0 << endl;
        }
        else
        {
            int fau = 0;
            int i = 0, j = n-1;
            while(cnt>s && i < j )
            {
                if(v[i]==1)
                {
                    cnt--;
                    i++;
                }
                else if(v[j]==1)
                {
                    cnt--;
                    j--;
                }
                else
                {
                    fau++;
                    i++,j--;

                }

            }
            cout << (n-(j-i+1+fau)) << endl;
        }
    }
}
//got the idea from several tutorials . need to solve this one later on.
