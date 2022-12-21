#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n,0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i>0)
        {
            a[i]+= a[i-1];
        }
    }
    int m;
    cin >> m;
    while(m--)
    {
        ll q;
        cin >> q;

        ll lb = lower_bound(a.begin(),a.end(),q)-a.begin();
        lb++;
        cout << lb << endl;
    }
}
