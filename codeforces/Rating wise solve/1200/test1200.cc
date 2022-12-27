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
        char c;
        cin >> c;
        vector<char> s(n+1);
        unordered_map<int,int> bad;
        vector<int>good;

        for(int i = 1; i <= n; i++)
        {
            cin >> s[i];
            if(s[i]==c)
            {
                good.push_back(i);
            }
            else
            {
                bad[i]++;
            }
        }
        if(good.size()==0)
        {
            //all are vejal
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;

        }
        else if(good.size()==n)
        {
            cout << 0 << endl;
        }
        else
        {
            //trying to minimize this .
            //trying to making this as one
            bool found = false;
            int el = -1;
            for(auto it: good)
            {
                int x = it;
                bool broken = false;
                while(x<=n)
                {
                    if(bad[x])
                    {
                        broken = true;
                        break;
                    }
                    x+=it;
                }
                if(!broken)
                {
                    found = true;
                    el = it;
                    break;
                }
            }
            if(!found)
            {

                cout << 2 << endl;
                cout << n-1 << " " << n << endl;
            }
            else
            {
                cout << 1 << "\n" << el << endl;
            }
        }
    }
}

