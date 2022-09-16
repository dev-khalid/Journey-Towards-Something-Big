#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<int> v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            sum+= v[i];
        }
        if(sum%n==0) {
            cout << sum%n << endl;
        } else {
            ll rest = sum%n;
            rest *= (n-rest);
            cout << rest << endl;
        }
    }
}
