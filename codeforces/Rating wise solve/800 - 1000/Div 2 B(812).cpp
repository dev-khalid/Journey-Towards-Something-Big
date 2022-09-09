#include<bits/stdc++.h>
using namespace std;
bool compare(int &a,int &b)
{
    return a>b;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> cpy(n);
        for(int i = 0 ; i < n; i++)
        {
            cin >> v[i];
            cpy[i] = v[i];
        }
        bool inc = false,dec = false;
        int state_change = 0;
        sort(cpy.begin(),cpy.end(),compare);
        if(n<=2 || is_sorted(v.begin(),v.end()) || v==cpy)
        {
            cout << "YES\n";
            continue;
        }

        if(v[0]<=v[1])
        {
            inc = true;
            for(int i = 2; i < n; i++)
            {
                if(inc)
                {
                    if(v[i]<v[i-1])
                    {
                        cout << v[i] << " " << v[i-1] << endl;
                        dec = true;
                        inc = false;
                        state_change++;
                    }
                }
                else
                {
                    if(v[i]>v[i-1])
                    {

                        cout << v[i] << " " << v[i-1] << endl;
                        inc = true;
                        dec = false;
                        state_change++;
                    }
                }
            }
            cout << "state change " << state_change << endl;
            if(state_change>1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "NO\n";
            continue;
        }

    }
}

