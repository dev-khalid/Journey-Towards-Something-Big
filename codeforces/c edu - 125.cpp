#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string r)
{
    string p = r;
    reverse(p.begin(), p.end());
    return (r == p);
}

int CheckStr(string s)
{
    int l = s.length();
    int i;
    int finalId = -1;
    for (i = 2; i <= l; i++)
    {
        if (isPalindrome(s.substr(0, i)))
        {
            finalId = i;
        }
    }
    return finalId;
}




int bb(string expr)
{
    int  s=0;
    int finalId = -1;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(')
        {
            s++;
            continue;
        }



        if(expr[i]==')')
            s--;
        if (s==0)
            finalId = i;
    }
    if(s==0) {
        return expr.size();
    }

    return finalId;
}


int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        while(s.size()) {
            int b = bb(s);

            if( b!=-1) {
                cnt++;
                s = s.substr(b,n);
                cout << s << endl;
                continue;
            }
            int p = CheckStr(s);
             if(p!=-1) {
                cnt++;
                s = s.substr( p,n);
             }
            if(b==-1&&p==-1)
                break;
        }
        cout << cnt << " " << s.size() << endl;

    }
}
