#include<bits/stdc++.h>
using namespace std;
int main() {
    string name = "Timur";

    int t;
    cin >> t;

    while(t--) {
        map<char,int> mp;
        for(auto it: name) {
            mp[it]++;
        }
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n!=5) {
            cout << "NO\n";
            continue;
        }
        bool flag = true;
        for(auto it: s) {
            if(mp[it]<=0) {
                flag = false;
                break;
            }
            mp[it]--;
        }
        cout << (flag? "yes\n" : "no\n");
    }
}
