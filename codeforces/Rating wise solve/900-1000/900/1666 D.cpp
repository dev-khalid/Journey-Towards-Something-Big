//source : https://codeforces.com/problemset/problem/1666/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,t;
        cin >> s >> t;
        map<char,int> fs,ft;
        for(auto it: s)
        {
            fs[it]++;
        }
        for(auto it: t)
        {
            ft[it]++;
        }
        bool ok = true;
        int last_index = -1;
        for(int i = 0; i < t.size(); i++)
        {

            //first check if theres sufficient amount of characters in s
            char c = t[i];
            if(ft[c]<=fs[c] && fs[c]>0)
            {

                bool found = false;
                int  j = s.size()-1;
                int occurance_count = 0;
                while(j>last_index)
                {

                    if(c==s[j])
                    {
                        occurance_count++;
                    }
                    if(occurance_count==ft[c])
                    {
                        ft[c]--;
                        last_index = j;
                        found = true;
                        break;
                    }
                    j--;
                }
                if(!found)
                {
                    ok = false;
                    break;
                }

            }
            else
            {
                ok = false;
                break;
            }

        }
        cout << (ok?"YES\n":"NO\n");
    }
}
