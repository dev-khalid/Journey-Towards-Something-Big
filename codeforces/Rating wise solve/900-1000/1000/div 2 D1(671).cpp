#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(n>2)
    {
        int last = n/2-1;
        int j = 0;
        if(n&1) {
            cout << n/2 << endl;
        } else {
            cout << n/2-1 << endl;
        }
        for(int i = last+1; i < n; i++)
        {

            cout << v[i] << " ";
            if(n&1 && i==n-1)
            {
                continue;
            }
            cout << v[j++]  << " ";
        }
    }
    else
    {
        cout << 0 << endl;
        for(auto it: v)
        {
            cout << it << " ";
        }
    }
}
