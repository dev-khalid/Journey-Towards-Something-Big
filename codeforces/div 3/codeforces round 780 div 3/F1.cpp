

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         int n;
         cin >> n;
         string s;
         cin >> s;
         int plus = 0, minus = 0;
         vector<int> p(n+1);
         vector<int> m(n+1);
         for(int i = 0; i < n; i++) {
            char el = s[i];
            if(el=='+') {
                plus++;
            } else {
                minus++;
            }
            p[i+1] = plus;
            m[i+1] = minus;
         }
         int ans = 0;
         for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                plus = p[j]-p[i-1];
                minus = m[j]-m[i-1];
                if(minus>=plus && (minus-plus)%3==0) {
                    ans++;
                }
            }
         }
         cout << ans << endl;

    }
}

