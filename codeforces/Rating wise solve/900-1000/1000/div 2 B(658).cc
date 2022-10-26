#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int i =0;
        while(i<n && v[i]==1) cnt++,i++;
        if((cnt&1 && cnt!=n) || (cnt%2==0 && cnt==n)) {
            cout << "Second\n";
        } else {
            cout << "First\n";
        }
    }
}
