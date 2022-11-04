#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> s1(n),s2(n);
        for(int i = 0; i < n; i++) {
            cin >> s1[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> s2[i];
        }
        bool has11 = false, has00 = false;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s1[i]=='0' && s2[i]=='0') {
                cnt++;
                //if there has 11 previously
                if(has11) {
                    cnt++;
                    has00=false; //eibar has00 er kaj eikhanei sesh
                    has11=false; //11 er kaj o sesh
                }
                //else just cnt this as 1 and try finding next 11 if exist
                else {
                    has00=true;
                }
            }
            else if((s1[i]=='0' && s2[i]=='1' ) || (s1[i]=='1' && s2[i]=='0')) {
                //this is the destroyer .. reset all the variables
                has11 = false, has00 = false;
                cnt+=2;
            }
            else {
                //if previously has00
                if(has00) {
                    cnt++;
                    has00=false; //has00 er kaj eikhanei ses
                    has11=false; //has11 er kaj o eikhanei sesh
                } else {
                    has11=true;
                }

            }
        }
        cout << cnt << endl;
    }
}
