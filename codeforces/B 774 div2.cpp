#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }
        sort(x.begin(),x.end());
        long long blue = x[0]+x[1];
        long long red = x[n-1];
        bool ans = false;
        int l = 1, r = n-1;
        while(l<r) {
            if(red>blue) {
                ans = true;
                break;
            } else {
                l++,r--;
                blue+=x[l];
                red+=x[r];
            }
        }
        ans==true ? cout << "YES\n": cout << "NO\n";
    }
    return 0;
}

/*
1
10
10 14 14 15 15 15 16 16 19  18
*/
