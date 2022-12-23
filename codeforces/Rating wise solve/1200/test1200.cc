#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> val(n+1);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(i>0) {
                val[i]=v[i]*v[i-1];
            } else {
                val[i] = v[i];
            }
        }
        val[n] = v[n-1];
        bool ans = true;
        for(int i = 0; i < n; i++) {
            int g = __gcd(val[i],val[i+1]);
            //cout << "Gcd (" << val[i] << "," << val[i+1] << ") = " << g << endl;
            if(g!=v[i]) {
                ans = false;
                break;
            }
        }
        cout << (ans?"YES\n":"NO\n");

    }
}

/*
cout << "Vector: ";
        for(auto it: v) {
            cout << it << " ";
        }
        cout << endl;
*/
