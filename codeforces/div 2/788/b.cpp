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
        vector<char> s(n);
        for(int i = n-1; i >=0; i--)
        {
            cin >> s[i];
        }
        int m;
        cin >> m;
        map<char,bool> c;
        for(int i = 0; i < m; i++)
        {
            char x;
            cin >> x;
            c[x] = true;
        }
        map<char,pair<int,int>> fr;//first - count , second - position

        int i = 0;
        while(i<n)
        {
            if(c[s[i]])
            {
                char curr_special = s[i];
                int pos = i;
                int cnt = 0;
                i++;
                while(i<n)
                {
                    if(c[s[i]])
                    {
                        break;
                    }
                    else
                    {
                        cnt++;
                    }

                    i++;
                }
                if(cnt==0)
                {
                    fr[curr_special].first = cnt;
                    fr[curr_special].second = pos;
                }
                if(fr[curr_special].first < cnt)
                {
                    fr[curr_special].first = cnt;
                    fr[curr_special].second = pos;
                }
            }
            else
            {
                i++;
            }
        }
        pair<int,int> mxx;
        mxx = {0,-1};
        for(auto el: fr)
        {
            auto p = el.second;
            if(p.first==0 && mxx.first==0 && mxx.second==-1)
            {
                mxx = {p.first,p.second};
            }
            else if(mxx.first < p.first)
            {
                mxx = {p.first,p.second};
            }
        }
        cout << mxx.first << " " << mxx.second << endl;
        int val = 0;
        for(auto el: fr)
        {
            auto p = el.second;
            cout << p.first << " " << p.second << endl;
            if(mxx.first==p.first && mxx.second!=p.second)
            {
                val = 1;
                break;
            }
            else if(mxx.second < p.second)
            {
                val = 1;
                break;
            }
        }

        cout << mxx.first + val << endl;

    }
}
