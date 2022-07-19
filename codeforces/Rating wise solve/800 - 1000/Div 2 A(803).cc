#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i] ;
        }
        int sum;
        for(int i = 0; i < n; i++) {
            //when summing just skip the current one from beginning
            sum = 0;
            for(int j = 0; j < n; j++) {
                if(i!=j) {
                    sum ^= v[j];
                }
            }
            if(sum==v[i]) {
                break;
            }
        }
        cout << sum << endl;
    }
}
