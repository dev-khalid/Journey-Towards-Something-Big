#include<bits/stdc++.h>
using namespace std;

int calculateM(int n) {
    return (n)/2+1;
}
int main() {
    int n;
    cin >> n;
    int m = calculateM(n);
    int x = 0;
    cout << m << endl;
    for(int i = 0; i < m && x<=n ; i++) {
        cout << 1 << " " << i+1 << endl;
        x++;
    }
    int i = 2;
    while(x<n) {
        cout << m << " " << i++ << endl;
        x++;
    }
    return 0;
}
