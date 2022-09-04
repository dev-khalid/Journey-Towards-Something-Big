#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0; i < n; i++) {
            cin >> v[i];
        }
        int m;
        cin >> m;
        int sum = 0;
        int x;
        for(int i = 0; i < m; i++) {
            cin >> x;
            sum+= x;
            sum %= n;
        }
        cout << v[sum] << endl;

    }
}
