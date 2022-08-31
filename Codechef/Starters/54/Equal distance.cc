#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int> s;
        int x;
        bool double_found = false;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(s.find(x)!=s.end()) {
                double_found = true;
            }
            s.insert(x);
        }
        if(s.size()&1 && !double_found) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
	return 0;
}

