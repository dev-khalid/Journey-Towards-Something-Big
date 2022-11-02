#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //now start checking from 10^6
        //ai,ai+1 er difference ta divisible by k
        int g = 0;
        for(int i = 0; i < n-1; i++) {
            g = __gcd(g,abs(v[i]-v[i+1]));
        }
        if(g) {
            cout << g << endl;
        } else {
            cout << -1 << endl;
        }
    }

}
