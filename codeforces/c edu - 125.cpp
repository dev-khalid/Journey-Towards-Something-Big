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
        int p = 0;
        while(p+2<=n) {
            if(s[p]=='(') {
                cnt++;
                p+=2;
            }else {
                int q = p;
                p++;
                while(p<n&&s[p]=='(')p++;
                if(p==n) {
                    p = q;
                    break;
                }
                p++;
                cnt++;
            }
        }
        cout << cnt << " " << n-p << endl;

    }
}







