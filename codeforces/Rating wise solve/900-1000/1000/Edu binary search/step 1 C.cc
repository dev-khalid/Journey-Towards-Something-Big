
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        cout << lower_bound(v.begin(),v.end(),x)-v.begin()+1 << endl;
    }
}
