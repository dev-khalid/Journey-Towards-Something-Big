
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,k;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cin >> k;
    int x,y;
    vector<int> ans(k);
    for(int i = 0; i < k; i++) {
        cin >> x >> y;
        int l = lower_bound(v.begin(),v.end(),x) - v.begin();
        int h = upper_bound(v.begin(),v.end(),y) - v.begin();
        cout << h-l << endl;
        ans[i] = h-l;

    }
    for(auto it: ans ) cout << it << " ";
}
