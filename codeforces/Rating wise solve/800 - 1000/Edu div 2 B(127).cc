#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n==1) {
            cout << "YES" << endl;
            continue;
        }
        if(n==2 && v[1]-v[0]>3) {
           cout << "NO\n";
           continue;
        }
        if(n==2 && v[1]-v[0]<=3) {
           cout << "YES\n";
           continue;
        }
        bool ok = true;
        int three_count = 0;
        int two = 0;
        for(int i = 1; i < n; i++) {
            int gap = v[i]-v[i-1];
            if(gap > 3) {
                ok = false;
                break;
            }
            if(gap==3) {
                three_count++;
            }
            if(gap==2) two++;
        }
        if(ok) {
            if((three_count>1) || (three_count==1 && two) || (!three_count && two>2))
                ok = false;
        }
        cout << (ok ? "YES\n": "NO\n");

    }
}
