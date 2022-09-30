#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int upper_bound_id(vector<int> v,int n,int key) {
    int m,l = 0,h = n-1;
    if(v[h]<=key) return h+1;
    if(v[l]>key) return 0;
    int ans = -1;
    while(l<h) {
        m = l+(h-l)/2;
        if(v[m]<=key) {
            ans = max(ans,m);
            l = m+1;
        } else {
            h = m;
        }
    }
    return ans+1;
}
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    for(int i = 0; i < k; i++) {
        cin >> x;
        cout << upper_bound(v.begin(),v.end(),x)-v.begin() << endl;
    }
}
