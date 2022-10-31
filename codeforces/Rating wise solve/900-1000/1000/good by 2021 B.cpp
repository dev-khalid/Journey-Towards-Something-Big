#include<bits/stdc++.h>
using namespace std;
void print(vector<char> &s)
{
    for(auto it: s)
    {
        cout << it;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i=0;
        if(n>=2 && v[1]==v[0])
        {
            cout << v[0] << v[0] << endl;
            continue;

        }
        for( i = 1; i < n; i++)
        {
            if(v[i]>v[i-1])
            {

                break;
            }
        }
        for(int j = 0; j < i; j++)
        {
            cout << v[j];
        }
        while(i--)
        {
            cout << v[i];
        }
        cout << endl;

    }
}
//only a can be a option ?
