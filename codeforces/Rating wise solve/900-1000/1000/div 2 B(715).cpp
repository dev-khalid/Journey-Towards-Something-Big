#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> v(n);
        int totalT = 0, totalM = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]=='T') {
                totalT++;
            } else {
                totalM++;
            }
        }
        int lt=0,rt=totalT,lm=0,rm=totalM;
        bool found = true;
        for(int i = 0; i < n; i++) {
            if(v[i]=='T') {
                lt++;
                rt--;
            } else {
                lm++;
                rm--;
            }
            //each time validate each one
            if(lt<lm || rt<rm) {
                found = false;
                break;
            }
        }
        if(totalM*2!=totalT) {
            found = false;
        }
        cout << (found?"YES": "NO") << "\n";
    }
}
/*
6
TTTMMT

*/
