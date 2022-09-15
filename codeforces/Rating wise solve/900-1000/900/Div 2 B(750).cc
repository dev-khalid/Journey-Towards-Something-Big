#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        ll sum = 0;
        int ones = 0,zeros = 0;
        for(int i = 0; i < n; i++) {
            cin >> x;
            sum+=x;
            if(x==1) {
                ones++;
            }
            if(!x) zeros++;
        }
        if(sum==1) {
            cout << (1LL<<zeros)<< endl;
        } else {
            if(ones) {
                sum = ones;
                sum *= (1LL << zeros);
                cout << sum << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}
