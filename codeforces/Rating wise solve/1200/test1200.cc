#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,l;
    cin >> n >> l;
    vector<double> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n==1) {
        //this can be in the middle also . 1 10 3
        cout << max(v[0],l-v[0]) << endl;
        return 0;
    }
    sort(v.begin(),v.end());
    double mx = 0;
    for(int i = 1; i <n; i++) {
        mx = max(mx,v[i]-v[i-1]);
    }
    double ans = (mx/2.0);

    if(v[0]!=0) {
        ans = max(ans,v[0]);
    }
    if(v[n-1]!=l) {
        ans = max(ans,l-v[n-1]);
    }
    printf("%0.10lf\n",ans);
}
