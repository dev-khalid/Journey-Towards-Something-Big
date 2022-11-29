#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> odds,evens;
        int x;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x&1) {
                odds.push_back(x);
            } else {
                evens.push_back(x);
            }
        }
        bool found = false;
        if(odds.size()&1) {
            for(auto it: odds) {
                for(auto ev: evens) {
                    if(abs(it-ev)==1) {
                        found = true;

                    }
                }
            }
        }
        else {
            found = true;
        }
        cout << (found?"YES" : "NO") << endl;
    }
}
