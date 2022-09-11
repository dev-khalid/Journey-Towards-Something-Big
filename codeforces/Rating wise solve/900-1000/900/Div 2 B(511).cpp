#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x,y,mx  = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        mx = max(mx,x+y);
    }
    cout << mx << endl;
    return 0;
}
