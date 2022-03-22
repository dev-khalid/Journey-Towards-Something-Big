
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,B,x,y;
        cin >> n >> B >> x >> y;
        ll sum = 0;
        vector<ll> arr(n+1);
        arr[0] = 0;
        for(int i = 1; i <= n; i++) {
            ll d1 = arr[i-1]+x;
            ll d2 = arr[i-1]-y;
            if(d1<=B) {
                sum+=d1;
                arr[i] = d1;
            } else {
                sum+=d2;
                arr[i] = d2;
            }
        }
        cout << sum << endl;
    }
}
