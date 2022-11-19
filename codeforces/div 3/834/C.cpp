#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r,x,a,b;
        cin >> l >> r >> x >> a >> b;
        if(a==b) {
            cout << 0 << endl;
        } else if(a<b) {
            int ans = -1;
            if(abs(b-a) >=x) {
                ans = 1;
            } else if(abs(a-l)>=x) {
                ans = 2;
            } else if(abs(r-a)>=x) {
                if((r-b)>=x) {
                    ans = 2;
                } else if(b-l>=x) {
                    ans = 3;
                }
            }
            cout << ans << endl;
        } else {
            int ans = -1;
            if(abs(a-b)>=x) {
                ans = 1;
            } else if(abs(r-a)>=x) {
                ans = 2;
            } else if(abs(l-a)>=x) {
                if(b-l>=x) {
                   ans = 2;
                } else if(r-b>=x) {
                    ans = 3;
                }
            }
            cout << ans << endl;
        }
    }
}


