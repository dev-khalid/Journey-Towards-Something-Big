#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int k = 0;
        int i = n;
        while(i >= 0 && v[i]==v[n]) {
            k++;
            i--;
        }
        int cnt = 0;
        if(i==0) {
            //handled the case where all the elements are equal
            cout << 0 << endl;
            continue;

        }
        //1 2 3 4
        //k = 1 , cnt = 0;
        //inside loop will fail then i = n-2*k = 4 - 2*2 = 2
        //from that point check if any longer elements also join

        while(i>=0) {
            //now check till how much index does it supports
            while(i>=0 && v[i]==v[n]) {
                k++;
                i--;
            }
            if(i==0) {
                break;
            }
            i=n-(2*k);
            k*=2; //here after k will be able to support 2k elements
            cnt++;

        }
        cout << cnt << endl;
    }
}
