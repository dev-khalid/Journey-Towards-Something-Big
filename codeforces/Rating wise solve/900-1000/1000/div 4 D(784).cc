#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        //w is the breakpoint
        bool valid = true;
        int i = 0;
        while(i<n) {
            if(s[i]!='W') {
                //start of the segment
                int b = 0, r = 0;
                while(s[i]!='W' && i < n) {
                    if(s[i]=='B') b++;
                    if(s[i]=='R') r++;
                    i++;
                }
                if(!b && !r) { }
                else {
                    if((b&&!r) || (r&&!b)) {
                        valid = false;
                        break;
                    }
                }
            } else {
                i++;
            }
        }
        cout << (valid ? "YES\n" : "NO\n");
    }
}
