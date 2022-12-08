#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n);
        ll k;
        vector<ll>pref(n,0);
        vector<ll>most(n,0);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i==0)
            {
                pref[i] = a[i];
                most[i] = a[i];
            }
            else
            {
                most[i] = max(most[i-1],a[i]);
                pref[i] = pref[i-1]+a[i];
            }
        }
        for(int i = 0; i < q; i++)
        {
            cin>>k;
            ll id = upper_bound(most.begin(),most.end(),k)-most.begin();
            //cout << "k er value koto : " << k << endl;
            id--;
            if(id<0)
            {
                cout << 0 << " ";
                continue;
            }
            //cout << "id : " << id << " " ;
            //cout << "element: " << pref[id] << endl;

            cout << pref[id] << " ";
        }
        cout << endl;
    }
}
