#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<ll> v(k);
        int prev, curr;
        for(int i = 0; i < k; i++)
        {
            cin >> curr;
            if(i==0)
            {
                v[i] = curr;
            }
            else
            {
                v[i] = curr-prev;
            }
            prev = curr;
        }
        if(k==1)
        {
            cout << "YES\n";
            continue;
        }
        int need = n-k+1;
        if(!is_sorted(v.begin()+1,v.end()))
        {
            cout << "NO\n";
            continue;
        }
        if(v[0]>0)
        {
            //v[0] = (v[0]-1)/need + 1LL;
            //cout << "After distribution: " << v[0] << endl;
            if(v[0]>v[1]*need) {
                cout << "NO\n";
                continue;
            }
        }
        cout << "YES\n";

    }
}

/*
cout << "Vector: ";
        for(auto it: v) {
            cout << it << " ";
        }
        cout << endl;
*/
