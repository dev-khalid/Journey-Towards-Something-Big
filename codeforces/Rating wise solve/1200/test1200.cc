#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checker(ll need , ll rest, ll leftSideValue,ll target) {
    return (rest*need+leftSideValue) >= target;
}
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
         ll n , h ;
         cin >> n >> h;
         vector<ll> v(n);
         for(int i = 0; i < n; i++) {
            cin >> v[i];
         }
         //there could be 1 or 2 elements also . so handle that as well
         if(n==1) {
            cout << h << endl;
            continue;
         }
         vector<ll> dif(n);
         for(int i = 1; i < n;i++) {
            dif[i-1] = v[i]-v[i-1];
         }
         dif[n-1] = dif[n-2];
         sort(dif.begin(),dif.end());
         ll need = (h-1LL)/n + 1LL;//rounding up
         vector<ll> pref(n,0);
         for(int i = 0; i < n; i++) {
            if(i==0) {
                pref[i] = dif[i];
            } else {
                pref[i]  = pref[i-1]+dif[i];
            }
         }
         //now search for upper bound!
        ll rest = 0;
        ll left = upper_bound(dif.begin(),dif.end(),need) - dif.begin();
        //left is less than the value ?
        if(left==0) {
            cout << need << endl;
        } else if(left==n) {
            cout << (h-pref[n-2]) << endl;
        } else {
            rest = n-left;
            if(checker(need,rest,pref[left-1],h)) {
                cout << need << endl;
            } else {
                //left side er jonne amra value take eibar increase korbo
                need = (h-pref[left-1]-1LL)/rest +1LL;
                cout << need << endl;
            }
        }
    }
}
