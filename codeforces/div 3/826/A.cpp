#include<bits/stdc++.h>
using namespace std;

bool has(string &s,char c)
{
    for(int i = 0; i < s.size(); i++)
    {
        char it = s[i];
        if(it==c) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(has(s1,'L') )
        {
            if(has(s2,'M') || has(s2,'S'))
            {
                cout << ">" << endl;

            }
            else if(has(s2,'L'))
            {
                if(s1.size() > s2.size())
                {
                    cout << ">" << endl;
                }
                else if(s1.size()==s2.size())
                {
                    cout << "=" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }

        }
        else if(has(s1,'S'))
        {
            if(has(s2,'M') || has(s2,'L'))
            {
                cout << "<" << endl;

            }
            else if(has(s2,'S'))
            {
                if(s1.size() < s2.size())
                {
                    cout << ">" << endl;
                }
                else if(s1.size()==s2.size())
                {
                    cout << "=" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
        }
        else if(has(s1,'M'))
        {
            if(has(s2,'L'))
            {
                cout << "<" << endl;

            }
            else if(has(s2,'M')) cout << "=" << endl;
            else cout << ">" << endl;

        }
    }
}

