#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int mm;
        cin >> mm;
        cin >> s;
        int i = s.size()-1;
        vector<string> v;
        while(i>=0)
        {
            if(i>=2 && s[i]=='0')
            {
                    //take it's prior two values
                    string x;
                    x.push_back(s[i-2]);
                    x.push_back(s[i-1]);
                    v.push_back(x);
                    i-=3;
            }
            else
            {
                string x= {s[i]};
                v.push_back(x);
                i--;
            }
        }
        for(int i = v.size()-1; i>=0; i--)
        {
            int id = stoi(v[i]);
            printf("%c",96+id);
        }
        cout << endl;
    }
}
