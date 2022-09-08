#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string s,p;
        cin >> s >> p;
        if(n==m) {
            if(s==p) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        else if(n<m) {
            cout << "NO\n";
        } else {
            int end_of_search = -1;
            for(int i = 0; i < n; i++) {
                if(s[i] == p[0]) {
                    end_of_search = i;
                    break;
                }
            }
            if(end_of_search == -1 || end_of_search >=(n-m+1)) {
                cout << end_of_search << " " << (n-m+1) << endl;
                cout << "NO\n";
            } else {

                s = s.substr(n-m+1);
                p = p.substr(1);
                cout << (s==p?"YES\n":"NO\n");

            }
        }

    }
}
