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
        map<int,int> right;
        bool found = false;
        bool duplicate = false;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            right[v[i]]++;
            if(right[v[i]]>1) {
                duplicate = true;
            }
        }
        if(!duplicate)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}
