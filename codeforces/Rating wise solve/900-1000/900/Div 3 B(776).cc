#include<bits/stdc++.h>
using namespace std;
int f(int x,int a)
{
    return (x/a) + x%a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r,a;
        cin >> l >> r >> a;


        int n = (r/a)*a-1;
        if(n<l)
        {
            cout << f(r,a) << endl;
        }
        else
        {
            cout << max(f(r,a),f(n,a))  << endl;
        }
    }
}
//THIS ARE WITH PROOF OF MATH . AND WITH BETTER SOLUTION
