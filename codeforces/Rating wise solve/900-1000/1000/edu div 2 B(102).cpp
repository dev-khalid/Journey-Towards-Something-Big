
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool div(string s1,string s2)
{
    //s1 is always big
    if(s1.size()%s2.size()!=0)
    {
        return false;
    }
    for(int i = 0; i < s1.size(); i+=s2.size())
    {
        int k = 0;
        for(auto it: s2)
        {
            if(s1[i+k]!=it)
            {
                return false;
            }
            k++;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        string s;
        if(s1.size()>s2.size())
        {
            swap(s1,s2);
        }

        //considering s2 > s1 alwasy

        bool found = false;
        for(int j = 0; j < 20; j++) {
            s+=s2;
            if(div(s,s1)) {
                found = true;
                break;
            }
        }
        if(found) {
            cout << s << endl;
        } else {
            cout << -1 << endl;
        }



    }
}
