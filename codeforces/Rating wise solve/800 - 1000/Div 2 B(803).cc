#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        //find peak elements
        int tall = 0;
        for(int i = 1; i < n-1; i++) {
            if(v[i]>v[i+1]+v[i-1]) {
                tall++;
            }
        }
        if(k==1) {
            cout << ceil((n-2)*1.0/2*1.0) << endl;

        } else {
            cout << tall << endl;
        }
    }
}
