#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a,b;
        cin >> a >> b;
        int n = a.size(),m = b.size();
        int matched = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int cnt=0;
                if(b[i]==a[j]) {
                    int p=i,q=j;
                    while(p<m && q <n && b[p++]==a[q++]) {
                        cnt++;
                    }
                }
                matched = max(matched,cnt);
            }
        }
        cout << n+m-2*matched << endl;
    }
}
