#include<bits/stdc++.h>
using namespace std;
bool custom_cmp(string mother,string child)
{
    int n = mother.size();
    for(int i = 0; i < n; i++)
    {
        if(mother[i]==child[i] || child[i]=='?')
        {
            continue;
        }
        return false;
    }
    return true;
}
int main()
{
    int x;
    cin >> x;
    map<string,int> mp;
    while(x--)
    {
        int t;
        cin >> t;
        string s;
        cin >> s;
        if(t==1)
        {
            //add
            mp[s]++;
            cout << mp[s] << "\n";
        }
        else if(t==2)
        {
            //src
            if(mp.find(s) != mp.end() )
            {
                cout << mp[s] << "\n";
            }
            else
            {

                int found = 0;
                for(auto it: mp)
                {
                    string ss = it.first;
                    if(it.second!=0 && s.size()==ss.size() && custom_cmp(ss,s))
                    {
                        found+=it.second;
                    }

                }
                cout << found << "\n";

            }
        }
        else
        {
            //del

            if(mp.find(s) != mp.end())
            {
                cout << mp[s] << "\n";
                mp[s] = 0; //delete it .
            }
            else
            {

                int found = 0;
                for(auto it: mp)
                {
                    string ss = it.first;
                    if(it.second!=0 && s.size()==ss.size() && custom_cmp(ss,s))
                    {
                        found+=it.second;
                        mp[ss]=0;
                    }

                }
                cout << found << "\n";

            }

        }
    }
}
