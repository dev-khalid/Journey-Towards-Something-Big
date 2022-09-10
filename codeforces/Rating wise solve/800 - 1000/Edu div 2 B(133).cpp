#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v) {
    for(auto it: v) {
        cout << it << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            v[i] = i+1;
        }
        cout << n << endl;
        print(v);
        for(int i = 0; i < n-1; i++) {
            swap (v[i],v[n-1]);
            print(v);
        }
    }
}
