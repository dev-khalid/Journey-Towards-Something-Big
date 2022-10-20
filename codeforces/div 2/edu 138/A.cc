#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<bool> row(n+1,false);
        vector<bool> col(n+1,false);
        //pura row or call a emon kono jayga ache kina jeikhane onno keu attack korche na .


        for(int i = 1; i <= m; i++) {
            int x,y;
            cin >> x >> y;
            row[x] = true;
            col[y] = true;
        }
        //protita row tei dekhte hobe je keu amake attack kore kina sei row te gele
        int rc = 0,cc = 0;
        for(int i = 1; i <= n; i++)
        {

            if(!row[i]) rc++;
            if(!col[i]) cc++;
        }
        if(rc && cc) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            }
    }
}
