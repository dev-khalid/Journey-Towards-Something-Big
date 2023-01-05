
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
int main()
{
    vector<int> x{1,2};
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> index(n+1,0);
        bool vejal = false;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            index[v[i]]++;
            vejal |= index[v[i]]>=3;
        }
        if(vejal)
        {
            cout << "NO\n";
            continue;
        }

        //check which ones are not used
        //and which ones have double
        vector<int> p,q;
        vector<int> doubles;
        vector<int> unused;
        for(int i = 1; i <= n; i++)
        {
            if(index[i]==2)
            {
                doubles.push_back(i);
            }
            if(index[i]==0)
            {
                unused.push_back(i);
            }
        }
        sort(unused.begin(),unused.end());
        if(unused.size()!=doubles.size())
        {
            cout << "NO\n";
            continue;
        }
        vector<int> someFixedValues(n+1,0);
        vector<bool> mark(n+1,false);
        for(int i = 0; i < n; i++)
        {
            int el = v[i];
            if(index[el]==2)
            {
                if(someFixedValues[el])
                {
                    p.push_back(el);
                    q.push_back(someFixedValues[el]);

                    continue;
                }
                int id = lower_bound(unused.begin(),unused.end(),el)-unused.begin()-1;
                if(id>=0 && id<unused.size())
                {
                    //brute force !
                    while(id>=0 && mark[unused[id]]==true)
                    {
                        id--;
                    }
                    if(id==-1)
                    {
                        vejal = true;
                        break;
                    }
                    mark[unused[id]] = true;
                    someFixedValues[el] = unused[id];
                    p.push_back(someFixedValues[el]);
                    q.push_back(el);
                    mark[el] = true;
                }
                else
                {
                    vejal = true;
                    break;
                }
            }
            else if(index[el]==1)
            {
                p.push_back(el);
                q.push_back(el);
            }
        }
        if(vejal)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for(auto it: p)
            {
                cout << it << " ";
            }
            cout << endl;
            for(auto it: q)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
