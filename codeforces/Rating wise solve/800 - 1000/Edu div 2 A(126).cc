#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long ans = 0;
        for(int i = 0; i < n-1; i++) {
            //path 1 is keep all of them as it is
            int p1 = abs(a[i]-a[i+1]) + abs(b[i]-b[i+1]);
            int p2 = abs(a[i]-b[i+1]) + abs(b[i]-a[i+1]);
            if(p1>p2) {
                swap (a[i+1],b[i+1]);
            }
            ans += min(p1,p2);

        }
        cout << ans << endl;
    }
}
