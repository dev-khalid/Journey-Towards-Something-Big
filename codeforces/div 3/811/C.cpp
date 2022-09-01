#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        //ekta duita tinta 4 ta eivabe arki
        for(int i = 9; i >= 1; i--) {
            if(n>=i) {
                v.push_back(i);
                n-=i;
            }
        }
        sort(v.begin(),v.end());
        for(auto it: v) {
            cout << it;
        }
        cout << endl;
    }
}
