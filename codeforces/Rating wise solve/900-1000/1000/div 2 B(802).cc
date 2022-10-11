#include<bits/stdc++.h>
using namespace std;

int substraction(char c2,bool &hasCarry)
{
    char c1 = '8';
    if(hasCarry) {
        if(c2!='9') {
            hasCarry=false;
            c2+=1;
        } else {
            c2 = '0'; //hasCarry remains true;
        }
    }
    if(c2=='9') {
        hasCarry = true;
        return 9;
    }
    return '8'-c2;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> ans(n);
        if(s[0]!='9')
        {
            //then just biyog kore dibo sobaike 9 theke
            for(auto c: s)
            {
                cout << '9'-c;
            }
            cout << endl;
            continue;
        }
        else
        {
            //now we need to traverse from last index and also maintain a carry
            bool hasCarry = false;

            if(s[n-1]>'1')
            {
                hasCarry = true;
                ans[n-1] =  11 - (s[n-1]-'0');
            } else {
                ans[n-1] = '1'-s[n-1];
            }

            for(int i = n-2; i >= 0; i--)
            {
                ans[i] = substraction(s[i],hasCarry);
            }
        }
        for(auto it: ans) {
            cout << it;
        }
        cout << "\n";
    }
}
