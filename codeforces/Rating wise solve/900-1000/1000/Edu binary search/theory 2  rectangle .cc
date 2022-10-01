#include<bits/stdc++.h>
using namespace std;
int min_required(int a,int b,int n) {
    return min(a,b)*n;
}
bool available(int a,int b,int n,int grid) {
    int total_available = 0;
    total_available = (grid/a)*(grid/b);
    return total_available >= n;
}
int main() {
    int a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    int l = a*b, h = min_required(a,b,n);
    int m;
    int ans = h;

    while(l <= h) {
        m = l + (h-l)/2;
        if(available(a,b,n,m)) {
            ans = min(ans,m);
            h = m-1;
        } else {
            l = m+1;
        }
    }
    cout << ans << endl;


    vector<int> arr = {0,0,0,1,1,1,1,1,1,1,1};
     l = 0, h = arr.size()-1;
     ans = h;

    while(l <= h) {
        m = l + (h-l)/2;
        if(arr[m]) {
            ans = min(ans,m);
            h = m-1;
        } else {
            l = m+1;
        }
    }
    cout << ans << endl;
}
