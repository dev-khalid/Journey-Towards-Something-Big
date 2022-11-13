#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9+7;
ll arr[1000000+2];
void preCalculate() {
    arr[0] = 1;
    for(int i = 1; i < 1000001; i++) {
        arr[i] = arr[i-1] * i;
        arr[i]%=MOD;
    }

}
int main() {
    preCalculate();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll sum =0;
        for(int i = 0; i < n; i++) {
            sum+=arr[v[i]];
            sum%=MOD;
        }
        cout << sum << endl;
    }
}
