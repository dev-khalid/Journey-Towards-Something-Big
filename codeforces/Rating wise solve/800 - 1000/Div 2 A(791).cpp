#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        if(n&1 || n==2 ) {
            cout << -1 << endl;
            continue;
        }
        ll mx = 0,mn = 0;

        mx = n/4;
        mn = (n%6==0)? n/6 : (n/6)+1;
        cout << mn << " " << mx << endl;

       /*  if(n%4==0) {
            mx = n/4;
        } else {
            if((n-6)%4==0) {
                mx = (n-6)/4;
                mx ++;
            }
        }
        if(n%6==0) {
            mn = n/6;
        } else {
            if((n-4)%6==0) {
                mn = (n-4)/6;
                mn++;
            } else if((n-8)%6==0) {
                mn = (n-8)/6;
                mn+=2;
            }
        }
        if(mn==0&&mx==0) {
            cout << -1 << endl;
            continue;
        } else {
            if(mn&&!mx) {
                cout << mn << " " << mn << endl;
            } else if(mx&&!mn) {
                cout << mx << " " << mx << endl;
            } else {
                cout << mn << " " << mx << endl;
            }
        }*/

    }
}
