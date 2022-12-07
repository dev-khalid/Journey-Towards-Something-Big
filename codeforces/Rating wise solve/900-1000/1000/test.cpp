#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v(3);
        cin >> v[0]>> v[1]>>v[2];
        sort(v.begin(),v.end());
        int sum = v[0]+v[1]+v[2];
        if(sum%9!=0) {
            cout << "NO\n";
        } else {
            int x = sum/9;
            if(v[0]>=x) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

    }
}
