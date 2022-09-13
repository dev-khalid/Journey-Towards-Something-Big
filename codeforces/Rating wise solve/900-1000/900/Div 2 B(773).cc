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
        set<int> s;
        int x;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        int sz = s.size();
        for(int i = 1; i <= n; i++)
        {
            if(i<=sz)
            {
                cout << sz << " ";
            }
            else
            {
                cout << ++sz << " ";
            }

        }
        cout << endl;

    }
}
