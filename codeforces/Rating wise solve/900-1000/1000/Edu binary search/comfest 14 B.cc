#include<bits/stdc++.h>
using namespace std;
bool validity(int need, int n) {
    return need <= n && n > 0;
}
int main()  {
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int x = n;
    int ans = 0;
    for(int i = n-1; i >= 0; i--) {
        int need = d/v[i] + 1;

        if(validity(need,x)){

            ans++;
            x-=need;
        } else {
            break;
        }
    }
    cout << ans << endl;
}
