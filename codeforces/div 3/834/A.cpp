#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ans;
void preCalc() {
    for(int i = 0; i < 50; i++) {
        ans.push_back('Y');
        ans.push_back('e');
        ans.push_back('s');
    }
}
int main() {
    preCalc();
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool found = false;
        for(int i = 0; i < 100; i++) {
            string sub = ans.substr(i,s.size());
            if(sub==s) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES\n": "NO\n");
    }
}
