#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> last(150001,-1);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int k = -1;
        for(int i = 0; i < n; i++) {
            int el = v[i];
            if(last[el]!=-1) {
                //found a match
                int left = i-last[el];
                k = max(k,n-left);
            }
                last[el] = i; //updating the current index

        }
        cout << k << endl;
    }
}
