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
            cin >> v[i];
        }
        int sum = 0;
        for(int i = 0; i <= n-4; i++) {
            int a = v[i];

            for(int j = i+1; j < n-1; j++) {
                int c = v[j];
                if(a < c) {
                    //now find possible b and d .
                    for(int k = i+1; k < j; k++) {
                        int b = v[k];
                        for(int l = j+1; l < n; l++) {
                            if(v[l]<b) {
                                sum++;
                            }
                        }
                    }
                }
            }
        }
        cout << sum << "\n";
    }
}
